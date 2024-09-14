#include <iostream>
using namespace std;

//Function to check if the string is a palindrome using recursion
bool isPalindrome (string &str, int start, int end){
    if (start >= end){
        return true;  //Base case: if start meets or exceeds end, then it is a palindrome
    }
    if (str[start] != str[end]) {
        return false;  // If characters at the end and start don't match then it is not a palindrome
}
return isPalindrome (str, start +1, end -1);  //Recursive call
}

int main (){
    string str;
    cout << "Enter a string: ";
    getline (cin, str);

    //Checking if the string is a palindrome
    if (isPalindrome (str, 0, str.length()-1)){
        cout << str << " is a palindrome."  << endl;
    } else {
        cout << str << " is not a palindrome."  <<endl;
}
return 0;
}
