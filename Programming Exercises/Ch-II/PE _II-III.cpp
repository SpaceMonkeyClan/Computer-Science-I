// Programing Exercise 2.3 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/14/17

// _______________________Miscellaneous____________________________
#include <sstream>
#include <cmath>
#include <iostream>

using namespace std;

// _______________________Functions_________________________________

int sum(int x, int y)
{
    int a;
    a = x + y;
    return a;
}

int difference(int x, int y)
{
    int b;
    b = fdim(x, y);
    return b;
}

int product(int x, int y)
{
    int c;
    c = x * y; //fma(x, y);
    return c;
}

int average(int x, int y)
{
    int d;
    d = (x + y) / 2;
    return d;
}
int distance(int x, int y)
{
    int e;
    e = fdim(x, y);
    e = abs(e);
    return e;
}
int maximum(int x, int y)
{
    int f;
    f = fmax(x, y);
    return f;
}

int minimum(int x, int y)
{
    int g;
    g = fmin(x, y);
    return g;
}


void mainConsole()
{
    cout << "\t\t\tWelcome to the \"MAIN CONSOLE!\"" << "\n" << endl;
    cout << "This is were all operations will be done." << "\n" << endl;
    cout << "Before we begin, ENTER your first number: ";
    int x;
    cin >> x; //getline(cin, x);
    cout << "You\'ve selected " << x << " as your first number." << "\n" << endl;
    cout << "LOADING..............." << "\n" << endl;
    cout << "Now, please ENTER your second number: ";
    int y;
    cin >> y; //getline(cin, y);
    cout << "You\'ve selected " << y << " as your second number." << "\n" << endl;
    cout << "We may now begin the operation processes." << "\n" << endl;
    cout << "Using the two integers you\'ve provided, we will find the: " << "\n" << endl;
    cout << "A.) Sum" << endl;
    cout << "B.) Difference" << endl;
    cout << "C.) Product" << endl;
    cout << "D.) Average" << endl;
    cout << "E.) Distance" << endl;
    cout << "F.) Maximum" << endl;
    cout << "G.) Minimum" << "\n\n" << endl;
    cout << "Process now underway.........." << "\n" << endl;
    cout << "Progress - 27%..." << endl;
    cout << "Progress - 52%..." << endl;
    cout << "Progress - 78%..." << endl;
    cout << "Progress - 99%..." << "\n" << endl;
    cout << "PROGRESS COMPLETE!" << "\n\n" << endl;
    cout << "Pulling answers.........and DONE!" << "\n\n" << endl;
    int a, b, c, d, e, f, g;
    a = sum(x, y);
    cout << "A.) The `SUM` of " << x << " and " << y << " is: " << a << endl;
    b = difference(x, y);
    cout << "B.) The `DIFFERENCE` of " << x << " and " << y << " is: " << b << endl;
    c = product(x, y);
    cout << "C.) The `PRODUCT` of " << x << " and " << y << " is: " << c << endl;
    d = average(x, y);
    cout << "D.) The `AVERAGE` of " << x << " and " << y << " is: " << d << endl;
    e = distance(x, y);
    cout << "E.) THE `DISTANCE` of " << x << " and " << y << " is: " << e << endl;
    f = maximum(x, y);
    cout << "F.) The `MAXIMUM` of " << x << " and " << y << " is: " << f << endl;
    g = minimum(x, y);
    cout << "G.) The `MINIMUM` of " << x << " and " << y << " is: " << g << endl;
}

// _______________________Strictly Script___________________________

int main()
{
    cout << "\n\t\t\tWelcome to \"Automatic Calculator!\"" << "\n" << endl;
    cout << "Heading to the MAIN CONSOLE now!" << "\n" << endl;
    cout << "LOADING..............." << "\n" << endl;

    mainConsole();

    return 0;
}
