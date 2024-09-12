#include <iostream>
using namespace std;

int main (){
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    int i=1; //Starting from 1

    //Displating the number and its cube
    do {
        int cube = i*i*i;  //Calculating the cube of i
        cout << "The number is: " << i << " and the cube of " << i << " is: " << cube <<endl;
        i++; // Incrementing i for the next number
    } while (i <=n);  //Contine until i is greater than n

return 0;
}