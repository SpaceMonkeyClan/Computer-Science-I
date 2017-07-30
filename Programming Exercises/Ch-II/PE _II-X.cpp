// Programing Exercise 2.10 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/16/17

// _______________________Miscellaneous____________________________

#include <cmath>
#include <sstream>
#include <iostream>

using namespace std;

// _______________________Functions_________________________________


// _______________________Strictly Script___________________________


int main()
{
    cout << "\n\t\t\tWelcome to the \"GAS CONVERSION CALCULATOR!\"" << "\n" << endl;
    double gallons, efficiency, price, miles, cost;

    cout << "In begging, please ENTER the number of `gallons` of gas in the tank: ";
    cin >> gallons;
    cout << "You have ENTERED " << gallons << " gallons as the number of gallons currently sitting in your tank." << "\n" << endl;

    cout << "Now, please ENTER the fuel efficiency in miles per gallon(mpg): ";
    cin >> efficiency;
    cout << "You have ENTERED " << efficiency << " as the fuel economy in miles per gallon(mpg)." << "\n" << endl;

    cout << "Last, please ENTER the price of gas per gallon: ";
    cin >> price;
    cout << "You have ENTERED $" << price << " as the price of gas per gallon." << "\n" << endl;

    cout << "RESULTS......: " << "\n" << endl;

    miles = efficiency / gallons;
    cout << "With to current amount of gas in the tank, you can go up to " << miles << " miles " << "\n" << endl;

    double x = 100 / efficiency;
    cost = x * price;
    cout << "It will take " << x << " gallons or 14.56 litres of gas with fuel cost of $" << cost << " to travel 100miles.";
    cout << "\n" << endl;
    double ten, twenty, thirty, forty, fifty, sixty;
    ten = 100/10;
    twenty = 100/20;
    thirty = 100/30;
    forty = 100/40;
    fifty = 100/50;
    sixty = 100/60;
    cout << "If 10 mpg, it will take " << ten << " gallons or " << ten/0.26 << " litres of gas with fuel cost of $" << ten * price << ".";
    cout << endl;
    cout << "If 20 mpg, it will take " << twenty << " gallons or " << twenty/0.26 << " litres of gas with fuel cost of $" << twenty * price << ".";
    cout << endl;
    cout << "If 30 mpg, it will take " << thirty << " gallons or " << thirty/0.26 << " litres of gas with fuel cost of $" << thirty * price << ".";
    cout << endl;
    cout << "If 40 mpg, it will take " << forty << " gallons or " << forty/0.26 << " litres of gas with fuel cost of $" << forty * price << ".";
    cout << endl;
    cout << "If 50 mpg, it will take " << fifty << " gallons or " << fifty/0.26 << " litres of gas with fuel cost of $" << fifty * price << ".";
    cout << endl;
    cout << "If 60 mpg, it will take " << sixty << " gallons or " << sixty/0.26 << " litres of gas with fuel cost of $" << sixty * price << ".";
    cout << endl;

    return 0;
}