#include"stdafx.h"

#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int sum=0;
	//Заполняем массив случайными числами:
	FillRand(arr, n);

	//Выводим массив на экран:
	Print(arr, n);

	//Сортируем массив:
	Sort(arr, n);

	//Выводим массив на экран:
	Print(arr, n);

	//Сумма элементов массива:
	cout << "Сумма элементов массива 'arr': " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива:"<<Avg(arr, n) << endl;
	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива:" << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива:" << Avg(i_arr_2, ROWS, COLS) << endl;
	
	cout << "Минимальное значение в массиве:" << minValueIn(i_arr_2,ROWS,COLS) << endl;
	cout << "Максимальное значение в массиве:" << maxValueIn(i_arr_2,ROWS,COLS) << endl;
}
