/*
 * pizza.cpp
 *
 *  Created on: Sep 19, 2017
 *      Author: matt
 *
 *
 *      Caclulates the number of slices any pizza
 *      can be divided into
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
#define pi 3.14159
#define slice 14.125

int main(){
	float D;
	float r;

	float rsqrd;
	float Area;
	float slices;

	cout << "Whats is the diameter of the pizza in inches? ";
	cin >> D;
	r = D/2;
	rsqrd = pow(r,2);

	Area = pi*rsqrd;
	slices = Area / slice;

	cout << setprecision(1) << fixed;
	cout << slices << " slices" << endl;

	return 0;
}


