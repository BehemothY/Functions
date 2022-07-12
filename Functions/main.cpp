//Functions
#include<iostream>
using namespace std;

int Add(int a, int b);// Прототип функции
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
int Fact(int n);
int Power(int d,int e);
 
void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	int n;//Объявляем переменную n 
	int d, e;
	cout << "Введите два числа:"; cin >> a >> b;
	cout << "Введите число для вычисления факториала:"; cin >> n;
	cout << "Введите основание степени:"; cin >> d;
	cout << "Введите показатель степени:"; cin >> e;
	int c = Add(a, b);// Использование функции
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
	if (n >= 0)
	{
		cout << Fact(n);
	}
	else
	{
		cout << "Error:n<0";
	}
	cout << endl;
	cout << d << "в степени" << e << "=" << Power(d, e) << endl;

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
int Fact(int n)
{
	//Fact - Factorial
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}
int Power(int d, int e)
{
	int N = 1;
	for (int i = 0; i < e; i++)
	{
		N *= d;
	}
	return N;
}






