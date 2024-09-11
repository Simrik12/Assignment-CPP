#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor to initialize name, employee ID and salary
    Employee(string empName, int empID) {
        name = empName;
        employeeID = empID;
        salary = 0.0; // Default salary
    }

    // Function to set salary based on performance
    void setSalary(int performance) {
        if (performance >= 9) {
            salary = 5000; // Excellent performance
        } else if (performance >= 7) {
            salary = 3000; // Good performance
        } else {
            salary = 1000; // Average performance
        }
    }

    // Function to display employee details
    void displayInfo() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    string empName;
    int empID, performance;

    // User input for employee details
    cout << "Enter employee name: ";
    getline(cin, empName);
    cout << "Enter employee ID: ";
    cin >> empID;
    cout << "Enter employee performance (1-10): ";
    cin >> performance;

    // Create Employee object
    Employee emp(empName, empID);

    // Set salary based on performance
    emp.setSalary(performance);

    // Display employee information
    emp.displayInfo();

    return 0;
}
