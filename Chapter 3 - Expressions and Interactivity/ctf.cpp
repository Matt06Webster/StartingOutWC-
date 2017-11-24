/*
 * ctf.cpp
 *
 *  Created on: Sep 13, 2017
 *      Author: matt
 *
 *      converts centigrade to
 *      fahrenheit
 */

#include <iostream>

using namespace std;

int main(){
	float cent;
	float Fahr;

	cout << "Enter the temperature in centigrade: ";
	cin >> cent;

	Fahr = (9/5)*cent;
	Fahr += 32;

	cout << "Temperature: " << Fahr << " degrees Fahrenheit";


	return 0;
}




