#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int a[3][4], i, j, n;
	cout << "---------------------------------------------" << endl;
	cout << "Enetr your array : " << endl;
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
	cout << "---------------------------------------------" << endl;
	cout << "entered array : " << endl;
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 4; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	cout << "---------------------------------------------" << endl;
	cout << "what number you whant to search : ";
	cin  >> n;
	cout << "---------------------------------------------" << endl;
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			if (a[i][j] == n)
			{
				cout << "your number is found" << endl;
				cout << "possion : " << endl;
				cout << "i = " << i << endl;
				cout << "j = " << j << endl;
			}
		}
	}
	cout << "---------------------------------------------" << endl;
	return 0;
}

