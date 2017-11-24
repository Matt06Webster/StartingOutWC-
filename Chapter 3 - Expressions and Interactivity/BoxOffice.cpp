/*
 * BoxOffice.cpp
 *
 *  Created on: Sep 13, 2017
 *      Author: matt
 *
 *
 *      Calculates a theaters gross
 *      and net box office
 *      profit.
 */


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	char Name[50];
	float Aticket;
	float Cticket;

	cout << "Enter the name of the movie? ";
	cin.getline(Name,49);

	cout << "How many adult tickets were sold? ";
	cin >> Aticket;

	cout << "How many child tickets were sold? ";
	cin >> Cticket;

	float Gprofit = (6*Aticket) + (3*Cticket);


	cout << "Movie Name:                       ";
	cout << "\""<< Name << "\"" << endl;
	cout << "Adult Tickets Sold:              ";
	cout << setw(7) << Aticket << endl;
	cout << "Child Tickets Sold:              ";
	cout << setw(7) << Cticket << endl;
	cout << "Gross Box Office Profit:          $ ";
	cout << setw(7) << setprecision(2) << fixed << showpoint;
	cout << Gprofit << endl;
	cout << "Net Box Office Profit:            $ ";
	cout << setw(7) << Gprofit*.2 << endl;
	cout << "Amount Paid to Distributor:       $ ";
	cout << setw(7) << Gprofit*.8 << endl;

	return 0;
}



