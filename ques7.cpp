#include <iostream>
#include <algorithm>    //For sorting
using namespace std;

int main () {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    //Checking if the input size is large enough
    if (n < 2) {
        cout << "The array must have at least 2 elements."   << endl;
        return 1;
    }

    int arr [n];
    cout << "Enter " << n << "elements:"  << endl;
    for (int i = 0; i < n; i ++) {
        cin >> arr [i];
    }

    //Sorting the array in ascending order
    sort (arr, arr + n);

    cout << "The firest repeating element is: ";

    //Finding and displaying the first repeating element
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr [i-1]) {
            cout << arr [i] << endl;
            return 0;        //Exiting after finding the first repeating element
      }
    }
    cout << "None" << endl;   //Message if no repeating elements are found

    return 0;
} 
