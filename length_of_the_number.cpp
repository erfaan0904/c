#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int n;       //number
	int ln = 0;  //length of number
	cout << "-------------------" << endl;
	cout << "enter a number : ";
	cin >> n;
	cout << "-------------------" << endl;
	while (n != 0)
	{
		n = n / 10;
		ln++;
	}
	cout << "length of number is : " << ln << endl;
	cout << "-------------------" << endl;
	return 0;
}

