// zadacha3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	cout << "Insert number:";
	int num;
	cin >> num;
	int sum = 1;
	for (int i = 1; i < 10; i++)
	{
		num /= 10;
		if (num != 0)
		{
			++sum;
		}
	}
	if (sum != 1)
	{
		cout << "The sum of numbers in it are:";
		cout << sum << endl;
	}
	else 
	{
		cout << "The number in it is:" << sum << endl;
	}
    return 0;
}

