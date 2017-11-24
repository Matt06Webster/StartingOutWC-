/*
 * tax.cpp
 *
 *  Created on: Sep 13, 2017
 *      Author: matt
 */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(){
	char month[11];
	int year;
	float county;
	float state;
	float gross;
	float sales;
	ofstream out;

	out.open("taxes.txt");

	cout << "Enter the month: ";
	cin >> month;
	cout << "Enter the year: ";
	cin >> year;
	cout << "Enter the total sales made: ";
	cin >> gross;

	sales = gross / 1.06;
	county = sales*.02;
	state = sales*.04;


	out << "Month: " << month << " " << year << endl;
	out << "-------------------------" << endl;
	out << setprecision(2) << fixed << showpoint << right;
	out << "Total Collected:          $ ";
	out << setw(8) << gross << endl;
	out << "Sales:                    $ ";
	out << setw(8) << sales << endl;
	out << "County Sales Tax:         $ ";
	out << setw(8) << county << endl;
	out << "State Sales Tax:          $ ";
	out << setw(8) << state << endl;
	out << "Total Sales Tax:          $ ";
	out << setw(8) << sales + county << endl;

	out.close();

	return 0;
}


