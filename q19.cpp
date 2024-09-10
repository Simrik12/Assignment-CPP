#include <iostream>
using namespace std;

int main (){
    int binaryNum, DecimalNum =0, base =1;
    int remainder;

    cout << "Enter a binary number:";
    cin >> binaryNum;

    //Converting binary to decimal number
    while (binaryNum > 0){
        remainder = binaryNum % 10;  //Getting the last digit
        DecimalNum += remainder *base; //Adding it to the decimal number
        binaryNum /=10; //Removing the last digit
        base *=2;  //Moving to the next power of 2 (1,2,4)
}

cout << "The decimal number is :" << DecimalNum << endl;

return 0;
}