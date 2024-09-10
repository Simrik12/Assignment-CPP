#include <iostream>
using namespace std;

int main(){
    int n;
    unsigned long long factorial=1;  //This step is done to handle larger results

    cout << "Enter a number:";
    cin >>n;

    //Checking for non-negative integer
    if (n<0){
        cout <<"Factorial of negative number don't exist." <<endl;
    } else {
        for (int i=1; i<n; i++){
            factorial *=i;
        }
        cout <<" The factorial of "<< n << " is " <<factorial <<endl;
    }
    return 0;
    }