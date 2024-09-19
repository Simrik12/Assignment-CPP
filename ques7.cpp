#include <iostream>
#include <string>
using namespace std;

int main () {
    string s;
    char c;

//Asking the user for the string and character
cout << "Enter the string: ";
cin >> s;
cout << "Enter the character to remove: ";
cin >> c;

//String to store the updated version
string result;

//Looping through each character and adding to result if not equal to c
for (char ch : s) {
    if (ch != c) {
        result += ch;
    }
}
cout << "The updated string is: "  << result << endl;

return 0;
}