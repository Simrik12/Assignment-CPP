#include <iostream>
using namespace std;

class Triangle {
    private:
     double side1, side2, side3;

    public:
    // Function to set the three sides of the tringle
    void setSides (double S1, double S2, double S3) {
        side1= S1;
        side2= S2;
        side3= S3;
}

// Checking if the triangle is equilateral
bool isEquilateral (){
    return (side1 == side2 && side2 == side3);
}

// Checking if the triangle is isosceles
bool isIsosceles () {
    return (side1 == side2 || side2 == side3 || side1 == side3);
}

//Checking if the triangle is scalene
bool isScalene (){
    return (side1 != side2 && side2 != side3 && side1 != side3);
}

//Function to display the type of trianle 
void displayType (){
    if (isEquilateral ()){
        cout << "The triangle is an equilaterial triangle." <<endl;
    } else if (isIsosceles()){
        cout << "The triangle is an isosceles triangle." << endl;
} else {
    cout << "The triangle is a scalene triangle." << endl;
       }
    }
};

int main (){
    Triangle T;
    double S1, S2, S3;

    cout << "Enter the first side of the triangle: ";
    cin >> S1;
    cout << "Enter the second side of the triangle: ";
    cin >> S2 ;
    cout << "Enter the third side of the triangle: ";
    cin >> S3;

    //Setting the sides of the triangle to determine the type of triangle
    T.setSides (S1, S2, S3);
    T.displayType ();

return 0;
}
