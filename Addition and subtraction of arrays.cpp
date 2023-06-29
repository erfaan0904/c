#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int a[2][2], b[2][2], add[2][2] = { 0 }, sub[2][2] = { 0 };
	//--------------------Erntering arrays--------------------------
	cout << "--------------------------------" << endl;
	cout << "enter first array : " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << " a[" << i + 1 << "][" << j + 1 << "] : ";
			cin >> a[i][j];
		}
	}
	cout << "--------------------------------" << endl;
	cout << "enter second array : " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << " b[" << i + 1 << "][" << j + 1 << "] : ";
			cin >> b[i][j];
		}
	}
	//-------------Show arrays befor multiplication-----------------
	cout << "--------------------------------" << endl;
	cout << "first array : " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	cout << "second array : " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << b[i][j] << " ";
		cout << endl;
	}
	//--------------------Addition arrays---------------------------
	cout << "--------------------------------" << endl;
	cout << "first aart + second array : " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			add[i][j] = a[i][j] + b[i][j];
			cout << add[i][j] << " ";
		}
		cout << endl;
	}
	cout << "--------------------------------" << endl;
	//------------------subtraction arrays--------------------------
	cout << "first aart + second array : " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			add[i][j] = a[i][j] - b[i][j];
			cout << add[i][j] << " ";
		}
		cout << endl;
	}
	//--------------------------------------------------------------
	return 0;
}
