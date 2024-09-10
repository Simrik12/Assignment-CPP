#include <iostream>
using namespace std;

bool isPowerofthree (int num){
    if (num <=0) return false;  // Negative numbers and zero are not the power of three

// Dividing the number by 3 repeatedly
while (num %3 == 0){
    num /=3;
}

//If the final result is 1 then it was a power of three
return num==1;
}
int main(){
    int num;

    cout <<"Enter an integer:";
    cin>>num;

    //Checking if it a power of three
    if (isPowerofthree (num)){
        cout << "True" <<endl;
    } else {
        cout << "False" <<endl;
    }
    return 0;
}