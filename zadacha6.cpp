// zadacha6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	cout << "Insert number from 10 to 99:";
	int n;
	cin >> n;
	int k = n % 10;
	int l = n / 10 % 10;
	int sum = 0;
	if (n >= 10 && n < 100)
	{
		for (int i = 10; i < 100; i++)
		{

			sum =( ( ( (2 * l) + (k + l - 1) ) * (k + l) ) / 2 );
		}
		cout << "The sum of the numbers of that number is:";
		cout << sum << endl;
	}
	else
	{
		cout << "The number is not in this range!" << endl;
	}
	
    return 0;
}

