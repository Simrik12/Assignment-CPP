#include <iostream>
using namespace std;

int main(){
    int num, product=1;

cout << "Enter a number:";
cin >>num;

//Calculating the product of the digits
while (num>0){
    product *= num %10;     //Multiplying the last digit to product
    num /=10;   //Removing the last digit
}

cout << "Product of the digits is : " << product << endl;

return 0;
}