#ifndef ARRAYUTIL_H //checks if token has been defined in the file
#define ARRAYUTIL_H //subsitutes token string for each occurence of identifer, will be included
// main.c

/**
 * Function returns the maximum value of the given array, whose length is given by the
 * parameter int length;
 *
 * @param arr[] array perimeter provided by user input
 * @param length length of the array
 * @return the maximum value of the array
 */
int getMax(int arr[],int length);

/**
 * Function returns the average of the given array
 *
 * @param arr[] array perimeter provided by user input
 * @param length length of the array
 * @return returns the average of the inputed values in array
 */
double getMean(int arr[],int length);

/**
 * Function returns the variance of the given array.
 *
 * @param arr[] array perimenter provided by the user input
 * @param length length of the array
 * @return returns the variance of the inputed values in array
 */
double getVar(int arr[],int length);

/**
 * Function sorts the array in ascending order.
 *
 * @param arr[] array perimeter provided by the user input
 * @param length length of the array
 */
void sortArray(int arr[],int length);

#endif
