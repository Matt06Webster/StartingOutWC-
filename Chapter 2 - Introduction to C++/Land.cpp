/*
 * Land.cpp
 *
 *  Created on: Sep 10, 2017
 *      Author: matt
 *
 *      Calculates the number acres in
 *      389767 square feet
 */

#include <iostream>

using namespace std;

int main(){
	float acre = 43560;
	float total = 389767;

	float acres = total / acre;
	cout << "Number of acres: " << acres << " acres";

	return 0;
}


