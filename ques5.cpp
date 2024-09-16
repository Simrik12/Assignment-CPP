#include <iostream>
using namespace std;

int main (){
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    //Outer loop for each row
    for (int i = 1; i <= rows; ++i) {
        // Printing spaces for alignment
        for (int j = 1; j <= rows -i; ++j) {
            cout << " ";
        }
        // Printing the repeating number i for each row
        for (int j = 1; j <= i; ++j) {
            cout << i << " ";
    }
    cout << endl;
    }

    return 0;
}


