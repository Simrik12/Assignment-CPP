#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter a number:";
    cin >> number;

    //Printing all the factors of the number
    cout << "The factors of " << number << " are: ";
    for (int i=1; i <= number; ++i){
        if (number %i ==0){
            cout << i <<" ";  //Printing the factor
        }
    }
    cout <<endl;
    return 0;
}