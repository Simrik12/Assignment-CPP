#include <iostream>
#include <algorithm>            //For sorting
using namespace std;

int main () {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    //Checking if the input size is large eniugh
    if (n < 2) {
        cout << "The array must have at least 2 elements."  << endl;
        return 1;
    }

    int arr [n];
    cout << "Enter " << n << " elements:"  << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr [i];
}

//Sorting the array in ascending order
sort (arr, arr + n);

//Displaying the second lowest and second highest elements
cout << "The second lowest element in the array is: " << arr [1] << endl;
cout << "The second highest element in the array is: " << arr [n-2]  <<endl;

return 0;
}