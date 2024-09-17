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

//Printing number for the current row 
for (int j = 1; j <= rows -i; ++j) {
    cout << j;
}
  cout << endl;
    }
    return 0;
}