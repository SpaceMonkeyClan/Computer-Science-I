// Programming Exercise 5.2 - V 1.0.0
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



class PEmployee
{
public:
	PEmployee();
	PEmployee(string employee_name, double initial_salary);
	double set_salary(double new_salary);
	double get_salary() const;
	string get_name() const;
private:
	Person person_data;
	double salary;
};


PEmployee::PEmployee()
{
	person_data = Person();
	salary = 0;
}


PEmployee::PEmployee(string employee_name, double initial_salary)
{
	person_data = Person(employee_name, 0);
	salary = initial_salary;
}


double PEmployee::set_salary(double new_salary)
{
	salary = new_salary;
}


double PEmployee::get_salary() const
{
	return salary;
}


string PEmployee::get_name() const
{
	return person_data.get_name();
}


//________________________________________All Script_______________________________________________


int main()
{
	PEmployee y("Rene", 3500);

	cout << "Employee's name is: " << y.get_name() << ".\n" << endl;
	cout << "Employee's salary is: $" << y.get_salary() << ".\n" << endl;

	cout << "Employee's salary has chaged.....\n" << endl;

	y.set_salary(5700);
	cout << "Employee's new salary is: $" << y.get_salary() << ".\n" << endl;

	return 0;
}

