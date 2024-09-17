 #include <iostream>
 #include <algorithm>  //For sorting
using namespace std;

int main(){
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    //Checking if the input size is large enough
    if (n < 3) {
        cout << "The array must have at least 3 elements." << endl;
        return 1;
}

int arr[n];

//Inputting the elements of array
cout << " Enter" << n << " elements:" <<endl;
for (int i = 0; i < n; i++) {
    cin >> arr [i];
}

//Sorting the array in ascending order
sort(arr, arr + n);

cout << "The largest three elements are: "
    << arr [n-1] << ", " << arr[n-2] << ", and " << arr [n-3]  << endl;

return 0;
}

