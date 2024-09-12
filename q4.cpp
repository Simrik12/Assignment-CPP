#include <iostream>
using namespace std;

int main (){
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    //Initializing the first two terms of Fibonacci Series
    int a=0, b=1, next;

    //Printing the first n terms
    cout << "The Fibonacci Series: ";
    for (int i=0; i<n; ++i){
        if (i == 0)
        cout << a << " ";
        else if (i == 1)
        cout << b << " ";
        else {
            next =a+b; //Calculating the next term
            a = b;  //Updating the values of a and b
            b=next;
            cout << next << " "; //Printing the next term
        }
    }
    cout << endl;

    return 0;
}