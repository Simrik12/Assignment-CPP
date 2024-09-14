#include <iostream>
using namespace std;

//Function to reverse the string using recursion
void reverseString (string &str, int start, int end){
    if (start >= end){
        return;   //Base case: when start meets or exceeds end
}
swap (str [start], str [end]);  //Swapping the characters
reverseString (str, start +1, end-1);   //Recursive call
}

int main (){
    string str;
    cout << "Enter a string: ";
    getline (cin, str);

    //Reversing the string
    reverseString (str, 0, str.length ()- 1);

    cout << "The reversed string is: " << str << endl;

    return 0;
}