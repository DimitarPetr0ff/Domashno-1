// zadacha4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	cout << "Insert number:";
	int num;
	cin >> num;
	if (num % 2 == 0)
	{
		cout << "This number is divided by:2" << endl;
	}
	if (num % 3 == 0)
	{
		cout << "This number is divided by:3" << endl;
	}
	if (num % 5 == 0)
	{
		cout << "This number is divided by:5" << endl;
	}
	if (num % 7 == 0)
	{
		cout << "This number is divided by:7" << endl;
	}
	if (num % 11 == 0)
	{
		cout << "This number is divided by:11" << endl;
	}
	if (num % 13 == 0)
	{
		cout << "This number is divided by:13" << endl;
	}
	if (num % 17 == 0)
	{
		cout << "This number is divided by:17" << endl;
	}
	if (num % 23 == 0)
	{
		cout << "This number is divided by:23" << endl;
    }
	if (num % 29 == 0)
	{
		cout << "This number is divided by:29" << endl;
	}
    return 0;
}

