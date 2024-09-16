#include <iostream>
using namespace std;

int main () {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    //Looping through each row
    for (int i = 1; i <= rows; ++i) {
        //Looping through each colum in the current row
        for (int j = 1; j <= i; ++j) {
            //Printing 1 if the sum of row and colum indices is even, if not then print 0
            if ((i + j) % 2 ==0){
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}