// Programming Exercise 6.1 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 7/15/17

//________________________________________Misc._____________________________________________________

#include <iostream>
#include <array>
#include <vector>

using namespace std;

//________________________________________Functions_________________________________________________


double scalar_product(vector<int> a, vector<int> b)
{
    double c[100], sum = 0;
    for(int i=0; i<=2; i++)
    {
        c[i]=a[i]*b[i];
        sum=sum+c[i];
    }

    return sum;
}

//________________________________________All Script________________________________________________


int main()
{
    vector<int> a(3);
    vector<int> b(3);

    cout << "\nEnter the values of 'a' and 'b'........... " << endl;
    for(int i = 0; i <= 2; i++)
    {
        cout << "\nEnter value for 'a': ";
        cin >> a[i];
        cout << "Enter value for 'b': ";
        cin >> b[i];
    }

    for(int i = 0; i <= 2; i++)
    {
        cout << "a" << "[" << i << "]" << "=" << a[i] << endl;
        cout << "b" << "[" << i << "]" << "=" << b[i] << endl;
    }

    double c = scalar_product(a, b);

    cout << "\nThe scalar product of the two vectors is: " << c << endl;


    return 0;
}


