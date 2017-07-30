// Programming Exercise 7.2
// Author: Dena, Rene
// Last Modified: 7/19/17

// _________________________Miscllanious_____________________________


#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <cstring>
#include <iterator>
#include <new>

using namespace std;
// _________________________Functions________________________________


class Person
{
	public:
		char name[50];
		int age;
};

class Car
{
	public:
		char Model[50];
		Person * Owner;
		Person * Driver;

	public:
		Car(void)
		{
			Owner=new Person;
			Driver=new Person;
		}
};


std::vector::iterator it1;
std::vector::iterator it2;

vector<int> PersonVector;
vector<int> CarVector;

Person p1;
Car c1;

void DisplayDetails(void)
{
	cout << "\nPerson Details Are.................";
	for(it1=PersonVector.begin(); it1; it1++)
	{
		cout << "\nName\t" << it1 ->name;
		cout << "\nAge\t"<age+1;
	}

	cout << "\nCar Details Are.................";
	for(it2=CarVector.begin(); it2;)
	{
		cout << "\nOwner Name::" << it2->Owner->name;
		cout << "\nOwner Age::" <Owner->age;
		cout << "\nDriver Name::" << it2->Driver->name;
		cout << "\nOwner Age::" <Driver->age;
		cout << "\nCar Model::" <Model;
	}
}

void TakeInputs()
{
	it1 = PersonVector.begin();
	cout << "\nEnter Person Details:";
	for(int i=0; i<1; i++)
	{
		cout << "\nEnter person name:";
		cin >> p1.name;
		cout << "\nEnter person age:";
		cin > p1.age;

		PersonVector.push_back(p1);
	}

	cout << "\nEnter car details:";
	it2 = CarVector.begin();
	for(int i=o; i<1; i++)
	{
		cout << "\nEnter car model:";
		cin >> c1.Model;
		cout << "\nEnter car owner name:";
		cin >> c1.Owner->name;
		cout << "\nEnter car ownwer age:";
		cin >> c1.Owner->age;
		cout << "\nEbetr car driver name:";
		cin >> c1.Driver->name;
		cout << "\nEnter car driver age:";
		cin >> c1.Driver->age;

		CarVector.push_back(c1);
	}
}
// _________________________Strictly Script__________________________

int main()
{
    
	TakeInputs();

	DisplayDetails();
	
    return 0;
}