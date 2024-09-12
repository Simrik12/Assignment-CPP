#include <iostream>
using namespace std;

//Function to check if a number is prime or not
bool isPrime (int num){
    if (num <=1) return false;
    for (int i=2; i <=num / 2; ++i){
        if (num% i ==0) return false;
    }
    return true;
}
int main (){
    int number;

    cout << "Enter a number: ";
    cin  >> number;

    //Searching for the last prime number before the entered number
    number --;  //Decrease the number by 1 to find the last prime number before it
    while (number >1){
        if (isPrime (number)){
            cout << "The last prime number before the entered number is: " << number << endl;
            break;
        }
        number --; // Decrementing to find the next prime
}
return 0;
}
