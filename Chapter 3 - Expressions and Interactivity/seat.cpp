/*
 * seat.cpp
 *
 *  Created on: Sep 10, 2017
 *      Author: matt
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int ASeats;
	int BSeats;
	int CSeats;
	float Sales;

	cout << "How many Class A tickets were sold? ";
	cin >> ASeats;
	cout << "How many Class B tickets were sold? ";
	cin >> BSeats;
	cout << "How many Class C tickets were sold? ";
	cin >> CSeats;

	Sales = (ASeats*15) + (BSeats*12) + (9*CSeats);

	cout << setprecision(2) << showpoint << fixed;
	cout << "Gross Ticket Sales: $" << Sales;

	return 0;
}


