#include <iostream>
using namespace std;

//Function to calculate the sum of elements in the array
int sumArray (int arr[], int size){
//Base Case: If array size is 0 then return 0
    if (size <= 0){
        return 0;
    }
// Recursive case: Adding the last element to sum the rest of the array
   return arr [size- 1] + sumArray (arr, size- 1);
}

int main (){
    int n;

cout << "Enter the number of elements: ";
cin >> n;

int arr [n];
cout << "Enter all the elements: " << endl;
for (int i=0; i < n; ++i){
    cin >> arr[i];
}
//Calculating the sum of all elements using recursion
int sum = sumArray (arr, n);

cout << "The sum of all elements is: " << sum << endl;

return 0;
}