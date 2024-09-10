#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout <<"Enter the first number (a):";
    cin>>a;
    cout <<"Enter the second number (b):";
    cin>>b;

    //Swapping the values without using a third variable
    a=a+b; //Adding both variables and storing the result in "a"
    b=a-b; //Subtracting the original value of 'b' from 'a' to get the original value of 'a'
    a=a-b; //Subtracting the new value of 'b' from 'a' to get the original value of 'b'

    cout <<"After swapping, first number (a)  is :" <<a <<endl;
    cout <<"After swapping, second number (b)  is :" <<b <<endl;
    return 0;

}