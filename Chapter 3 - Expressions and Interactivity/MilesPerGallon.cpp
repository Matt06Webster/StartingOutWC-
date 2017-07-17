/*
*
*
*
*
*    Write a Program that calculates a car's gas mileage. The
*    program should ask the user to enter the number of gallons
*    of gas the car can hold, and the number of miles it can be 
*    drivem on a full tank. It should then display the number of 
*    miles that may be driven per gallon of gas.
*
*/

#include <iostream>

using namespace std;

int main(){
  int Cap;
  int Miles;
  
  cout << "Enter the gas tank capacity: ";
  cin >> Cap;
  cout << "How many miles can the car drive on a full tank? ";
  cin >> Miles;
  
  cout << "Car Mileage: " << Miles/Cap << " miles per gallon." << endl;
  
  return 0;
}