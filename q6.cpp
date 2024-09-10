#include <iostream>
using namespace std;

int countDigits (int num){
    int count=0;
    if (num==0) return 1; 
    while (num>0){
        num/=10;
        count++;
    }
    return count;
}
int main(){
    int num1, num2, sum;

    cout <<"Enter the first number:";
    cin >>num1;
    cout <<"Enter the second number:";
    cin >>num2;

    //Computing the sum
    sum=num1+num2;

    cout <<"The sum is:" <<sum <<endl;
    cout << "The number of digits in the sum value:" <<countDigits (sum) <<endl;

    return 0;
}