// Programming Exercise 7.6
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


double* Max_Value(double * arr, int arr_size)
{
	if(arr_size<=0)
	{
		return NULL;
	}
	else
	{
		double * max;
		double num=0.0;
		max=#
		for(int i=0;i;)
		{
			if(*max)
				*max=arr[i];
		}

		return max;
	}
}



// _________________________Strictly Script__________________________

int main(void)
{
    double arr[]={11.50,125.50,16.30};

    double * max=Max_Value(arr, 3);

    cout << "maximum value of array elements:"<<*max;

    return 0;
}