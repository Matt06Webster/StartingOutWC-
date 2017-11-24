/*
 * files.cpp
 *
 *  Created on: Sep 19, 2017
 *      Author: matt
 *
 *      reads numbers from a file
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	float num1;
	float num2;
	float num3;
	float num4;
	float num5;
	ifstream input;

	input.open("numbers.txt");

	input >> num1 >> num2 >> num3 >> num4 >> num5;

	cout << num1 << endl << num2 << endl << num3 << endl << num4 << endl << num5 << endl;
	cout << num1 + num2 + num3 + num4 + num5;
	input.close();

	return 0;
}
