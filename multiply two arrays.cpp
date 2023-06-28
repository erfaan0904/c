#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int a[2][3], b[3][2], c[2][2];
	//--------------------Erntering arrays--------------------------
	cout << "--------------------------------" << endl;
	cout << "enter first array : " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << " a[" << i + 1 << "][" << j + 1 << "] : ";
			cin >> a[i][j];
		}
	}
	cout << "--------------------------------" << endl;
	cout << "enter second array : " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << " b[" << i + 1 << "][" << j + 1 << "] : ";
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{	c[i][j] = 0;	}
	}
	//-------------Show arrays befor multiplication-----------------
	cout << "--------------------------------" << endl;
	cout << "first array : " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	cout << "second array : " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << b[i][j] << " ";
		cout << endl;
	}
	//-----------------multiplication arrays------------------------
	cout << "--------------------------------" << endl;
	cout << "first aart x second array : " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 3; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << c[i][j] << " ";
		cout << endl;
	}
	cout << "--------------------------------" << endl;
	//--------------------------------------------------------------
	return 0;
}