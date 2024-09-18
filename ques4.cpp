#include <iostream>
#include <string>
#include <algorithm>   // For reversing

using namespace std;

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);

    //Creating a reversed copy of the input string
    string reversed = input;
    reverse(reversed.begin(), reversed.end());      //Reversing the string
    
    //Checking if the original string and the reversed string are the same
    if (input == reversed) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}

