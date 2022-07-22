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
	//��������� ������ ���������� �������:
	FillRand(arr, n);

	//������� ������ �� �����:
	Print(arr, n);

	//��������� ������:
	Sort(arr, n);

	//������� ������ �� �����:
	Print(arr, n);

	//����� ��������� �������:
	cout << "����� ��������� ������� 'arr': " << Sum(arr, n) << endl;
	cout << "�������-�������������� ��������� �������:"<<Avg(arr, n) << endl;
	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������:" << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������:" << Avg(i_arr_2, ROWS, COLS) << endl;
	
	cout << "����������� �������� � �������:" << minValueIn(i_arr_2,ROWS,COLS) << endl;
	cout << "������������ �������� � �������:" << maxValueIn(i_arr_2,ROWS,COLS) << endl;
}
