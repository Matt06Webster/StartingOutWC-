/*
 * MPG.cpp
 *
 *  Created on: Sep 10, 2017
 *      Author: matt
 *
 *      Calculates the miles per gallon on a car that drives
 *      350 miles on 12 gallons of gas
 */

#include <iostream>

using namespace std;

int main(){
	int miles = 350;
	int gallons = 12;

	cout << "Miles per Gallon: " << miles / gallons;

	return 0;
}


