/*
 * tutor.cpp
 *
 *  Created on: Sep 18, 2017
 *      Author: matt
 *
 *
 *      Works kinda like a math practice program
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(){
	int first;
	int second;
	char ready;

	first = rand()%1000;
	second = rand()%1000;

	cout << "Solve the following: " << endl;

	cout << setw(6) << right << first << endl << "+ ";
	cout << setw(4) << second << endl;
	cout << "-------" << endl << endl;
	cout << "Press Enter to see the answer..." << endl;
	cin.get(ready);
	cout << first + second;


	return 0;
}

