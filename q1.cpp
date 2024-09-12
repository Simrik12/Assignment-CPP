#include <iostream>
using namespace std;

//Function to check if the number is perfect
bool isPerfectNumber (int num){
    int sum=0;
    //Finding all divisors of num and calculating their sum
    for (int i=1; i<=num /2; ++i){
        if (num % i ==0){
            sum +=i;
        }
    }
    // A number is perfect if sum of its divisors equals the number itself
    return sum == num;
}
int main(){
    cout << "Perfect numbers between 1 and 500 are:" <<endl;

    //Iterating through the numbers from 1 to 500 and checking for perfection
    for (int i=1; i <= 500; ++i){
        if (isPerfectNumber(i)){
            cout << i << " ";
        }
    }
    cout <<endl;
    return 0;
}