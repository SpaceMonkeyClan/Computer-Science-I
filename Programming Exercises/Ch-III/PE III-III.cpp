// programming Exercise 3.3 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/22/17

#include <iostream>
using namespace std;

int main()
{
    cout << "\n\t\t\tWelcome to the \"Largest of Three Inputs\" program!" << "\n\n" << endl;
    
    double x, y, z;
    
    cout << "Please ENTER three integers separated by spaces: "; 
    cin >> x; cin >> y; cin >> z;
    cout << "\n" << endl;
    
    if ( x > y && x > z )
        cout << "The largest integer of the three inputs is " << x << "." << "\n" << endl;
    else if ( y > x && y > z )
        cout << "The largest integer of the three inputs is " << y << "." << "\n" << endl;
    else
        cout << "The largest integer of the three inputs is " << z << "." << "\n" << endl;
    
    return 0;
}