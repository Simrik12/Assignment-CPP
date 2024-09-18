 #include <iostream>
 #include <string>
using namespace std;

int main () {
    string input;

    cout << "Enter a string: ";
    getline (cin, input);

    //Creating a new string to hold the reversed string
    string reversed;

    //Iterating backwards through the input string and creating the reversed tring
    for (int i = input.length () -1; i >=0; --i) {
        reversed += input [i];
    }

    cout << "The reversed string is: "  << reversed << endl;
}
