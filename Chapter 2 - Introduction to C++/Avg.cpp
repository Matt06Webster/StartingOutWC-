/*
 * Avg.cpp
 *
 *  Created on: Sep 10, 2017
 *      Author: matt
 *
 *      Displays 5 test scores and the average of the scores
 *
 *
 */

#include <iostream>

using namespace std;

int main(){
	int T1 = 95;
	int T2 = 57;
	int T3 = 64;
	int T4 = 80;
	int T5 = 71;

	cout << "Test Scores" << endl;
	cout << "------------" << endl << endl;
	cout << "Test #1: " << T1 << endl;
	cout << "Test #2: " << T2 << endl;
	cout << "Test #3: " << T3 << endl;
	cout << "Test #4: " << T4 << endl;
	cout << "Test #5: " << T5 << endl;

	cout << "Test Average: ";
	cout << (T1 + T2 + T3 + T4 + T5) / 5;

	return 0;
}


