#include <iostream>
using namespace std;

//Function to calculate the factorial using recursion
int factorial (int n){
    if (n== 0 || n==1){
        return 1;  //Base case: Factoiral of 0 or 1 is 1
    }
    return n* factorial (n-1);  //Recursive call
}

int main (){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    //Calculate the factorial 
    int result = factorial (num);

    cout << " The factorial of" << num << " is: " << result << endl;

    return 0;
}
