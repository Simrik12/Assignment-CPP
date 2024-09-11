#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int StudentClass;
    int RollNumber;
    float marks;

public:
    // Function to set the student details
    void setDetails(string studentName, int studentClass, int rollNumber, float studentMarks) {
        name = studentName;
        this->StudentClass = studentClass;
        this->RollNumber = rollNumber;  
        marks = studentMarks;
    }

    // Function to calculate the grade based on the marks of the students
    string calculateGrade() {
        if (marks >= 90) return "Excellent";
        else if (marks >= 75) return "Very Good";
        else if (marks >= 50) return "Satisfactory";
        else return "Needs Improvement";
    }

    // Function to display student details
    void displayDetails() {
        cout << "\n--- Student Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << StudentClass << endl;
        cout << "Roll Number: " << RollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Student student;
    string name;
    int StudentClass, RollNumber;
    float marks;

    // Inputting student details
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter student class: ";
    cin >> StudentClass;
    cout << "Enter roll number: ";
    cin >> RollNumber;
    cout << "Enter marks: ";
    cin >> marks;

    // Setting and displaying the student details
    student.setDetails(name, StudentClass, RollNumber, marks);
    student.displayDetails();

    return 0;
}
