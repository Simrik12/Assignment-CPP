#include <iostream>
#include <vector>
#include <algorithm> // For find

using namespace std;

// Function to check if all letters in str2 are in str1
bool areLettersInString1(const string &str1, const string &str2) {
    for (char c : str2) {
        if (find(str1.begin(), str1.end(), c) == str1.end()) {
            return false; // If the letter is not found in str1
        }
    }
    return true; // If the letters is found in str1
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    
    // Checking if all letters in str2 are in str1
    bool result = areLettersInString1(str1, str2);
    
    if (result) {
        cout << "All letters in the second string are in the first string." << endl;
    } else {
        cout << "Not all letters in the second string are in the first string." << endl;
    }
    
    return 0;
}


