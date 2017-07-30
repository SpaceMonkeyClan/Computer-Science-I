// Programing Excericse 1.2 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/12/17

#include <iostream>

using namespace std;

int main()
{
    cout << endl;
    cout << "Hello, my name is Hall!" << endl;
    cout << "     " << "What is your name?:" << endl;
    cout << "       ";
    string usersName;
    getline(cin, usersName);
    cout << "         ";
    cout << "Hello, " + usersName + ". I am glad to meet you!" << endl;
    return 0;
}