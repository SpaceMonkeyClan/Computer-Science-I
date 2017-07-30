// Programing Exercise 2.6 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/15/17

// _______________________Miscellaneous____________________________
#include <cmath>
#include <sstream>
#include <iostream>

using namespace std;

// _______________________Functions_________________________________

double area(double height, double width)
{
    double a = height * width; // l*w
    return a;
}

double perimeter(double height, double width)
{
    double b = 2 * (height + width); // 2(l+w)
    return b;
}

double diagonal(double height, double width)
{
    double c = sqrt(((height * height) + (width * width))); // sqrt((l^2 + w^2))
    return c;
}

// _______________________Strictly Script___________________________


int main()
{
    cout << "\n\t\t\tWelcome to the \"RECTANGLE CONVERSION CALCULATOR!\"" << "\n" << endl;
    double height, width;
    cout << "In begging, please ENTER the `height` of your rectangle: ";
    cin >> height;
    cout << "You have ENTERED " << height << " as the height of your rectangle." << "\n" << endl;
    cout << "Now, please ENTER the width of your rectangle: ";
    cin >> width;
    cout << "You have ENTERED " << width << " as the width of your rectangle." << "\n" << endl;
    double a = area(height, width);
    cout << "A.) The `AREA` of the given rectangle is: " << a << endl;
    double b = perimeter(height, width);
    cout << "B.) The `PERIMETER` of the given rectangle is: " << b << endl;
    double c = diagonal(height, width);
    cout << "D.) The `DIAGONAL AREA` of the given rectangle is approx: " << c << "\n" << endl;
    return 0;
}