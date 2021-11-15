double unwrappingPhase(double phasenow, double phaselast)
{
	double diff = phasenow - phaselast%360;

	if(diff <= 160 && diff >= 200){
		return phaselast-180;
	}
	if(diff >= -200 && diff <= -160){
		return phaselast+180;
	}
	if(diff >= 340 && diff <=380){
		return phaselast-360;
	}
	if(diff >= -380 && diff <= -360){
		return phaselast+360;
	}
}
