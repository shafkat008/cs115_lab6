// File name: ~ftp/pub/class/170/ftp/cpp/BinarySearch/BinSearch.h
// Purpose:   interface for BinSearch.cpp

#include <iostream>
#include <iomanip>   // needed for setw
#include <cstdlib>   // needed for random number generator
#include <ctime>     // used to seed random numbers

using namespace std;


const int MAXINDEX = 100;

typedef int IntArrayType[MAXINDEX];


// Function prototypes:

int binarySearch(IntArrayType intArray, int low, int high, int target);

void generateArray(IntArrayType intArray, int count);

void printArray(IntArrayType intArray, int count);


