//#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<cmath>
#include<iomanip>
#define N 200
#define x 60
#define y 34
using namespace std;
//int _tmain(int argc, _TCHAR* argv[])
int main()
{
	int s = 0, o, k = 0, j, i, d, g, b[N];
	int q, c, r = 1, coef = 1, step, coef1 = 1, two = 0, funk = 0;
	int w = 1, first, t = 1;
	char a[x][y];
	setlocale(0, "");
	cout << "������� ������� ���, ����� �� ��������� � ����������" << endl;
	do
	{
		do//���� ����������
		{
			g = _getch();
			b[k] = g;
			printf("%c", b[k]);
			k++;
			if (((g >= 97) && (g <= 122)) || ((g >= 49) && (g <= 57)) || (g == 13) || (g == 43) || (g == 45))
				s++;
		} while (g != 13);
		cout << endl;
		if (s != k)
		{
			cout << "����������� ������ �������. ���������� ������)))" << endl;
			k = 0;
			s = 0;
		}
	} while (s == 0);
	cout << endl;
	k -= 2;
	cout << "������� �������� ����������" << endl;
	i = 0;
	do
	{
		d = b[i];
		i++;
	} while ((d < 97) || (d > 122));//����� ����������
	i--;
	b[i] = 32;//����������
	for (j = 0; j <= k; j++)//��������� �����������
	{
		if ((b[j] >= 97) && (b[j] <= 122))
		{
			printf("%c", b[j]);
			cout << "=";
			cin >> d;
			step = b[j + 1];
			w = d;
			if ((step >= 50) && (step <= 57))
			{
				step = step - 48;
				do
				{
					step--;
					w = w * d;
				} while (step != 1);
				d = w;
			}
			if ((b[j - 1] >= 50) && (b[j - 1] <= 57))
			{
				coef1 = b[j - 1];
				coef1 = coef1 - 48;
				d = coef1 * w;
			}
			if ((b[j - 1] == 43) || (b[j - 2] == 43))//������ ��.����.
				two = two + d;
			else {
				if ((b[j - 1] == 45) || (b[j - 2] == 45))
					two = two - d;
			}
		}
		else
		{
			if ((b[j] >= 49) && (b[j] <= 57) && (b[j + 1] == 13) && (b[j - 1] == 43))
			{
				d = b[j] - 48;
				two = two + d;
			}
			if ((b[j] >= 49) && (b[j] <= 57) && (b[j + 1] == 13) && (b[j - 1] == 45))
			{
				d = b[j] - 48;
				two = two - d;
			}
		}
	}
	q = two;
	if (two > 3)
		two = 3;
	if (two < -3)
		two = -3;
	o = 10;
	if (b[i + 1] == 50)
		o = 5;
	if (b[i + 1] == 51)
		o = 3;
	if (b[i + 1] == 52)
		o = 2;
	if ((b[i + 1] > 52) && (b[i + 1] <= 57))
		o = 1;

	for (k = 0; k < x; k++)//���
	{
		for (j = 0; j < y; j++)
			a[k][j] = ' ';
	}
	for (j = 0; j < y; j++)
		a[x / 2][j] = '*';
	for (k = 0; k < x; k++)
		a[k][y / 2] = '*';
	for (t = -o; t <= o; t++)//���������
	{
		c = t;
		r = b[i + 1];
		if ((b[i - 1] >= 50) && (b[i - 1] <= 57))
			coef = b[i - 1] - 48;
		if ((r >= 50) && (r <= 57))
		{
			r = r - 48;
			do {
				r--;
				c = c * t;
			} while (r != 1);
		}
		if (b[i - 1] == 45)
			c = -c;
		first = coef * c;
		if ((b[i + 1] == 43) || (b[i + 2] == 43) || (b[i + 1] == 45) || (b[i + 2] == 45) || (b[i + 1] == 13) || (b[i + 2] == 13))
			funk = first + two;
		a[x / 2 - funk][t + y / 2] = '+';
	}
	for (k = 0; k < x; k++)//����� �������
	{
		for (j = 0; j < y; j++)
			cout << setw(2) << left << a[k][j];
		cout << endl;
	}
	cout << "������� y:" << q / 3 << endl;
	system("Pause");
	return 0;
}