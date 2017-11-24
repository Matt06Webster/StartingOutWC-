/*
 * Avg.cpp
 *
 *  Created on: Sep 10, 2017
 *      Author: matt
 *
 *      Takes in 5 test scores and displays the average of the scores
 *
 *
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float T1;
	float T2;
	float T3;
	float T4;
	float T5;

	cout << "Enter Test Score #1: ";
	cin >> T1;
	cout << "Enter Test Score #2: ";
	cin >> T2;
	cout << "Enter Test Score #3: ";
	cin >> T3;
	cout << "Enter Test Score #4: ";
	cin >> T4;
	cout << "Enter Test Score #5: ";
	cin >> T5;

	cout << "Test Average: ";
	cout << setprecision(1) << fixed << showpoint;
	cout << (T1 + T2 + T3 + T4 + T5) / 5 << "%";

	return 0;
}

