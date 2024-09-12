#include <iostream>
using namespace std;

int main(){
    int number, reverse =0;

    cout << "Enter a number: ";
    cin >> number;

    //using while loop to reverse the number
    while (number != 0){
        int digit = number % 10;  //Getting the last digit
        reverse = reverse * 10 + digit;  //Adding the digit to reverse
        number = number /10;  //Removing the last digit from the original number
}

cout << "The number in reverse order: " << reverse << endl;

return 0;
}