#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);

    // Variables to keep track of the largest word
    string LargestWord;
    string CurrentWord;

    // Looping through each character in the input string
    for (char c : input) {
        if (c == ' ') {
            // Comparing the length of the current word with the largest word
            if (CurrentWord.length() > LargestWord.length()) {
                LargestWord = CurrentWord;
            }
            // Resetting the CurrentWord for the next word
            CurrentWord.clear();
        } else {
            // Adding character to the current word
            CurrentWord += c;
        }
    }

    // Final comparison after the loop ends (for the last word)
    if (CurrentWord.length() > LargestWord.length()) {
        LargestWord = CurrentWord;
    }

    cout << "The largest word in this string is: " << LargestWord << endl;

    return 0;
}
