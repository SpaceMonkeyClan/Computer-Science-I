// Programming Exercise 7.1
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
    Person *BestFriend;
    string best;
    int popularity_counter;

    Person()
    {
        popularity_counter = 0;
        BestFriend = NULL;
    }
};

std::vector<Person>::iterator it1;
std::vector<Person>::iterator it2;

Person * UpdateFriendCount(char *name);

vector<Person*> PersonVector;

void TakeInputs()
{
    cout << "Enter Person Details:\n";
    for(int i=0; i<5; i++)
    {
        Person* p1=new Person();
        cout << "\nEnter" << i+1 << " Person Name\t";
        cin >> p1->name;

        PersonVector.push_back(p1);
    }

    for (it1=PersonVector.begin(); it1<PersonVector.end(); it1++)
    {
        char Bfrnd[50];
        cout << "\nEnter " << (*it1)->name << " best friend name\t";
        cin >> Bfrnd;
        (*it1)->BestFriend = UpdateFriendCount(Bfrnd);
        if((*it1)->BestFriend->name==NULL)
        {
            (*it1)->best=Bfrnd;
        }
    }
}

Person * UpdateFriendCount(char *name)
{
    for(it2=PersonVector.begin(); it1<PersonVector.end(); it2++)
    {
        if(strcmp((*it2)->name,name)==0)
        {
            (*it2)->popularity_counter++;
            return *it2;
        }

        cout << "\nName:\t" << it1->name;
    }

    return NULL;
}

void DisplayDetails(void)
{
    cout << "\nPerson Details Are................";
    for (it1=PersonVector.begin(); it1<PersonVector.end(); it1++)
    {
        cout << "\nName\t" << (*it1)->name;
        if((*it1)->BestFriend->name!=NULL)
        {
            cout << "\nBest Friend Name\t" << (*it1)->BestFriend->name;
        }
        else
        {
            cout << "\nBest friend name: \t" <<(*it1)->best;
            cout << "\nCount\t" << (*it1)->popularity_counter<<"\n\n";
        }
    }
}

// _________________________Strictly Script__________________________

int main()
{
    TakeInputs();
    DisplayDetails();

    return 0;
}