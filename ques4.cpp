#include <iostream>
#include <vector>
#include <algorithm> // For find

using namespace std;

// Function to check if all letters in string2 are in string1
bool areLettersInString1(const string &string1, const string &string2) {
    for (char c : string2) {
        if (find(string1.begin(), string1.end(), c) == string1.end()) {
            return false; // If letter is not found in str1
        }
    }
    return true; // If all letters are found in str1
}

int main() {
    string string1, string2;
    cout << "Enter the first string: ";
    cin >> string1;
    cout << "Enter the second string: ";
    cin >> string2;
    
    // Checking if all letters in str2 are in str1
    bool result = areLettersInString1(string1, string2);
    
    cout << "The original string elements are: " << string1 << " " << string2 << endl;
    if (result) {
        cout << "The first string does contain all the letters from the second string." << endl;
    } else {
        cout << "The first string doesn't contain all letters from the second string." << endl;
    }
    
    return 0;
}



