/*
 * Prediction.cpp
 *
 *  Created on: Sep 8, 2017
 *      Author: matt
 *
 *      Predicts how much the ast coast division
 *      will generate if the company makes 4.6 million
 *      in sales.
 *      East coast sales generates 62% of total sales
 */

#include <iostream>

using namespace std;

int main(){
	float Total = 4.6;
	float EastCoast = .62;

	cout << "Amount generated by East Coast sales division: $";
	cout << Total*EastCoast << " million";

	return 0;
}






