/*
 * angle.cpp
 *
 *  Created on: Sep 19, 2017
 *      Author: matt
 *
 *
 *      Displays the sin cosine
 *      and tangent of an angle
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	double angle;

	cout << "Enter an angle in radians: ";
	cin >> angle;

	cout << setprecision(4) << fixed;
	cout << "Sin = " << sin(angle) << endl;
	cout << "Cos = " << cos(angle) << endl;
	cout << "Tan = " << tan(angle) << endl;


	return 0;
}



