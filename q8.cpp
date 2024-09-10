#include <iostream>
using namespace std;

int main(){
    int year, month, days;

    cout <<"Enter the year:";
    cin>>year;
    cout <<"Enter the month:";
    cin>>month;

    //Determining the number of days in the month
    switch (month){
    case 1: case 3: case 5: case 7: case 8 : case 10: case 12:
        days =31;
        break;
    case 4: case 6: case 9: case 11:
         days =30;
         break;
    case 2:
        // Checking for leap year
        if ((year%4==0 && year%100 !=0) || (year %400==0)){
            days=29;
        } else {
            days=28;
        }
        break;
    default:
    cout << "Invalid month."<<endl;
    return 1;
}
cout << "The number of days in year " << year << " and month " << month << " is : " << days <<endl;

return 0;
}