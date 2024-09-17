#include <iostream>
#include <algorithm>   //For sorting
using namespace std;

int main () {
    int n;

    cout << "Enter the number of elements in the array (at least 4 elements): ";
    cin >> n;

    //Checking if the input size is large enough
    if (n < 4) {
        cout << "The array must have at least 4 elements."  << endl;
        return 1;
    }
    
    int arr[n];

    cout << "Enter " << n << " elements:"  << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //Sorting the array in ascending order
    sort (arr, arr + n);
    cout << "The repeating elements are: ";

    int count = 0;  //Counter for the number of different repeating elements

    //Finding and displaying upto two distinct repeating elements
    for (int i =1; i < n; i++) {
        //Checking if the current element is the same as the previous element
    if (arr [i] == arr [i-1]){
        //Printing the element only if it is the first occurence or the last occurence of this element
        if (count == 0 || arr [i] != arr [i-2]) {
            cout << arr[i] << " ";
            count ++;
        }
        //Stop if two distinct repeating elements are found
        if (count ==2) break;
    }
    }
    if (count == 0) {
        cout << "None";   //Message if no repeating elements are foun
}

cout << endl;
            
return 0;
}
