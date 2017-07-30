// Programming Exercise 5.1 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/7/17

//________________________________________Misc._____________________________________________________

#include <iostream>
using namespace std;

//________________________________________Functions_________________________________________________

class Person
{
public:
	Person();
	Person(string pname, int page);
	string get_name() const;
	int get_age() const;
private:
	string name;
	int age; // 0 if unknown
};

// Implementation for Functions

Person::Person()
{
	name = "";
	age = 0;
}


Person::Person(string pname, int page)
{
	name = pname;
	age = page;
}


string Person::get_name() const
{
	return name;
}


int Person::get_age() const
{
	return age;
}

//________________________________________All Script_______________________________________________


int main()
{
	Person x("Rene", 20);

	cout << "Person's name is: " << x.get_name() << ".\n" << endl;
	cout << "Person's age is: " << x.get_age() << ".\n" << endl;

	return 0;
}

