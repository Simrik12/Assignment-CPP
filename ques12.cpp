#include <iostream>
using namespace std;

int main () {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    //Looping through each row
    for (int i = 0; i < rows; ++i) {
        //Printing spaces for right justification
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }

    //Printing numbers in increasing order
    for (int j = 1; j <= rows - i; ++j) {
        cout << j;
    }
    //Printing numbers in decreasing order
    for (int j = rows - i - 1; j >=1; --j) {
        cout << j;
    }
    cout << endl;
    }
    return 0;
}