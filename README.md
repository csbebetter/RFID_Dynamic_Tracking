# RFID_Dynamic_Tracking
It is just a ROS package, which reads the RFID tag through two antennas to obtain the phase, and outputs the speed and angular velocity of the car through the pid algorithm

## TREE
.
├── CMakeLists.txt
├── include
│   └── rfid_Reader
│       └── phase_processing.hpp
├── ltkcpp
│   ├── include
│   │   ├── impinj_ltkcpp.h
│   │   ├── llrp2xml
│   │   ├── ltkcpp_base.h
│   │   ├── ltkcpp_connection.h
│   │   ├── ltkcpp_frame.h
│   │   ├── ltkcpp.h
│   │   ├── ltkcpp_platform.h
│   │   ├── ltkcpp_xmltext.h
│   │   ├── MyData.h
│   │   ├── out_impinj_ltkcpp.h
│   │   ├── out_ltkcpp.h
│   │   ├── RFIDHandler.h
│   │   ├── StaticProperties.h
│   │   ├── TagData.h
│   │   ├── utils.h
│   │   ├── version.inc
│   │   └── xml2llrp
│   └── lib
│       ├── libcrypto_armv7l.a
│       ├── libcrypto_atmel.a
│       ├── libdl_armv7l.a
│       ├── libdl_atmel.a
│       ├── libltkcpp_armv7l.a
│       ├── libltkcpp_armv7l.so
│       ├── libltkcpp_atmel.a
│       ├── libltkcpp_atmel.so
│       ├── libltkcppimpinj_armv7l.a
│       ├── libltkcppimpinj_armv7l.so
│       ├── libltkcppimpinj_atmel.a
│       ├── libltkcppimpinj_atmel.so
│       ├── libltkcppimpinj_x86_64.a
│       ├── libltkcppimpinj_x86_64.so
│       ├── libltkcpp_x86_64.a
│       ├── libltkcpp_x86_64.so
│       ├── libssl_armv7l.a
│       ├── libssl_atmel.a
│       ├── libxml2_armv7l.a
│       ├── libxml2_atmel.a
│       ├── libxml2_x86_64.a
│       └── libxml2_x86.a
├── msg
│   └── DataDev.msg
├── package.xml
└── src
    ├── motion_pub.cpp
    ├── RFIDHandler.cpp
    ├── rfid_publisher.cpp
    └── utils.cpp

## notice
Some libraries use the source code officially provided by Impinj, in the ltkcpp directory.
