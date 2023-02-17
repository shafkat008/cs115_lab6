// File name:  ~ftp/pub/class/170/ftp/cpp/BinarySearch/BinMain.cpp
// Purpose:    Driver program for binary search program

#include "BinSearch.h"
using namespace std;

int main(void)
{
  IntArrayType intArray;
  int number, pos;

  generateArray(intArray, MAXINDEX); // generate sorted integer array

  cout << "The contents of the array are: " << endl;
  printArray(intArray, MAXINDEX);

  cout << "Enter the integer to search for: " << endl;
  cin >> number;

  pos = binarySearch(intArray, 0, MAXINDEX - 1, number);

  if(pos == -1)
    cout << "Not found" << endl;

  else
    cout << "Number " << number << " found in Position " << pos << endl;

  return 0;
}


