// File name: ~ftp/pub/class/170/ftp/cpp/SelectionSort/SelMain.cpp
// Purpose:   Driver program for selection sort
#include "SelSort.h"

using namespace std;

int main(void)
{
  IntArrayType intArray;

  generateArray(intArray, MAXINDEX); // generate 100 random integers

  cout << "Here is the content of the array: " << endl;
  printArray(intArray, MAXINDEX);

  // Sort IntArray in descending order using selection sort algorithm
  selSort(intArray, MAXINDEX);

  cout << "Here is the content of the array sorted in "
	  << "ascending order using the\nselection sort algorithm: " << endl;
  printArray(intArray, MAXINDEX);

  return 0;
}

