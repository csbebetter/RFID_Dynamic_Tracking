/*
 *****************************************************************************
 *                                                                           *
 *                 IMPINJ CONFIDENTIAL AND PROPRIETARY                       *
 *                                                                           *
 * This source code is the sole property of Impinj, Inc.  Reproduction or    *
 * utilization of this source code in whole or in part is forbidden without  *
 * the prior written consent of Impinj, Inc.                                 *
 *                                                                           *
 * (c) Copyright Impinj, Inc. 2007,2008. All rights reserved.                *
 *                                                                           *
 *****************************************************************************/
#ifndef __LTKCPP_CONNECTION_H__
#define __LTKCPP_CONNECTION_H__

// Forward declaration for OpenSSL's BIO object. 
struct bio_st;

/**
 *****************************************************************************
 **
 ** @file   ltkcpp_connection.h
 **
 ** @brief  Class for handling two-way LLRP message traffic
 **
 *****************************************************************************/
namespace LLRP
{

/**
 *****************************************************************************
 **
 ** @brief  LLRP connection class
 **
 ** An LLRP connection consists of:
 **     - A network socket
 **     - An input queue of messages already received. Used to hold
 **       asynchronous messages while awaiting a response.
 **     - Receiver state.
 **         - The receive buffer and count
 **         - Whether a frame is valid. Valid means that the receive
 **           buffer holds a frame and the MessageLength, MessageType,
 **           ProtocolVersion, and MessageID are valid (usable).
 **           Not valid with a nBuffer greater than 0 means that a frame
 **           is being received. Sometimes we want to look at the frame
 **           after it has been (or attempted to be) decoded.
 **         - Top-level frame variables: CFrameExtract
 **         - Details of the last receiver error, including I/O errors,
 **           end-of-file (EOF), timeout, or decode errors.
 **     - Send state
 **         - The send buffer and count
 **         - Details of the last send error, including I/O errors,
 **           or encode errors.
 ** 
 ** @ingroup LTKCoreElement
 **
 *****************************************************************************/

class CConnection
{
  public:
    CConnection (
      const CTypeRegistry *     pTypeRegistry,
      unsigned int              nBufferSize);

    ~CConnection (void);

    int
    openConnectionToReader (
      const char *              pReaderHostName);

    int
    openSecureConnectionToReader(const char* pReaderHostName);

    const char *
    getConnectError (void);

    int
    closeConnectionToReader (void);

    CMessage *
    transact (
      CMessage *                pSendMessage,
      int                       nMaxMS);

    const CErrorDetails *
    getTransactError (void);

    EResultCode
    sendMessage (
      CMessage *                pMessage);

    const CErrorDetails *
    getSendError (void);

    CMessage *
    recvMessage (
      int                       nMaxMS);

    CMessage *
    recvResponse (
      int                       nMaxMS,
      const CTypeDescriptor *   pResponseType,
      llrp_u32_t                ResponseMessageID);

    const CErrorDetails *
    getRecvError (void);

  private:
    enum E_LLRP_CONNECTION_TYPE
    {
        E_LLRP_CONNECTION_TYPE_UNSECURE,
        E_LLRP_CONNECTION_TYPE_SSL
    };

    /** An OpenSSL-provided socket abstraction for both encrypted and unencrypted communication */
    struct bio_st *             m_pBio;

    /** Error message if openConnectionToReader() or close...() fail */
    const char *                m_pConnectErrorStr;

    /** The registry to consult for message/parameter types during decode. */
    const CTypeRegistry *       m_pTypeRegistry;

    /** Head of queue of messages already received. Probably events. */
    std::list<CMessage *>       m_listInputQueue;

    /** Size of the send/recv buffers, below, specified at construct() time */
    unsigned int                m_nBufferSize;

    /** Receive state */
    struct RecvState
    {
        /** The buffer. Contains incomming frame. */
        llrp_byte_t *       pBuffer;

        /** Count of bytes currently in buffer */
        unsigned int        nBuffer;

        /** Valid boolean. TRUE means the buffer and frame summary
         ** variables are valid (usable). This is always
         ** FALSE mid receive */
        int                 bFrameValid;

        /** Frame summary variables. Derived by FrameExtract() */
        CFrameExtract       FrameExtract;

        /** Details of last I/O or decoder error. */
        CErrorDetails       ErrorDetails;
    }                           m_Recv;

    /** Send state */
    struct SendState
    {
        /** The buffer. Contains outgoing frame. */
        llrp_byte_t *       pBuffer;

        /** Count of bytes currently in buffer (from last send) */
        unsigned int        nBuffer;

        /** Details of last I/O or encoder error. */
        CErrorDetails       ErrorDetails;
    }                           m_Send;

private:
    // These functions are a no-op on Linux, always returning 0. On Windows, it
    // loads/unloads the Winsock DLL and returns 0 if successful, otherwise it returns
    // the error code provided by Winsock.
    int initializeWinsock();
    int shutdownWinsock();

    int initializeSslBio(bio_st** ppBio);
    int openSocketConnection(const char* pkzReaderHostName, const char* pkzPort, unsigned long* phSocket);
    int openConnectionToReader(const char* pReaderHostName, E_LLRP_CONNECTION_TYPE eType);

    EResultCode
    recvAdvance (
      int                           nMaxMS,
      time_t                        timeLimit);

    time_t
    calculateTimeLimit (
      int                           nMaxMS);

    void initializeOpenSSL();
};

}; /* namespace LLRP */

#endif // __LTKCPP_CONNECTION_H__