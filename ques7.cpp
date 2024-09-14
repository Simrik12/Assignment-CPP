#include <iostream>
using namespace std;

//Function to check if the number is prime or not
bool isPrime (int n, int i=2){
    if (n <=2)
    return (n==2);   // 2 is prime but 1 and 0 are not
    if (n %i ==0)
    return false;    // If it is divisible by i, then it is not prime
    if (i*i > n)
    return true;  // If no divisors found, the n is prime
    return isPrime (n, i+1);   //Checking for next divisor
}

//Recursive function to find the sum of primes in a range
int SumofPrimes (int start, int end){
    if (start > end)
    return 0;   //Base case: if start exceeds end, then return 0
    if (isPrime (start))
    return start + SumofPrimes (start +1, end);  //If prime then add to sum
return SumofPrimes (start +1, end);   //If not prime then move to next number
}

int main (){
    int start, end;

    cout << "Enter the starting of the range: ";
    cin >> start;
    cout << "Enter the ending of the range: ";
    cin >> end;

    //Calculating and displaying the sum of prime numbers
    int sum = SumofPrimes (start, end);
    cout << "The sum of prime numbers in the range is: " << sum << endl;

    return 0;
}