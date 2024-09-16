 #include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for the number of rows
    for(int i = 1; i <= rows; ++i) {
        // Inner loop for printing asterisks
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
