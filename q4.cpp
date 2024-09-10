#include <iostream>
using namespace std;

int sumofDigits (int start, int end){
    int totalsum=0;

    for (int i= start; i<=end; i++){
        int num=i;

    //Adding the digits of the current number
    while (num>0){
        totalsum+= num % 10;
        num/=10;
    }
    }
    return totalsum;
}
int main (){
    int start,end;

    cout <<"Enter the starting number:";
    cin>>start;

    cout <<"Enter the ending number:";
    cin>>end;

    //Calculating the sum of digits and then printing it
    cout << "The sum of all the digits between " <<start <<"and" <<end <<"is:" << sumofDigits (start,end) <<endl;

    return 0;
}