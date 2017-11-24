/*
 * rain.cpp
 *
 *  Created on: Sep 10, 2017
 *      Author: matt
 *
 *      Calculates the average rainfall for three
 *      months. Reads input from a file
 */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(){
	char month1[10];
	char month2[10];
	char month3[10];
	float rain1;
	float rain2;
	float rain3;
	float avg;
	ifstream in;

	in.open("rain.txt");

	in >> month1 >> month2 >> month3;

	in >> rain1 >> rain2 >> rain3;

	avg = (rain1 + rain2 + rain3) / 3;

	cout << "The average rainfall for " << month1 << ", ";
	cout << month2 << ", and " << month3 << " is ";
	cout << setprecision(2) << showpoint << fixed;
	cout << avg << " inches";

	in.close();

	return 0;
}


