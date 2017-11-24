/*
 * tax.cpp
 *
 *  Created on: Sep 13, 2017
 *      Author: matt
 *
 *      asks for the actual value of a piece of
 *      property and displays the assessment
 *      value and property tax
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float Actual;
	float Assessment;
	float tax;

	cout << "Enter the actual value of the property: ";
	cin >> Actual;

	Assessment = Actual*.6;
	tax = Assessment*.0064;

	cout << setprecision(2) << fixed << showpoint;
	cout << "Actual Value:     $" << Actual << endl;
	cout << "Assessment Value: $" << Assessment << endl;
	cout << "Property Tax:     $" << tax << endl;


	return 0;
}



