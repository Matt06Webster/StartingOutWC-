/*
 * payments.cpp
 *
 *  Created on: Sep 18, 2017
 *      Author: matt
 *
 *      calculates the monthly payment on a loan
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	float rate;
	int payments;
	float loan;

	float top;
	float bottom;
	float quotient;

	float rateplus1;
	float totheN;
	float total;
	float realrate;

	cout << "Enter the monthly interest rate: ";
	cin >> rate;
	cout << "Enter the number of payments to be made: ";
	cin >> payments;
	cout << "Enter the amount of the loan: ";
	cin >> loan;

	realrate = rate / 100;
	rateplus1 = realrate + 1;
	totheN = pow(rateplus1, payments);
	bottom = totheN - 1;

	top = realrate * totheN;
	quotient = top / bottom;

	total = quotient * loan;

	cout << setprecision(2) << showpoint << fixed;
	cout << "Loan Amount:           $ " << setw(9) << right << loan <<  endl;
	cout << setprecision(0);
	cout << "Monthly interest rate:   " << setw(9) << right << rate << "%" << endl;
	cout << "Number of Payments:      " << setw(9) << right << payments << endl;
	cout << setprecision(2) << fixed << showpoint;
	cout << "Monthly Payment:       $ " << setw(9) << right << total << endl;
	cout << "Amount Paid Back:      $ " << setw(9) << right << total*payments << endl;
	cout << "Interest Paid:         $ " << setw(9) << right << (total*payments)- loan << endl;



	return 0;
}


