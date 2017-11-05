// zadacha1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	int n;
	cout << "Insert number from 10 to 5555: ";
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
	label:
		cout << "Please enter n's numbers:" << endl;
		int number;
		cin >> number;
		if (number >= 10 && number < 5556)
		{
			sum += number;
		}
		else
		{
			cout << "Wrong number!" << endl;
			goto label;
		}
	}
	cout << "The sum of these numbers is: " << endl;
	cout << sum << endl;
    return 0;
}

