/*
 * Tax.cpp
 *
 *  Created on: Sep 10, 2017
 *      Author: matt
 *
 *
 *      Computes the total sales tax on a $52 purchase
 *      Assuming state sales tax is 4% and county
 *      sales tax is 2%
 */

#include <iostream>

using namespace std;

int main(){
	int purchase = 52;
	float stateTax = purchase * .04;
	float countyTax = purchase * .02;

	cout << "Total Sales tax: $" << stateTax + countyTax;

	return 0;
}







