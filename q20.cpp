#include <iostream>
#include <iomanip>  // For hex and uppercase
using namespace std;

int main (){
    int DecimalNum;

cout << "Enter a decimal number: ";
cin >> DecimalNum;

//Output the decimal number in hexadecimal format
cout << "The hexadecimal number is: " << hex << uppercase << DecimalNum << endl;

return 0;
}