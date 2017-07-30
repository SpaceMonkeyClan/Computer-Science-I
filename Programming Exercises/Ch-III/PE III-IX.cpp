// programming Exercise 3.9 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/23/17

#include <iostream>

using namespace std;


double Overtime(double hourlyWage, double hoursWorked)
{
    
    double regHours = 40 * hourlyWage;
    
    double oveWage = hourlyWage / 0.6666;
    double overtimeHours = hoursWorked - 40;
    double oveHours = overtimeHours * oveWage;
    
    double payCheck = regHours + oveHours;
    return (payCheck);
}

double NoOvertime(double hourlyWage, double hoursWorked)
{
    double payCheck = hoursWorked * hourlyWage;
    return (payCheck);
}


int main()
{
    cout << "\n\t\t\tWelcome to the \"What's my Paycheck\" program!" << "\n" << endl;
    
    string usersName;
    cout << "Before we begin, please ENTER your name: ";
    getline(cin, usersName);
    cout << "Awesome! We may now continue " << usersName << "." << endl;
    
    double hourlyWage;
    cout << "\n\nPlease ENTER your salary: $";
    cin >> hourlyWage;
    
    double hoursWorked;
    cout << "\nPlease ENTER the amount of hours worked past week: ";
    cin >> hoursWorked;
    
    if (hoursWorked > 40)
    {
        double payCheck;
        payCheck = Overtime(hourlyWage, hoursWorked);
        cout << "\n\nYour paycheck will amount to: $" << payCheck << "\n" << endl;
    }
    else
    {
        double payCheck;
        payCheck = NoOvertime(hourlyWage, hoursWorked);
        cout << "\n\nYour paycheck will amount to: $" << payCheck << "\n" << endl;
    }
    
   
    return 0;
}