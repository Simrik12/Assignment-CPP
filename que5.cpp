#include <iostream>
using namespace std;

//Function to check if a number is prime or not
bool isPrime (int number) {
    if (number <=1) return false;
    for (int i=2; i <=number /2; ++i){
        if (number % i==0) return false;
    }
    return true;
}

int main (){
    int upperBound;

    cout << "Enter the upper bound: ";
    cin >> upperBound;

    cout << "Non-prime numbers from 1 to " << upperBound << " are:" << endl;

    //Iterating through numbers from 1 to upperbound number
    for (int i=1; i<= upperBound; ++i){
        if (!isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}