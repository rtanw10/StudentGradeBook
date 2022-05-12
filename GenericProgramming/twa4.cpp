#include <iostream>
#include "twa4.h"

int main() {
   /* Uses six arrays (2 of int, double, and char) to test the template
   function findMinValue() */

   //Testing Int Arrays
   int childrenAges[5] = {5,17,2,15,6};
   int minChildAge = findMinValue(childrenAges, 5);
   std::cout << "Int Array Test 1: \n";
   printArray(childrenAges, 5);
   std::cout << "Minimum: " << minChildAge << "\n\n";

   int childrenHeights[10] = {140,166,89,23,45,98,100,44,34,77};
   int minChildHeight = findMinValue(childrenHeights, 10);
   std::cout << "Int Array Test 2: \n";
   printArray(childrenHeights, 10);
   std::cout << "Minimum: " << minChildHeight << "\n\n";

   //Testing Double Arrays
   double magOfEarthquakes[7] = {3.3,9.8,7.6,3.4,5.7,1.9,6.0};
   double minMagOfEarthquake = findMinValue(magOfEarthquakes,7);
   std::cout << "Double Array Test 1: \n";
   printArray(magOfEarthquakes,7);
   std::cout << "Minimum: " << minMagOfEarthquake << "\n\n";

   double randomDecimals[8] = {4.5,6.9,6.2,4.9,1.2,5.6,9.7,3.6};
   double minRandDecimal = findMinValue(randomDecimals,8);
   std::cout << "Double Array Test 2: \n";
   printArray(randomDecimals,8);
   std::cout << "Minimum: " << minRandDecimal << "\n\n";

   //Testing Char Arrays
   char firstName[5] = {'T','A','N','V','I'};
   char minFirLetter = findMinValue(firstName,5);
   std::cout << "Char Array Test 1: \n";
   printArray(firstName,5);
   std::cout << "Minimum: " << minFirLetter << "\n\n";

   char lastName[7] = {'W','A','G','H','E','L','A'};
   char minLastLetter = findMinValue(lastName,7);
   std::cout << "Char Array Test 2: \n";
   printArray(lastName,7);
   std::cout << "Minimum: " << minLastLetter << "\n\n";
}

/*
----- Output -----
Int Array Test 1:
5 17 2 15 6
Minimum: 2

Int Array Test 2:
140 166 89 23 45 98 100 44 34 77
Minimum: 23

Double Array Test 1:
3.3 9.8 7.6 3.4 5.7 1.9 6
Minimum: 1.9

Double Array Test 2:
4.5 6.9 6.2 4.9 1.2 5.6 9.7 3.6
Minimum: 1.2

Char Array Test 1:
T A N V I
Minimum: A

Char Array Test 2:
W A G H E L A
Minimum: A


*/
