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
	cout << "The number is devided by:" << endl;
	for(int i = 1; i <=num; i++)
	{
		if (num % i == 0)
		{
			cout << i << endl;
		}
	}
    return 0;
}

