#include <iostream>
using namespace std;

class Date {
    private:
    int day, month, year;

public:
//Function to set the date
void setDate (int d, int m, int y){
    day=d;
    month=m;
    year=y;
}
// Function to get and display the date
void getDate (){
    cout << "The date is: " << day << "/" << month << "/" << year <<endl;
}
//Function to validate the date
bool isValid (){
    if (year >=1 && month >=1 && month <=12){
        if ((day >= 1 && day <=31) && (month ==1 || month ==3 || month ==5 || month ==7 || month ==8 || month ==10 || month ==12)){
            return true; //Month with 31 days
        } else if ((day >=1 && day <=30) && (month ==4 || month == 6 || month ==9 || month ==11 )) {
            return true; //Month with 30 days
        } else if (month ==2){
            bool isLeap = (year %4 ==0 && (year % 100 !=0 || year % 400 ==0));
            if (isLeap && day>=1 && day <=29){
                return true; //Leap year (February)
            } else if (!isLeap && day >=1 && day <=28){
                return true; //Non-leap year (February)
            }
        }
    }
    return false;
    }
};
int main (){
    Date date;
    int d,m,y;

    cout << "Enter day: ";
    cin >>d;
    cout << "Enter month: ";
    cin >>m;
    cout << "Enter year: ";
    cin >>y;

    //Setting the date
    date.setDate (d,m,y);

    //Validating and display the date
    if (date.isValid()){
        date.getDate();
        cout << "The date is valid." << endl;
    } else {
        cout << "The date is invalid." << endl;
    }
    return 0;
}
