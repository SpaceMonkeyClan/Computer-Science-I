// programming Exercise 3.7 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/22/17

#include <iostream>

using namespace std;

int main()
{
    cout << "\n\t\t\tWelcome to the \"Lexicographically\" program!" << "\n" << endl;
    
    string x, y, z;
    
    cout << "\n\nIn starting, please ENTER three strings: " << "\n" << endl;
    cout << "String one: "; cin >> x; cout << endl;
    cout << "String two: "; cin >> y; cout << endl;
    cout << "String three: "; cin >> z; cout << endl;
    
    
    string xI, yI, zI;
    xI = toupper(x.at(0));
    yI = toupper(y.at(0));
    zI = toupper(z.at(0));
    
    string A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z;
    int xII, yII, zII;
    
    // XI
    if (xI == "A")
        xII = 1;
    else if ( xI== "B")
        xII= 2;
    else if ( xI== "C")
        xII= 3;
    else if ( xI== "D")
        xII= 4;
    else if ( xI== "E")
        xII= 5;
    else if ( xI== "F")
        xII= 6;
    else if ( xI== "G")
        xII= 7;
    else if ( xI== "H")
        xII= 8;
    else if ( xI== "I")
        xII= 9;
    else if ( xI== "J")
        xII= 10;
    else if ( xI== "K")
        xII= 11;
    else if ( xI== "L")
        xII= 12;
    else if ( xI== "M")
        xII= 13;
    else if ( xI== "N")
        xII= 14;
    else if ( xI== "O")
        xII= 15;
    else if ( xI== "P")
        xII= 16;
    else if ( xI== "Q")
        xII= 17;
    else if ( xI== "R")
        xII= 18;
    else if ( xI== "S")
        xII= 19;
    else if ( xI== "T")
        xII= 20;
    else if ( xI== "U")
        xII= 21;
    else if ( xI== "V")
        xII= 22;
    else if ( xI== "W")
        xII= 23;
    else if ( xI== "X")
        xII = 24;
    else if ( xI== "Y")
        xII = 25;
    else
        xII = 26;
        
    // YI
    if (yI == "A")
        yII = 1;
    else if ( yI== "B")
        yII = 2;
    else if ( yI== "C")
        yII= 3;
    else if ( yI== "D")
        yII= 4;
    else if ( yI== "E")
        yII= 5;
    else if ( yI== "F")
        yII= 6;
    else if ( yI== "G")
        yII= 7;
    else if ( yI== "H")
        yII= 8;
    else if ( yI== "I")
        yII= 9;
    else if ( yI== "J")
        yII= 10;
    else if ( yI== "K")
        yII= 11;
    else if ( yI== "L")
        yII= 12;
    else if ( yI== "M")
        yII= 13;
    else if (yI == "N")
        yII= 14;
    else if ( yI== "O")
        yII= 15;
    else if (yI == "P")
        yII= 16;
    else if ( yI== "Q")
        yII= 17;
    else if ( yI== "R")
        yII= 18;
    else if (yI == "S")
        yII= 19;
    else if (yI == "T")
        yII =20;
    else if (yI == "U")
        yII =21U;
    else if (yI == "V")
        yII =22;
    else if ( yI== "W")
        yII =23;
    else if ( yI== "X")
        yII =24;
    else if ( yI== "Y")
        yII= 25;
    else
        yII= 26;
        
    // ZI
    if (zI == "A")
        zII = 1;
    else if (zI == "B")
        zII = 2;
    else if (zI == "C")
        zII = 3;
    else if (zI == "D")
        zII = 4;
    else if (zI == "E")
        zII = 5;
    else if (zI == "F")
        zII = 6;
    else if (zI == "G")
        zII = 7;
    else if (zI == "H")
        zII = 8;
    else if (zI == "I")
        zII = 9;
    else if (zI == "J")
        zII = 10;
    else if (zI == "K")
        zII = 11;
    else if (zI == "L")
        zII = 12;
    else if (zI == "M")
        zII = 13;
    else if (zI == "N")
        zII = 14;
    else if (zI == "O")
        zII = 15;
    else if (zI == "P")
        zII = 16;
    else if (zI == "Q")
        zII = 17;
    else if (zI == "R")
        zII = 18;
    else if (zI == "S")
        zII = 19;
    else if (zI == "T")
        zII = 20;
    else if (zI == "U")
        zII = 21;
    else if (zI == "V")
        zII = 22;
    else if (zI == "W")
        zII = 23;
    else if (zI == "X")
        zII = 24;
    else if (zI == "Y")
        zII = 25;
    else
        zII = 26;

    
    string top, middle, last;
    // for x
    if (xII < yII && xII < zII)
        top = x;
    else if (xII > yII && xII > zII)
        last = x;
    else
        middle = x;
    
    // for y
    if (yII < xII && yII < zII)
        top = y;
    else if (yII > xII && yII > zII)
        last = y;
    else
        middle = y;

    // for z
    if (zII < yII && zII < xII)
        top = z;
    else if (zII > yII && zII > xII)
        last = z;
    else
        middle = z;
    
    
    
    cout << "\n\nLexicographical Order: " << "\n" << endl; 
    cout << "1.) " << top << endl;
    cout << "2.) " << middle << endl;
    cout << "3.) " << last << endl;  
   
    return 0;
}