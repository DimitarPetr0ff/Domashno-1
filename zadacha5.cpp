// zadacha5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	
	for(int i = 100;i < 1000; i++)
	{
		int n;
		cin >> n;
		int k = n % 10;
		int l = n / 10 % 10;
		int m = n / 100;
		if (k != l && l != m && k != m)
		{
			cout << "The number has not equal symbols" << endl; break;
		}
		/*else
		{
			cout << "Please enter another number:";
			if (k != l && l != m && k != m)
			{
				cout << "The number has not equal symbols" << endl; break;
			}
		}*/
	}
    return 0;
}

