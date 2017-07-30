// Programming Exercise 4.2 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/26/17

#include <iostream>

using namespace std;



int sort2(int& a, int& b)
{
	if (a < b)
	{
		cout << "The initial assigned variables will NOT be switched. Thus, INT_I is still " << a << " &nd INT_II is still " << b << ".\n" << endl;  
	}
	else if (a > b)
	{
		cout << "The initial assigned variables WILL be switched. Thus, INT_I is now equal to " << b << " &nd INT_II is now equal to " << a << ".\n" << endl;
	}
	else if (a == b)
	{
		cout << "Given the initial assigned variables are equal, they will NOT be switched. Thus, INT_I is still " << a << " &nd INT_II is still " << b << ".\n" << endl;  
	}
	return 0;
}



void MainConsole()
{
	int w, x;
	cout << "\nENTER your two integers below......\n " << endl;
	cout << "Please ENTER your first integer(INT_I): ";
	cin >> w;
	cout << "You've selected " << w << " as your first integer.\n" << endl;
	
	cout << "Please ENTER your second integer(INT_II): ";
	cin >> x;
	cout << "You've selected " << x << " as your second integer.\n" << endl;

    int process = sort2(w, x);
    cout << process; 
}


int main()
{
	cout << "\n\n\t\t\tWelcome to \"Number Switch Calculator!\"\n" << endl;
	cout << "\nIn beginning, you'll first have to ENTER two integers.\n" << endl;
		
	MainConsole();
	
	
	return 0;
}
