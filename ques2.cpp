#include <iostream>
#include <string>  
using namespace std;

int main () {
    string input;

    cout << "Enter a string: ";
    getline (cin, input);

    //Capitalizing the first letter of the string if it is not a space
    if (input [0] != ' ') {
        input [0] =toupper(input[0]);
    }
//Traversing through the string an capitalizing the first letter after each space
for (int i =1; i <input.length(); i++) {
    if (input[i - 1] == ' ' && input[i] != ' ') {
        input[i] = toupper(input[i]);
    }
}

cout << "The string with capitalized words is: " << input << endl;

return 0;
}
