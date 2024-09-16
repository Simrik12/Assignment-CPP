#include <iostream>
using namespace std;

int main () {
    int rows, num = 1;

    cout << "Enter the number of rows: ";
    cin >> rows;

    //Outer loop for the number of rows
    for (int i = 1; i <= rows; ++i) {
        //Inner loop for printing the number
        for (int j = 1; j <= i; ++j) {
            cout << num << " ";
            num ++;   //Increment of the number for the next print
}
    cout << endl;
    }

    return 0;
}