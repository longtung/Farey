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
	int a = 0, b = 1, c = 1, d = 0; 	//establishing endpoints
	double x = atof(argv[1]);			//the real number
	int mn, md=0; 						//mediant


	//1.compute mediant of endpoints
	while (md < 1000000 || fabs(x*md - mn) <= TOL*md)
	{
		mn = a + c;
		md = b + d;

		//2.determine whether x is > or < mediant
		//2.1 IF x smaller than med, replace larger endpoint with mediant
		if (x*md < mn)
		{
			c = mn;
			d = md;
			cout << "1: " << mn << "/" << md << endl;
		}
		//2.2 IF larger than med, replace smaller endpoint with mediant
		else if (x*md > mn)
		{
			a = mn;
			b = md;
			cout << "2: " << mn << "/" << md << endl;
		}
		else
			break;

	}

	//4. output last mediant
	cout << mn << "/" << md << endl;


	return 0;
}

