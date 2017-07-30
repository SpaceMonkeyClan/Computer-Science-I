// Programming Exercise 7.5
// Author: Dena, Rene
// Last Modified: 7/19/17

// _________________________Miscllanious_____________________________


#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <list>
#include <cstring>
#include <iterator>
#include <new>

using namespace std;

// _________________________Functions________________________________


double average(double* a, int a_size);

double Ave_Value(double * a, int a_size)
{
	double sum=0.0;
	for(int i=0; i<a_size; i++)
	{
		sum=sum+*(a);
		a++;
	}

	return sum/a_size;
}


// _________________________Strictly Script__________________________

int main(void)
{
    double arr[]={11.50,125.50,16.30};
    double avg=average(arr, 3);

    cout << "\nAverage value of the elemnts of the array:"<<avg;

    return 0;
}