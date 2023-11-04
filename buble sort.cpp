#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int temp, array_size;
	int a[1];
	cout << endl << "----------------------------" << endl;
	cout << "enetr your array size : ";
	cin >> array_size;
	cout << "----------------------------" << endl;
	cout << "enter your array : " << endl;
	for (int i = 0; i <= array_size - 1; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
	cout << "----------------------------" << endl;
	cout << "array before sorting" << endl;
	for (int i = 0; i <= array_size - 1; i++)
		cout << a[i] << " ";
	cout << endl;
	for (int i = 0; i <= array_size - 1; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (a[i] > a[j + 1])
			{
				temp     = a[i];
				a[j]     = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	cout << "----------------------------" << endl;
	cout << "array after sorting : " << endl;
	for (int i = 0; i <= array_size - 1; i++)
		cout << a[i];
	cout << endl;
	return 0;
}

