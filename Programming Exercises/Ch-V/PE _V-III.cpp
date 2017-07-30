// Programming Exercise 5.3 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/7/17

//________________________________________Misc._____________________________________________________

#include <iostream>
using namespace std;

//________________________________________Functions_________________________________________________

class Address
{
public:
	Address(int apt_no);
	Address();
	void print();
	void comes_before(Address obj1, Address obj2);
private:
	char street[20];
	char city[20];
	char state[20];
	int apartment_number;
	char houseno[10];
	int postal_code;

};

Address::Address(int apt_no)
{
	cout << "\nEnter house number: ";
	cin >> houseno;
	cout << "Enter street address: ";
	cin >> street;
	apartment_number = apt_no;
	cout << "Enter the city: ";
	cin >> city;
	cout << "Enter the state: ";
	cin >> state;
	cout << "Enter the postal code: ";
	cin >> postal_code;
}

Address::Address()
{
	cout << "\nEnter house number: ";
	cin >> houseno;
	cout << "Enter the street address: ";
	cin >> street;
	cout << "Enter the city: ";
	cin >> city;
	cout << "Enter the state: ";
	cin >> state;
	cout << "Enter the postal code: ";
	cin >> postal_code;
	apartment_number = 0;
}

void Address::print()
{
	cout << "\n___________________________________________________\n" << endl;
	cout << "House number: " << houseno << " Street: " << street << endl;
	cout << "City: " << city << " State: " << state << " Postal code: " << postal_code << endl;
	if (apartment_number != 0)
		cout << "Apartment number: " << apartment_number << endl;
	cout << "___________________________________________________" << endl;
}


void Address::comes_before(Address obj1, Address obj2)
{
	if (obj1.postal_code < obj2.postal_code)
	{
		cout << "\nAddress with postal '" << obj1.postal_code << "' comes before Address with postal '" << obj2.postal_code << "'.\n" << endl;
	}
	else
	{
		cout << "\nAddress with postal '" << obj2.postal_code << "' comes before Address with postal '" << obj1.postal_code << "'.\n" << endl;
	}
};


int main()
{
	int a, b;
	char app;
	cout << "Do you want to enter apartment number?(y/n): ";
	cin >> app;
	if (app == 'y' or app == 'Y')
	{
		cout << "\nEnter apartment number: ";
		cin >> a;
		cout << "\nEnter address of first house;.........";
		Address obj1(a);
		obj1.print();
		cout << "\nEnter address of second house;......... ";
		cin >> b;
		Address obj2(b);
		obj2.print();
		obj1.comes_before(obj1, obj2);
	}
	else
	{
		cout << "Wrong choice, try again.";
		main();
	}
	system("pause");
}

//