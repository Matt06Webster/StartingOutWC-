/*  Matthew Webster
*   Chapter 9
*   ArrayAlloocator.cpp
*   Dynamically allocates an array of integers
*   Utilizes a function for allocation
*
*   IMPORTANT REMINDERS:
*   1. Pointers only hold one type of value: an address
*   2. An array name is a pointer to the first element in an array
*
*   Write a function that dynamically allocates an array of integers.
*   The function should accept a integer argument indicating the
*   number of elements to allocate. The function should return a pointer
*   to the array.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int *allocate(int);   // Num is the number of elements to allocate
                      // Function returns a pointer
int main(){
  int size;
  int *VEC;
  
  cout << "Enter size of array: ";
  cin >> size;

  VEC = allocate(size);
  
  return 0;
}

int *allocate(int elements){
  int *ARRAY;
  int Num;
  ARRAY = new int[elements];
  
  for(int i = 0; i < elements; i++){
    cout << "Enter element " << (i + 1) << ": ";
    cin >> Num;
    ARRAY[i] = Num; 
  }
  
  return ARRAY;
}
