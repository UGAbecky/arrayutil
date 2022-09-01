#include"arrayutil.h"
#include<bits/stdc++.h>
using namespace std;

/**
 * Function returns the maximum value in the array
 *
 * @param arr[] user inputted array
 * @param length length of the array
 * @return maximum value of array
 */
int getMax(int arr[],int length){
    int maxValue = INT_MIN;
    for (int i = 0; i < length; i++){
        maxValue = max(maxValue,arr[i]);
    }
    return maxValue;
}
/**
 * Function returns the average of the array
 *
 * @param arr[] user inputted array
 * @param length length of the array
 * @return average of the array
 */
double getMean(int arr[],int length){
    double sum = {0}; //reduces variable narrowing which can throw off the accuracy
    double averageVal;
    for(int i=0;i<length;i++) {
        sum+=arr[i];
    }
    averageVal = sum/(double)length; //converting length to a type double so no error throws.
    return averageVal;
}
/**
 * Function returns variance of array
 *
 * @param arr[] user inputted array
 * @param length length of the array
 * @return variance of the array
 */
double getVar(int arr[],int length){
    int average = 0;
    for (int i = 0; i < length; i++){
        average += arr[i];
    }
        double mean = (double) average/ (double) length;

    double sumSqDiff = 0;
    for (int i = 0; i < length; i++) {
        sumSqDiff += (arr[i] - mean) * (arr[i]- mean);
    }
    return sumSqDiff/length;
}
/**
 * Sorts array in ascneding order
 *
 * @param arr[] user inputted array
 * @param length length of the array
 */
void sortArray(int arr[],int length){
    int pos = 0;
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] > arr[j]) {
                pos = arr[i];
                arr[i] = arr[j];
                arr[j] = pos;
            } // if
        } //for
    }//for
}
