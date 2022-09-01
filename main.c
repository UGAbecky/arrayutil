#include<iostream>
#include"arrayutil.h" //includes header file of arrayutil.h

//printing output to standard output
using namespace std;

/**
 * prints the array of the inputted numbers by the user.
 *
 * @param arr[] uninitialized array
 * @param length length of the array
 * @return the inputted numerical values in an array.
 */

void printArray(int arr[],int length){
    for(int i = 0; i < length; i++){
        cout<<arr[i]<<" ";
    }
} //printArray

/**
 * The main function here provides 3 test cases so the user can manipulate various aspects
 * of an array. The user will be promopt with a question that asks for the number of values in
 * the array. The user will then add the corresponding number of digits. After the program recieves
 * the values, the program will print the array in the recieved order, print out the maximum value
 * print the mean of the array, print the variance of the array, and will print out a new version
 * of the array in the numerically correct order.
 *
 * the program will continue to run until all 3 test cases have been completed.
 */

int main(){
    int cases = 3;
    for (int count = 0; count < cases; count++) {
        /**
         * prompting user to enter the size of the array
         */
        cout <<"For test "<<count + 1 <<", please enter size of array" <<endl;
        int length;
        cin >> length;
        int arr[length];

        cout<< "please enter values, separated by space, for array: "<< endl;
        for(int i=0;i<length;i++){
            cin>>arr[i];
        }
        cout<< "inputted Array :"; //output for printing the array inputted by user
        printArray(arr,length);
        cout<<endl;

        cout<<"Max of Array :"; //ouput for stating the maxmimum value in the array
        cout<<getMax(arr,length)<< endl;

        cout<<"Mean of Array : "; //output for stating mean of array
        cout<<getMean(arr,length) << endl;

        cout<<"Var of Array : "; //output for stating the variance of the array
        cout<<getVar(arr,length) <<endl;

        cout<<"Sorted Array :";
        sortArray(arr,length);
        printArray(arr,length);// print the new array after the inputs get sorted

        cout<<endl;
    }
}
