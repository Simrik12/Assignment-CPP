#include <iostream>
#include <unordered_set>  // For storing the seen elements

using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Checking if the input size is large enough
    if(n < 2) {
        cout << "The array must have at least 2 elements." << endl;
        return 1;
    }
    
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    unordered_set<int> seen;  // Setting to track elements we have encountered

    // Finding the first repeating element without sorting
    for(int i = 0; i < n; i++) {
        if(seen.find(arr[i]) != seen.end()) {
            cout << "The first repeating element is: " << arr[i] << endl;
            return 0;  // Exiting after finding the first repeating element
        }
        seen.insert(arr[i]);  // Adding the current element to the set
    }
    
    cout << "No repeating elements found." << endl;  // Message if no repeating elements are found
    
    return 0;
}

