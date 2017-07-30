// Programming Exercise 5.7 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 7/10/17

// _____________________________Misc._____________________________
#include <iostream>
#include <cmath>

using namespace std;

const float  PI_F=3.14159265358979f;

// _____________________________Functions__________________________


class SodaCan
{
public:
    SodaCan(double hei, double rad);
    double get_surface_area();
    double get_volume();
private:
    double height;
    double radius;
};


SodaCan::SodaCan(double hei, double rad){
    height = hei;
    radius = rad;
    
    cout << "Given the height of the soda can is " << height << " and the radius is " << radius << ":......\n\n" <<  endl;
}

double SodaCan::get_surface_area()
{
    double surfaceArea = 2 * height * PI_F * radius + 2 * PI_F * pow(radius, 2);
    return surfaceArea;
}

double SodaCan::get_volume()
{
    double volume = PI_F * height * pow(radius, 2);
    return volume;
}

// _____________________________Strickly Script_____________________

int main()
{
    SodaCan x(7.00, 4.6);

    
    cout << "Surface area of soda can is: " << x.get_surface_area() << endl;
    cout << "& the Volume of soda can is: " << x.get_volume() << endl;
    
    return 0;
}



