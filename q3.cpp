#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, Firstdigit, Lastdigit, Numdigits, swappednum;
    
    cout << "Enter a number: ";
    cin >> num;

    // Finding the last digit
    Lastdigit = num % 10;

    // Finding the number of digits
    Numdigits = log10(num);

    // Finding the first digit
    Firstdigit = num / pow(10, Numdigits);

    swappednum = Lastdigit * pow(10, Numdigits) + (num % (int)pow(10, Numdigits)) / 10 * 10 + Firstdigit;

    cout << "The numbers after swapping first and last digits: " << swappednum << endl;

    return 0;
}