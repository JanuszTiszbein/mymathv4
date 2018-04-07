#include <iostream>
#include <cmath>



double pi()
{
	double pi;
	double sum=0;
	long long i=1;

	while(i<100000)
	{
		sum=sum+(((double)1/(double)i)-(double)1/(double)(i+2));

		i=i+4;


	}

	pi=sum*4;



	return pi;
}



double degtoradians (double deg)
{
	double radians;

	double p;

	p = pi();

	radians = deg* p/(double)180;

	return radians;

}


char habitable_zone(double absolute_luminosity,double r)
{

	double r1,r2;

	r1=pow((absolute_luminosity/1.1), 0.5);

	r2=pow((absolute_luminosity/0.53),0.5);

	if((r>=r1) && (r<=r2))
	{
		return 'Y';
	}
	else
	{
		return 'N';
	}

}


double absolute_magnitude(float apparent_magnitude,double distancefromearth) //distance in in parsecs
{
	double absolute_magnitude1;

	absolute_magnitude1 = apparent_magnitude-5*(log10(distancefromearth)-1);

	return absolute_magnitude1;
}


double bolometric_magnitude(double absolute_magnitude, char spectral_class)
{
	double bolometric_magnitude1;
	float BC; //bolometric correction constant

	switch(spectral_class)
	{
	case 'B':
	{
		BC = -2;
	}
	case 'A':
	{
		BC = -0.3;
	}

	case 'F':
	{
		BC = -.15;
	}

	case 'G':
	{
		BC = -0.4;
	}

	case 'K':
	{
		BC = -0.8;
	}

	case 'M':
	{
		BC = -2;
	}

	}

	bolometric_magnitude1=absolute_magnitude + BC;

	return bolometric_magnitude1;
}


double absolute_luminosity(double bolometric_magnitude)
{

	double absolute_luminosity1;

	absolute_luminosity1= pow(10,((bolometric_magnitude - 4.72)/-2.5));

	return absolute_luminosity1;
}
