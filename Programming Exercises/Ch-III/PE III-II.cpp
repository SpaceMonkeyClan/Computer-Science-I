// programming Exercise 3.2 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/22/17

#include <iostream>
using namespace std;

int main()
{
    cout << "\n\t\t\tWelcome to the \"Cards Script\" program!" << endl;
    string A, K, Q, J, H, D, S, C;
    
    
    cout << "\n\n" << "Given that the average deck of cards consist of 52 cards within its deck, using only a number \nvalue within the range of 1-10 and the first inital of the suit, select the card of your choosing." << "\n" << endl;
    
    cout << "\n" << "For reference, here\'s a handy chart: " << "\n" << endl;
    cout << "1-10 = Card Value" << endl;
    A = "Ace";
    cout << "A = Ace" << endl;
    K = "King";
    cout << "K = King" << endl;
    Q = "Queen";
    cout << "Q = Queen" << endl;
    J = "Jack";
    cout << "J = Jack" << endl;
    H = "Hearts.";
    cout << "H = Hearts" << endl;
    D = "Diamonds.";
    cout << "D = Diamonds" << endl;
    S = "Spades.";
    cout << "S = Spades" << endl;
    C = "Clubs.";
    cout << "C = Clubs" << endl;
    
    string x;
    cout << "\n\n" << "Please enter the card notation: " << "\n" << endl;
    cin >> x;
    
    int y;
    
    if (x == "AH")
        y = 1;
    else if (x == "KH" )
        y = 2;
    else if (x == "QH")
        y = 3;
    else if (x == "JH")
        y = 4;
    else if (x == "10H")
        y = 5;
    else if (x == "9H")
        y = 6;
    else if (x == "8H")
        y = 7;
    else if (x == "7H")
        y = 8;
    else if (x == "6H")
        y = 9;
    else if (x == "5H")
        y = 10;
    else if (x == "4H")
        y = 11;
    else if (x == "3H")
        y = 12;
    else if (x == "2H")
        y = 13;
    else if (x == "AD")
        y = 14;
    else if (x == "KD")
        y = 15;
    else if (x == "QD")
        y = 16;
    else if (x == "JD")
        y = 17;
    else if (x == "10D")
        y = 18;
    else if (x == "9D")
        y = 19;
    else if (x == "8D")
        y = 20;
    else if (x == "7D")
        y = 21;
    else if (x == "6D")
        y = 22;
    else if (x == "5D")
        y = 23;
    else if (x == "4D")
        y = 24;
    else if (x == "3D")
        y = 25;
    else if (x == "2D")
        y = 26;
    else if (x == "AS")
        y = 27;
    else if (x == "KS")
        y = 28;
    else if (x == "QS")
        y = 29;
    else if (x == "JS")
        y = 30;
    else if (x == "10S")
        y = 31;
    else if (x == "9S")
        y = 32;
    else if (x == "8S")
        y = 33;
    else if (x == "7S")
        y = 34;
    else if (x == "6S")
        y = 35;
    else if (x == "5S")
        y = 36;
    else if (x == "4S")
        y = 37;
    else if (x == "3S")
        y = 38;
    else if (x == "2S")
        y = 39;
    else if (x == "AC")
        y = 40;
    else if (x == "KC")
        y = 41;
    else if (x == "QC")
        y = 42;
    else if (x == "JC")
        y = 43;
    else if (x == "10C")
        y = 44;
    else if (x == "9C")
        y = 45;
    else if (x == "8C")
        y = 46;
    else if (x == "7C")
        y = 47;
    else if (x == "6C")
        y = 48;
    else if (x == "5C")
        y = 49;
    else if (x == "4C")
        y = 50;
    else if (x == "3C")
        y = 51;
    else if (x == "2C")
        y = 52;
    else
        y = 53;
        
    
    switch(y)
    {
        // HEARTS
        case 1: cout << "You\'ve selected: " << A << " of " << H << "\n" << endl; break;
        case 2: cout << "You\'ve selected: " << K << " of " << H << "\n" << endl; break;
        case 3: cout << "You\'ve selected: " << Q << " of " << H << "\n" << endl; break;
        case 4: cout << "You\'ve selected: " << J << " of " << H << "\n" << endl; break;
        case 5: cout << "You\'ve selected: " << 10 << " of " << H << "\n" << endl; break;
        case 6: cout << "You\'ve selected: " << 9 << " of " << H << "\n" << endl; break;
        case 7: cout << "You\'ve selected: " << 8 << " of " << H << "\n" << endl; break;
        case 8: cout << "You\'ve selected: " << 7 << " of " << H << "\n" << endl; break;
        case 9: cout << "You\'ve selected: " << 6 << " of " << H << "\n" << endl; break;
        case 10: cout << "You\'ve selected: " << 5 << " of " << H << "\n" << endl; break;
        case 11: cout << "You\'ve selected: " << 4 << " of " << H << "\n" << endl; break;
        case 12: cout << "You\'ve selected: " << 3 << " of " << H << "\n" << endl; break;
        case 13: cout << "You\'ve selected: " << 2 << " of " << H << "\n" << endl; break;
        // DIMONDS
        case 14: cout << "You\'ve selected: " << A << " of " << D << "\n" << endl; break;
        case 15: cout << "You\'ve selected: " << K << " of " << D << "\n" << endl; break;
        case 16: cout << "You\'ve selected: " << Q << " of " << D << "\n" << endl; break;
        case 17: cout << "You\'ve selected: " << J << " of " << D << "\n" << endl; break;
        case 18: cout << "You\'ve selected: " << 10 << " of " << D << "\n" << endl; break;
        case 19: cout << "You\'ve selected: " << 9 << " of " << D << "\n" << endl; break;
        case 20: cout << "You\'ve selected: " << 8 << " of " << D << "\n" << endl; break;
        case 21: cout << "You\'ve selected: " << 7 << " of " << D << "\n" << endl; break;
        case 22: cout << "You\'ve selected: " << 6 << " of " << D << "\n" << endl; break;
        case 23: cout << "You\'ve selected: " << 5 << " of " << D << "\n" << endl; break;
        case 24: cout << "You\'ve selected: " << 4 << " of " << D << "\n" << endl; break;
        case 25: cout << "You\'ve selected: " << 3 << " of " << D << "\n" << endl; break;
        case 26: cout << "You\'ve selected: " << 2 << " of " << D << "\n" << endl; break;
        // SPADES
        case 27: cout << "You\'ve selected: " << A << " of " << S << "\n" << endl; break;
        case 28: cout << "You\'ve selected: " << K << " of " << S << "\n" << endl; break;
        case 29: cout << "You\'ve selected: " << Q << " of " << S << "\n" << endl; break;
        case 30: cout << "You\'ve selected: " << J << " of " << S << "\n" << endl; break;
        case 31: cout << "You\'ve selected: " << 10 << " of " << S << "\n" << endl; break;
        case 32: cout << "You\'ve selected: " << 9 << " of " << S << "\n" << endl; break;
        case 33: cout << "You\'ve selected: " << 8 << " of " << S << "\n" << endl; break;
        case 34: cout << "You\'ve selected: " << 7 << " of " << S << "\n" << endl; break;
        case 35: cout << "You\'ve selected: " << 6 << " of " << S << "\n" << endl; break;
        case 36: cout << "You\'ve selected: " << 5 << " of " << S << "\n" << endl; break;
        case 37: cout << "You\'ve selected: " << 4 << " of " << S << "\n" << endl; break;
        case 38: cout << "You\'ve selected: " << 3 << " of " << S << "\n" << endl; break;
        case 39: cout << "You\'ve selected: " << 2 << " of " << S << "\n" << endl; break;
        // CLUBS
        case 40: cout << "You\'ve selected: " << A << " of " << C << "\n" << endl; break;
        case 41: cout << "You\'ve selected: " << K << " of " << C << "\n" << endl; break;
        case 42: cout << "You\'ve selected: " << Q << " of " << C << "\n" << endl; break;
        case 43: cout << "You\'ve selected: " << J << " of " << C << "\n" << endl; break;
        case 44: cout << "You\'ve selected: " << 10 << " of " << C << "\n" << endl; break;
        case 45: cout << "You\'ve selected: " << 9 << " of " << C << "\n" << endl; break;
        case 46: cout << "You\'ve selected: " << 8 << " of " << C << "\n" << endl; break;
        case 47: cout << "You\'ve selected: " << 7 << " of " << C << "\n" << endl; break;
        case 48: cout << "You\'ve selected: " << 6 << " of " << C << "\n" << endl; break;
        case 49: cout << "You\'ve selected: " << 5 << " of " << C << "\n" << endl; break;
        case 50: cout << "You\'ve selected: " << 4 << " of " << C << "\n" << endl; break;
        case 51: cout << "You\'ve selected: " << 3 << " of " << C << "\n" << endl; break;
        case 52: cout << "You\'ve selected: " << 2 << " of " << C << "\n" << endl; break;
        // Error Check
        case 53: cout << "No such card exist :( Why don't you have another try?" <<"\n" << endl; break;
    }
    return 0;
}

// NOT YET SET TO `toupper(x)` USING <cctype> REFRENCE.!!!!