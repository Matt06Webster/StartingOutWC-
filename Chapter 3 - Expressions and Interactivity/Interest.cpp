/*
 * Interest.cpp
 *
 *  Created on: Sep 18, 2017
 *      Author: matt
 *
 *      calculates interest earned from the
 *      principle, interest rate, and number
 *      of times the interest compounds
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	float principle;
	float rate;
	float rateper;
	int compound;

	float ROT;
	float plus1;
	float totheT;
	float Amount;


	cout << "Enter the principle: ";
	cin >> principle;
	cout << "Enter the interest rate: ";
	cin >> rate;
	cout << "How many times is the interest compounded yearly? ";
	cin >> compound;

	rateper = rate / 100;
	ROT = rateper / compound;
	plus1 = ROT + 1;
	totheT = pow(plus1,compound);
	Amount = principle*totheT;

	cout << "Interest rate:         " << setw(8) << right << rate << "%" << endl;
	cout << "Times compounded:      " << setw(8) << compound << endl;
	cout << setprecision(2) << fixed << showpoint;
	cout << "Principal:           $ " << setw(8) << right << principle << endl;
	cout << "Interest:            $ " << setw(8) << right << Amount - principle << endl;
	cout << "Amount in Savings:   $ " << setw(8) << right << Amount << endl;



	return 0;
}


