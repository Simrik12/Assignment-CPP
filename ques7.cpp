#include <iostream>
using namespace std;

int main (){
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    //Looping through each row
    for (int i = 0; i < rows; ++i) {
        int number =1;

    //Looping through each column in the current row
    for (int j = 0; j <=i; ++j){
        cout << number <<  " ";
        number = number * (i - j) / (j + 1);   //Computing the next number in the row
}

cout << endl;
}
    return 0;
}