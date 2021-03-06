// MatrixClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "MatrixLib.h"

using namespace std;

int main()
{
	int x[3][3], y[3][3];
	int** result = new int *[3];
	for (int i = 0; i < 3; i++)
	{
		result[i] = new int[3];
	}

	cout << "ENTER ELEMENTS OF 1st 3x3 MATRIX\n";
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
			cin >> x[i][j];
	}

	cout << "\nENTER ELEMENTS OF 2nd 3x3 MATRIX\n";
	//2nd Matrix
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
			cin >> y[i][j];
	}

	cout << "\nFirst Matrix\n";
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << x[i][j] << "\t";
		cout << "\n";
	}

	cout << "\nSecond Matrix\n";
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << y[i][j] << "\t";
		cout << "\n";
	}

	result = MatrixLib::Class1::addition(x, y);
	cout << "\nAddition result: \n";
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << result[i][j] << "\t";
		cout << "\n";
	}

	result = MatrixLib::Class1::subtract(x, y);
	cout << "\nSubtraction result: \n";
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << result[i][j] << "\t";
		cout << "\n";
	}

	result = MatrixLib::Class1::multiply(x, y);
	cout << "\nMultiplication result: \n";
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << result[i][j] << "\t";
		cout << "\n";
	}

	result = MatrixLib::Class1::inverse(x);
	cout << "\nTranspose result (of 1st matrix): \n";
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << result[i][j] << "\t";
		cout << "\n";
	}

	result = MatrixLib::Class1::inverse(y);
	cout << "\nTranspose result (of 2nd matrix): \n";
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << result[i][j] << "\t";
		cout << "\n";
	}

    return 0;
}

