// Programing Exercise 2.9 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/15/17

// _______________________Miscellaneous____________________________
#include <cmath>
#include <sstream>
#include <iostream>

using namespace std;

// _______________________Functions_________________________________

double difference(double due, double received)
{
    double a = received - due;
    return a;
}

// _______________________Strictly Script___________________________


int main()
{
    cout << "\n\t\t\tWelcome to the \"GIVING CHANGE CONVERSION CALCULATOR!\"" << "\n" << endl;
    double due, received, numWhole, numDeci;
    cout << "In begging, please ENTER the amount `DUE`: ";
    cin >> due;
    cout << "You have ENTERED $" << due << " as the amount due." << "\n" << endl;
    cout << "Now, please ENTER the amount received: ";
    cin >> received;
    cout << "You have ENTERED $" << received << " as the width of your rectangle." << "\n" << endl;
    double diffNum = difference(due, received);
    cout << "The customer\'s change is: $" << diffNum << "\n" << endl;

    numDeci = modf (diffNum, &numWhole);

    double quarters = 0.25;
    double dimes = 0.10;
    double nickles = 0.05;
    double pennies = 0.01;

    int q = double(numDeci / quarters);
    int d = double(numDeci - q * 0.25) / dimes;
    int n = double(numDeci - q * 0.25 - d * 0.10) / nickles;
    int p = double(numDeci - q * 0.25 - d * 0.10 - n * 0.05) / pennies; p += 0.01;

    cout << "The exact change consist of:" << "\n" << endl;
    cout << "$" << numWhole << " dollars." << endl;
    cout << q << " quarters." << endl;
    cout << d << " dimes." << endl;
    cout << n << " nickles." << endl;
    cout << "&" << endl;
    cout << p << " pennies." << endl;

    return 0;
}