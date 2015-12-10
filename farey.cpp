// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <cmath>
#include <cstdlib>



using namespace std;

const double TOL = 1e-6;

int main(int argc, char *argv[]) {
	int a = 0, b = 1, c = 1, d = 0; 	//endpoints
	double x = atof(argv[1]);		//input number
	int mn, md=0; 				//mediant


	//computing mediant of endpoints
	while (md < 500000 || fabs(x*md - mn) <= TOL*md)
	{
		mn = a + c;
		md = b + d;

		//defining whether x is > or < mediant
		if (x*md < mn)
		{
			c = mn;
			d = md;
			cout << "less than md: " << mn << "/" << md << endl;
		}
		else if (x*md > mn)
		{
			a = mn;
			b = md;
			cout << "more than md: " << mn << "/" << md << endl;
		}
		else
			break;

	}

	cout << "output: "<< mn << "/" << md << endl;


	return 0;
}

