#include <iostream>
using namespace std;

int main (){
    int number, sum;

    cout << "Enter a non-negative number:";
    cin>>number;

    //Repeating the process until the number is a single digit
    while (number >=10){
        sum= 0;
        while (number > 0){
           sum += number %10; //Adding the last digit to the sum
           number /=10;  //Removing the last digit 
        }
        number=sum;    //Updating the number to the sum of its digits
}
cout <<"The result is " << number << endl;
return 0;

}