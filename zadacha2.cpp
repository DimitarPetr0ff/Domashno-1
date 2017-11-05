// zadacha2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int n;
	int count = 0;
	int sum = 0;
	int average_sum = 0;
	for (int i = 1 ; i <= 200; i++)
	{
		do {
			cout << "Insert number in the range from 1 to 200: ";
			cin >> n;
			cout << "Please insert another number which is in that range!" << endl;
		} while (n < 1 || n > 200);
		cout << "Valid number!" << endl;
		count++;
		cout << "The count of the numbers is: " << count << endl;
		sum += n;
		cout << "The sum is: " << sum << endl;
		average_sum = sum / 2;
		cout << "The average sum is: " << average_sum << endl;
	}
    return 0;
}

