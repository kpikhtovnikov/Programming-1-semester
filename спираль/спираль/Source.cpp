#include<iostream>
#include<conio.h>
using namespace std;
int _input()
{
	setlocale(0, "");
	char L;
	int F = 0;
	int n = 0;
	cout << "������� ������ �������� �� 1 �� 8   " << endl;
	L = _getch();
	while (F == 0)
	{
		L = _getch();
		if (L >= '1' && L <= '8')
		{
			F = 1;
			n = L-'0';
			cout << L << endl;
		}
		else
		{
			system("cls");
			cout << "�����������! ������� ������ �������� �� 1 �� 8" << endl;
		}
	}
	return n;
}
int r1()
{
	const int N = 8;
	const int M = 8;
	int a[N][M];
	int i, j;
	setlocale(0, "");
	int k = 0, x = 1;
	int n, m;
	n = _input();
	m = _input();
		while (x <= n * m)
		{
			for ( i = k; (i < m - k) && (x <= n * m); i++)
			{
				a[k][i] =x;
				x++;
			}
			for ( i = k + 1; (i < n - k) && (x <= n * m); i++)
			{
				a[i][m - 1 - k] = x;
				x++;
			}
			for ( i = m - 2 - k; (i >= k) && (x <= n * m); i--)
			{
				a[n - 1 - k][i] = x;
				x++;
			}
			for ( i = n - 2 - k; (i > k) && (x <= n * m); i--)
			{
				a[i][k] = x;
				x++;
			}
			k++;
		}
		for ( i = 0; i < n; i++)
		{
			for ( j = 0; j < m; j++)
			{
				printf("%3d", a[i][j]);
			}
			cout << "\n";
		}
	return 0;
}
int r2()
{
	const int N = 8;
	const int M = 8;
	int a[N][M];
	int i, j;
	setlocale(0, "");
	int k = 0, x = 1;
	int n, m;
	n = _input();
	m = _input();
		x = n * m;
		while (x >= 1)
		{
			for (i = k; (i < m - k) && (x>=1); i++)
			{
				a[k][i] = x;
				x--;
			}
			for (i = k + 1; (i < n - k) && (x>=1); i++)
			{
				a[i][m - 1 - k] = x;
				x--;
			}
			for (i = m - 2 - k; (i >= k) && (x>=1); i--)
			{
				a[n - 1 - k][i] = x;
				x--;
			}
			for (i = n - 2 - k; (i > k) && (x>=1); i--)
			{
				a[i][k] = x;
				x--;
			}
			k++;
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				printf("%3d", a[i][j]);
			}
			cout << "\n";
		}
	return 0;
}
int r3()
{
	const int N = 8;
	const int M = 8;
	int a[N][M];
	int i, j;
	setlocale(0, "");
	int k = 0, x = 1;
	char L1, L2;
	int F1 = 0, F2 = 0;
	int n, m;
	n = _input();
	m = _input();
		while (x <= n * m)
		{
			for (i = m-1-k; (i >= k) && (x <= n * m); i--)
			{
				a[k][i] = x;
				x++;
			}
			for (i = k + 1; (i <= (n - k-1)) && (x <= n * m); i++)
			{
				a[i][k] = x;
				x++;
			}
			for (i = k+1; (i <=m-1-k) && (x <= n * m); i++)
			{
				a[n - 1 - k][i] = x;
				x++;
			}
			for (i = n - 2 - k; (i > k) && (x <= n * m); i--)
			{
				a[i][m-1-k] = x;
				x++;
			}
			k++;
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				printf("%3d", a[i][j]);
			}
			cout << "\n";
		}
	return 0;
}
int r4()
{
	const int N = 8;
	const int M = 8;
	int a[N][M];
	int i, j;
	setlocale(0, "");
	int k = 0, x = 1;
	char L1, L2;
	int F1 = 0, F2 = 0;
	int n, m;
	n = _input();
	m = _input();
		x = n * m;
		while (x >=1)
		{
			for (i = m-1-k; (i >= k) && (x >=1); i--)
			{
				a[k][i] = x;
				x--;
			}
			for (i = k + 1; (i <= n - k-1) && (x >=1); i++)
			{
				a[i][k] = x;
				x--;
			}
			for (i = k+1; (i <=m-1-k) && (x >=1); i++)
			{
				a[n - 1 - k][i] = x;
				x--;
			}
			for (i = n - 2 - k; (i > k) && (x >=1); i--)
			{
				a[i][m-1-k] = x;
				x--;
			}
			k++;
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				printf("%3d", a[i][j]);
			}
			cout << "\n";
		}
	return 0;
}
int main()
{
setlocale(0, "");
int ex = 0;
int key = 1;
setlocale(0, "");
int ch;
ch = _getch();
system("cls");
do
{
	printf("1");
	if (key == 1)
		printf("<--");
	printf("\n2");
	if (key == 2)
		printf("<--");
	printf("\n3");
	if (key == 3)
		printf("<--");
	printf("\n4");
	if (key == 4)
		printf("<--");
	ch = _getch();
	system("cls");
	switch (ch)
	{
	case '1':
		key = 1;
		ex = 1;
		break;
	case '2':
		key = 2;
		ex = 2;
		break;
	case '3':
		key = 3;
		ex = 3;
		break;
	case'4':
		key = 4;
		ex = 4;
		break;
	case 72:
		if (key > 1)
		key--;
		break;
	case 80:
		if (key < 4)
		key++;
		break;
	case 13:
		ex = 23;
		break;
	}
} while (ex != 23);
switch (key)
{
case 1:
	system("cls");
	r1();
	break;
case 2:
	system("cls");
	r2();
	break;
case 3:
	system("cls");
	r3();
	break;
case 4:
	system("cls");
	r4();
	break;
}
system("pause");
return 0;
}
	