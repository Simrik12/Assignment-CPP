#include <iostream>
#include <algorithm>  //For sorting
#include <string>
using namespace std;

int main () {
    int n;

    cout << "Enter the number of strings: ";
    cin >> n;

    //Checking if the input size is large enough
    if (n <3) {
        cout << "There must be at least 3 strings."  << endl;
        return 1;
}

string arr[n];
cout << "Enter "  << n << " strings:" <<endl;
for (int i = 0; i < n; i++) {
    cin >> arr[i];
}

//Sorting the array of string 
sort (arr, arr + n);

//Displaying the third largest string 
  cout << "The third largest string is: " << arr[n-3] << endl;
    
    return 0;
}