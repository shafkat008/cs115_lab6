// Name: Shafkat Alam
// Student Number: 200443237
// Date: 13/10/2021

// File name: BinSearch.cpp
// Purpose    implementatin of BinSearch.h

#include "BinSearch.h"
using namespace std;


////////////////////////////////////////////////////////////////////////////
// Function: void GenerateArray(IntArrayType IntArray, int Count)
// Purpose:    Generate an array of random integers in ascending order
// Parameters: IntArray: Array of integers in acending order
//             Count :   The number of integers in the array 
// Return:     None
////////////////////////////////////////////////////////////////////////////
void generateArray(IntArrayType intArray, int count)
{
  int j;

  srand((unsigned) time(NULL)); // seed the rand() function

  intArray[0] = rand()%10; // pick a random number as the first value
  for (j = 1; j < count; j++)
    // make sure the array is in ascending order
    intArray[j] = intArray[j - 1] + rand()%10 + 2;
}

////////////////////////////////////////////////////////////////////////////
// Function: void PrintArray(IntArrayType IntArray, int Count)
// Purpose:    printing the array 
// Parameters: IntArray: Array of integers in acending order
//             Count :   The number of integers in the array 
// Return:     None
////////////////////////////////////////////////////////////////////////////
void printArray(IntArrayType intArray, int count)
{
  int k;

  //Print header
  cout << "Ones ->";
  for (k = 0; k <= 9; k++)
  {
    cout << setw(4) << k << " |";
  }
  cout << endl;
  cout << "Tens ||" << setw(60) << setfill('=')<< '|' << endl << setfill(' ');
   
  for (k = 0; k < count; k++)
  {
    //Label new rows
    if (k % 10 == 0)
      cout << setw(4) << k/10 << " ||";
      
    //Print the array value
    cout << setw(4) << intArray[k] << " |";

    //End rows
    if (k % 10 == 9)
      cout << endl;   
  }

  cout << endl;
}



////////////////////////////////////////////////////////////////////////////
// Function: 
//     int BinarySearch(IntArrayType IntArray, int Low, int High, int Target)
// Purpose:    search "Target" in an ordered integer array
// Parameters: IntArray: Array of integers in acending order
//             Low:      The starting index
//             High:     The ending index
//             Target:   The integer value to search
// Return:     The index of the value if found
//             -1 if not found
////////////////////////////////////////////////////////////////////////////
int binarySearch(IntArrayType intArray, int low, int high, int target)
{
  int loopCtr = 1;

  int mid, difference;

  while (low <= high)
  {
    mid = (low + high) / 2;
    difference = intArray[mid] - target;


    cout << "Target: " << target << endl;
    cout << "Mid: " << mid << endl;
    cout << "Difference: " << difference << endl;
    cout << "Loop count: " << loopCtr << endl;

    printArray(intArray, mid);
    loopCtr++;

    if (difference == 0)         // if intArray[mid] == target
      return mid;
    else if (difference < 0)     // if intArray[mid] < target
      low = mid + 1;
    else
      high = mid - 1;
  }

  return -1;   // If reach here, Target was not found.
}



