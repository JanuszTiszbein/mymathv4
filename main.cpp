#include <cmath>
#include <iostream>
#include "mymath.h"

using namespace std;

int main()
{
	double deg=1;
	float Distance=0.13; //egample of Gliese 581g
	double p=1;




	p=pi();

	cout << p <<endl;

	cout << degtoradians(1.00) << endl;

	cout << endl;

	cout << absolute_magnitude(10.55,6.26)<<endl; //egample of Gliese 581

	cout << bolometric_magnitude(absolute_magnitude(10.55,6.26),'B')<<endl;

	cout <<absolute_luminosity(bolometric_magnitude(absolute_magnitude(10.55,6.26),'B'))<<endl;

	cout << habitable_zone(absolute_luminosity(bolometric_magnitude(absolute_magnitude(10.55,6.26),'B')),Distance)<<endl;

	return 0;
}
