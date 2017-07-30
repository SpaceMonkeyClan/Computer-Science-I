// Programing Exercise 2.5 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/15/17

// _______________________Miscellaneous____________________________

#include <sstream>
#include <iostream>

using namespace std;

// _______________________Functions_________________________________

double circumference(double radius)
{
    double pi = 3.14;
    double a = 2 * radius * pi; // 2*pi*r
    return a;
}

double area(double radius)
{
    double pi = 3.14;
    double  b = pi * (radius * radius); //pi*r^2
    return b;
}

double volume(double radius)
{
    double pi = 3.14;
    double x = pi * (radius * radius * radius); // (4/3)*pi*r^3
    double c = (1.3333333) * x;
    return c;
}

double surfaceArea(double radius)
{
    double pi = 3.14;
    double d = 4 * pi * (radius * radius); // 4*pi*r^2
    return d;
}
// _______________________Strictly Script___________________________


int main()
{
    cout << "\n\t\t\tWelcome to the \"RADIUS CONVERSION CALCULATOR!\"" << "\n" << endl;
    double radius;
    cout << "In begging, please ENTER the `radius`: ";
    cin >> radius;
    cout << "You have ENTERED " << radius << " for your radius." << "\n" << endl;
    cout << "Given r = "<< radius << ":" << "\n" << endl;
    double a = circumference(radius);
    cout << "A.) The `CIRCUMFERENCE` of a given circle would be approx: " << a << endl;
    double b = area(radius);
    cout << "B.) The `AREA` of a given circle would be approx: " << b << endl;
    double c = volume(radius);
    cout << "C.) The `VOLUME` of a given sphere would be approx: " << c << endl;
    double d = surfaceArea(radius);
    cout << "D.) The `SURFACE AREA` of a given sphere would be approx: " << d << "\n" << endl;
    return 0;
}
