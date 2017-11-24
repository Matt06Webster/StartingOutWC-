/*
 * widget.cpp
 *
 *  Created on: Sep 13, 2017
 *      Author: matt
 *
 *
 *      Calculates how many widgets are stacked on
 *      a pallet.
 */

#include <iostream>
#include <iomanip>

using namespace std;

#define weight 9.2

int main(){
	int EPallet;
	int FPallet;
	float widgets;

	cout << "How much does the pallet weigh when empty?? ";
	cin >> EPallet;

	cout << "How much does the pallet weigh when full? ";
	cin >> FPallet;

	FPallet -= EPallet;

	widgets = (float)EPallet / weight;

	cout << "Number of widgets: " << widgets << " widget(s)";

	return 0;
}



