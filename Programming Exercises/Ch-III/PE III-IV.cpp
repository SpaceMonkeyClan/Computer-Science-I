// programming Exercise 3.4 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/22/17

#include <iostream>
using namespace std;

int main()
{
    cout << "\n\t\t\tWelcome to the \"Letter Grade Conversion\" calculator!" << "\n\n" << endl;
    
    string userInput;
    double pointValue; 
    
    cout << "Please ENTER a letter grade. (A-C's may contain a `+` or `-`): " ;
    cin >> userInput;
    
    if (userInput == "A+")
    {
        pointValue = 4.3;
        cout << "\n\n" << "The numeric value is " << pointValue << "." << endl;
    }
    else if (userInput == "A")
    {
        pointValue = 4.0;
        cout << "\n\n" << "The numeric value is " << pointValue << "." << endl;
    }
    else if (userInput == "A-")
    {
        pointValue = 3.7;
        cout << "\n\n" << "The numeric value is " << pointValue << "." << endl;
    }
    else if (userInput == "B+")
    {
        pointValue = 3.4;
        cout << "\n\n" << "The numeric value is " << pointValue << "." << endl;
    }
    else if (userInput == "B")
    {
        pointValue = 3.1;
        cout << "\n\n" << "The numeric value is " << pointValue << "." << endl;
    }
    else if (userInput == "B-")
    {
        pointValue = 2.8;
        cout << "\n\n" << "The numeric value is " << pointValue << "." << endl;
    }
    else if (userInput == "C+")
    {
        pointValue = 2.5;
        cout << "\n\n" << "The numeric value is " << pointValue << "." << endl;
    }
    else if (userInput == "C")
    {
        pointValue = 2.2;
        cout << "\n\n" << "The numeric value is " << pointValue << "." << endl;
    }
    else if (userInput == "C-")
    {
        pointValue = 1.9;
        cout << "\n\n" << "The numeric value is " << pointValue << "." << endl;
    }
    else if (userInput == "D+")
    {
        pointValue = 1.6;
        cout << "\n\n" << "The numeric value is " << pointValue << "." << endl;
    }
    else if (userInput == "D")
    {
        pointValue = 1.3;
        cout << "\n\n" << "The numeric value is " << pointValue << "." << endl;
    }
    else if (userInput == "D-")
    {
        pointValue = 1.00;
        cout << "\n\n" << "The numeric value is " << pointValue << "." << endl;
    }
    else
    {
        pointValue = 0.7;
        cout << "The numeric value is " << pointValue << "." << endl;
    }
    return 0;
}