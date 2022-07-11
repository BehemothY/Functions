//Functions
#include<iostream>
using namespace std;

int Add(int a, int b);// Прототип функции
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа:"; cin >> a >> b;
	int c = Add(a, b);// Использование функции
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;

}

int Add(int a, int b)// Реализация функции
{
	//Addition - Сложение
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	//Subtraction - Вычитание
	return a - b;
}
int Mul(int a, int b)
{
	//Mul - Multiplication ( умножение )
	return a * b;
}
double Div(int a, int b)
{
	//Div - Division ( деление )
	return (double) a / b;
}

