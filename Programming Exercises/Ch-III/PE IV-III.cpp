// Programming Exercise 4.3 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/30/17


#include <iostream>

using namespace std;

// ____________________________________________MISC....__________________________


// ____________________________________________FUNCTIONS_________________________


int sort3(int& a, int& b, int& c) // a=w /b=x /c=y
{
    if (a < b && a < c)
    {
        // int first = w;
        if (b > a && b < c)
        {
            // int second = x;
            // int third = y;
            cout << "\nThe integer values will NOT be switched. Thus, INT_I = " << a << ", INT_II = " <<  b << ", and INT_III = " << c << "." << endl;  
        }
        else if (b > a && b > c)
        {
            // int second = y;
            // int third = x;
            cout << "\nThe integer values INT_II and INT_III will be switched. Thus, INT_I = " << a << ", INT_II = " <<  c << ", and INT_III = " << b << "." << endl;  
        }
    }
    else if (b < a && b < c)
    {
        // int first = x;
        if (a > b && a < c)
        {
            // int second = x;
            // int third = y;
            cout << "\nThe integer values INT_I and INT_II Will be switched. Thus, INT_I = " << b << ", INT_II = " <<  a << ", and INT_III = " << c << "." << endl;  
        }
        else if (a > c && a > b)
        {
            // int second = y;
            // int third = x;
            cout << "\nThe integer values INT_I, INT_II, and INT_III Will all be switched. Thus, INT_I = " << b << ", INT_II = " <<  c << ", and INT_III = " << a << "." << endl;  
        }
    }
    else if (c < a && c < b)
    {
        // int first = y;
        if (b < a && b > c)
        {
            // int second = x;
            // int third = y;
            cout << "\nThe integer values INT_I and INT_III Will be switched. Thus, INT_I = " << c << ", INT_II = " <<  b << ", and INT_III = " << a << "." << endl;  
        }
        else if (b > a && b > c)
        {
            // int second = y;
            // int third = x;
            cout << "\nThe integer values INT_I, INT_II, and INT_III Will all be switched. Thus, INT_I = " << c << ", INT_II = " <<  a << ", and INT_III = " << b << "." << endl;  
        }
    }
    return 0;
}



void MainConsole()
{
    int w, x, y;
    cout << "\nENTER your three integers below......\n " << endl;
    cout << "Please ENTER your first integer(INT_I): ";
    cin >> w;
    cout << "You've selected " << w << " as your first integer.\n" << endl;
    
    cout << "Please ENTER your second integer(INT_II): ";
    cin >> x;
    cout << "You've selected " << x << " as your second integer.\n" << endl;

    cout << "Please ENTER your third integer(INT_III): ";
    cin >> y;
    cout << "You've selected " << y << " as your third integer.\n" << endl;

    int process = sort3(w, x, y);
    cout << process; 
}


// ____________________________________________STRICKLY SCRIPT______________________


int main()
{
    cout << "\n\n\t\t\tWelcome to \"Number Switch Calculator!\"\n" << endl;
    cout << "\nIn beginning, you'll first have to ENTER three integers.\n" << endl;
        
    MainConsole();
    
    
    return 0;
}

