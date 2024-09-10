#include <iostream>
using namespace std;

int main(){
    int Decimalnumber;
    string BinaryNumber= " ";

    cout << "Enter a decimal number:";
    cin >> Decimalnumber;

    //Converting to binary
    while (Decimalnumber > 0){
        BinaryNumber = to_string (Decimalnumber %2) +BinaryNumber;
        Decimalnumber /=2;
}

cout <<"The Binary Number is: " << BinaryNumber << endl;
return 0;
}