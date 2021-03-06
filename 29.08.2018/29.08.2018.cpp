// 29.08.2018.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<math.h>

using namespace std;
void alloc(int *&arr, int n)
{
	arr = new int[n];
}

void init(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = i;
	}
}

void print(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void erase(int *&arr)
{
	delete[] arr;
}

void insert_end(int *&arr, int &n, int value)
{
	int *tmp = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[n] = value;
	n += 1;
	delete[]arr;
	arr = tmp;

}

double add(double a, double b)
{
	return a + b;
}

double sub(double a, double b)
{
	return a - b;
}

double mult(double a, double b)
{
	return a * b;
}
double div(double a, double b)
{
	return a / b;
}

double root(double a)
{
	return sqrt(a);
}
double cube(double a)
{
	return pow(a, 3);
}
double sinu(double a)
{
	return sin(a);
}

void oper(double a, double b, double(*f)(double, double))
{
	cout << f(a, b);
}

double x2(double x)
{

	return pow(x, 2);
}
double x_line(double x)
{
	return x * 2 + 4;
}
void func(double a, double b, double(*f)(double))
{
	double dx = (b - a) / 10;

	for (double x = a; x <= b; x+=dx)
	{
		cout << x<<" "<<f(x) << endl;
	}
	
}


int main()
{
	setlocale(LC_ALL, "Rus");

	/*int *a;
	int n = 5;
	alloc(a,n);
	init(a, n);
	print(a, n);
	insert_end(a, n, 10);
	print(a, n);
	erase(a);*/
	double(*f[2])(double) = { x2,x_line };
	double a, b;
	cin >> a >> b;
	func(a, b, x2);
	
	/*double(*f[2])(double) = { x2,x_line };
	int choice;

	while (true)
	{

		cin >> choice;
		if (choice < 0 || choice>3)
		{
			break;
		}

		oper(2, 6, f[choice]);


	}*/
	/*double(*f[4])(double,double) = { add,sub,mult,div };
	int choice;
	while (true)
	{
		cin >> choice;
		if (choice<0 || choice>3)
		{
			break;
		}
		oper(5,6, f[choice]);
	}*/
	/*double(*f[3])(double) = { root,cube,sinu };
	int choice;
	while (true)
	{
		cin >> choice;
		if (choice<0 || choice>2)
		{
			break;
		}
		else
		{
			cout << f[choice](16) << endl;
		}
	}*/

	/*double(*f[4])(double, double) = { add,sub,mult,div };
	int choice;
	while (true)
	{
		cin >> choice;
		if (choice<0||choice>3)
		{
			break;
		}
		else
		{
			cout << f[choice](5, 6) << endl;
		}
	}*/
	/*cout <<  f[0](5,6)<< endl;
	cout << f[1](5, 6) << endl;*/
	system("pause");
	return 0;
}


