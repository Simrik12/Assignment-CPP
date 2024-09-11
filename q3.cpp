#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    string name;
    int StudentClass;
    int RollNumber;
    float marks;

public:
// Function to set the student details
void setDetails (string studentName, int StudentClass, int Rollnumber, float studentMarks){
    name = studentName;
    this -> StudentClass = StudentClass;
    RollNumber = RollNumber;
    marks= studentMarks;
}
// Function to calculate the grade based on marks
string calculatetheGrade (){
    if (marks >=90) return "Excellent";
    else if (marks >=75) return "Very Good";
    else if (marks >=50) return "Satisfactory";
    else return "Needs Improvement";
}

//Function to display student details
void displayDetails (){
   cout << "\n --- Student Information ---"  <<endl;
   cout << "Name: " << name << endl;
   cout << "Class: " << StudentClass << endl;
   cout << "Marks: " << marks << endl;
   cout << "Grade: " << calculatetheGrade() << endl;
}
};

int main (){
   Student student;
   string name;
   int StudentClass, RollNumber;
   float marks;

   //Inputing student details
   cout << "Enter student name: " ;
   getline (cin, name);
   cout << "Enter student class: ";
   cin >> StudentClass;
   cout << "Enter the roll number: ";
   cin >> RollNumber;
   cout << "Enter the marks: ";
   cin >> marks;

   //Setting and display the student details
   student.setDetails (name, StudentClass, RollNumber, marks);
   student. displayDetails ();

   return 0;
}