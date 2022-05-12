//
// Created by Tanvi Waghela
//
// FILE: bubblesort.h
// PROVIDES: A toolkit of methods needed to run to the maze program
//
// FUNCTIONS in this toolkit:
//
//   T findMinValue(T array[], int size)
//     Postcondition: Finds and returns the minimum value of the array given
//                    by the user
//
//   void printArray(T array[], int size)
//     Postcondition: Prints with format all the values stored in the array
//                    given by the user
//
//   At run time, the compiler needs to generate 6 versions of the template
//   function to accomplish the specification test run requirement. Since
//   the program calls the template function 6 times, the compiler has to
//   generate the template function 6 times to generate the function for the
//   specific T data type.
//

#ifndef GENERICPROGRAMMING_TWA4_H
#define GENERICPROGRAMMING_TWA4_H

template <typename T>
T findMinValue(T array[], int size){
   /* Takes in an array of any type and it's size, and finds the minimum value
   in the array */
   T min = array[0];
   for (int i = 0; i < size; i++) {
      if (array[i] < min) {
         min = array[i];
      }
   }
   return min;
}

template <typename T>
void printArray(T array[], int size) {
   /* Takes in an array of any type and it's size, and prints the array
   onto the console */
   for (int i = 0; i < size; i++) {
      std::cout << array[i] << " ";
   }
   std::cout << "\n";
}

#endif //GENERICPROGRAMMING_TWA4_H
