/*
 * file.cpp
 *
 *  Created on: Sep 19, 2017
 *      Author: matt
 *
 *      Saves 5 numbers to a file
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	float Num1;
	float Num2;
	float Num3;
	float Num4;
	float Num5;
	ofstream numbers;

	cout << "Enter 5 numbers: ";
	cin >> Num1 >> Num2 >> Num3 >> Num4 >> Num5;

	numbers.open("numbers.txt");
	numbers << Num1 << endl << Num2 << endl << Num3 << endl << Num4 << endl << Num5;

	numbers.close();

	return 0;
}
