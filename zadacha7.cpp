// zadacha7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	cout << "Insert number from 10 to 200:";
	int n; 
	cin >> n;
	cout << "Seven devides these numbers:" << endl;
		do
		{
			if (n % 7 == 0)
			{
				cout << n << endl;
			}
		} while (n > 10 && n < 201 && n--);
		cout << "None" << endl;
    return 0;
}

