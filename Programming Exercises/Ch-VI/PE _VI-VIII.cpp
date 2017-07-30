// Programming Exercise 6.8 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 7/15/17

//________________________________________Misc._____________________________________________________

#include <iostream>
#include <array>
#include <vector>

using namespace std;

//________________________________________Functions_________________________________________________


bool same_set(vector<int> a, vector<int> b)
{
    bool c;

    for(int i=0;i<=5; i++)
    {
        c=false;

        for(int j=0;j<=5; j++)
        {
            if(a[i]==b[j])
            {
                c=true;
                break;
            }
        }

        if(c==false)
            return c;
    }

    return c;
}


//________________________________________All Script________________________________________________


int main()
{
    vector<int> a;

    cout << "\nEnter the values fot the first series...........\n";

    bool m = true;
    while(m)
    {
        int s;
        cout << "Enter number or '0' to exit: ";
        cin >> s;
        if(s == 0)
            m = false;
        else
            a.push_back(s);
    }

    vector<int> b;

    cout << "\nEnter the values fot the second series...........\n";

    m = true; //
    while(m)
    {
        int s;
        cout << "Enter number or '0' to exit: ";
        cin >> s;
        if(s == 0)
            m = false;
        else
            b.push_back(s);
    }


    bool equ = same_set(a, b);

    if(equ==true)
        cout << "\nSame elements";
    else
        cout << "\nDifferent elements";

    return 0;
}

