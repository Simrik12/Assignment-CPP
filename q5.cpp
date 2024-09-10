#include <iostream>
#include <algorithm> // for swapping
using namespace std;

int main(){
    int num1, num2, num3;

    cout <<"Enter the first number:";
    cin >> num1;

    cout <<"Enter the second number:";
    cin >> num2;

       if (num1<num2){
        swap(num1, num2);
    }

    cout <<"Enter the third number:";
    cin>>num3;

    if (num1<num3){
        swap(num1, num3);
    }

    if (num2<num3){
        swap(num2,num3);
    }

    cout <<"The three hightest numbers in descending order is:" << num1 << "," <<num2 <<"," <<num3 <<endl;
    
    return 0;
}