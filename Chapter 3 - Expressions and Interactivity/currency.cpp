/*
 * currency.cpp
 *
 *  Created on: Sep 13, 2017
 *      Author: matt
 *
 *      Converts US Dollars to Japanese Yen and Euros
 */

#include <iostream>
#include <iomanip>

using namespace std;

#define yen 134.33
#define euro 1.1644

int main(){
	float dollar;

	cout << "Input the amount in dollars: ";
	cin >> dollar;

	cout << setprecision(2) << showpoint << fixed;
	cout << "The amount in Yen:   " << dollar*yen << endl;
	cout << "The amount in euros: " << dollar*euro;

	return 0;
}



