#include <iostream> 
#include <cstring> 
#include <stdlib.h> 
#include <stdio.h> 
#include <math.h> 
#include <locale.h>
#include <conio.h>	
#include<iomanip>
#include <fstream>
using namespace std;
int numbersystem()
{
	int k = 0,i=0;
	char a[10] ="";
	while (k == 0)
	{
		cin >> a;
		if ((a[0]>='2' && a[0]<='9' && strlen(a)==1)|| (a[0]>='1' &&a[0]<='2' && a[1]>='0'&&a[1]<='9' && strlen(a)==2)||(a[0]=='3'&&a[1]>='0'&&a[1]<='6'&&strlen(a)==2))
		{
			k = 1;
			break;
		}
		else
		{
			cin.ignore(cin.rdbuf()->in_avail());
			system("cls");
			cout << "������!������� ��������� ������� ��������� �� 2 �� 36" << endl;
		}
	}
	k = 0;
	while (a[i] != '\0')
	{
		k =k*10+ (a[i] - '0') ;
		i++;
	}
	return k;
}
int _Int(char ch)
{
	int a = 0;
	switch (ch)
	{
	case '0': a = 0; break; 
	case '1': a = 1; break;
	case '2':a = 2;  break;
	case '3': a = 3; break;
	case '4': a = 4; break;
	case '5': a = 5; break;
	case '6': a = 6; break;
	case '7': a = 7; break;
	case '8': a = 8; break;
	case '9': a = 9; break;
	case 'A': a = 10; break;
	case 'B': a = 11; break;
	case 'C': a = 12; break;
	case 'D': a = 13; break;
	case 'E': a = 14; break;
	case 'F': a = 15; break;
	case 'G': a = 16; break;
	case 'H': a = 17; break;
	case 'I': a = 18; break;
	case 'J': a = 19; break;
	case 'K': a = 20; break;
	case 'L': a = 21; break;
	case 'M': a = 22; break;
	case 'N': a = 23; break;
	case 'O': a = 24; break;
	case 'P': a = 25; break;
	case 'Q': a = 26; break;
	case 'R': a = 27; break;
	case 'S': a = 28; break;
	case 'T': a = 29; break;
	case 'U': a = 30; break;
	case 'V': a = 31; break;
	case 'W': a = 32; break;
	case 'X': a = 33; break;
	case 'Y': a = 34; break;
	case 'Z': a = 35; break;
	}
	return a;
}
char _Char(int a)
{
	char ch;
	switch (a)
	{
	case 0: ch = '0'; break;
	case 1: ch = '1'; break;
	case 2: ch = '2'; break;
	case 3: ch = '3'; break;
	case 4: ch = '4'; break;
	case 5: ch = '5'; break;
	case 6: ch = '6'; break;
	case 7: ch = '7'; break;
	case 8: ch = '8'; break;
	case 9: ch = '9'; break;
	case 10: ch = 'A'; break;
	case 11: ch = 'B'; break;
	case 12: ch = 'C'; break;
	case 13: ch = 'D'; break;
	case 14: ch = 'E'; break;
	case 15: ch = 'F'; break;
	case 16: ch = 'G'; break;
	case 17: ch = 'H'; break;
	case 18: ch = 'I'; break;
	case 19: ch = 'J'; break;
	case 20: ch = 'K'; break;
	case 21: ch = 'L'; break;
	case 22: ch = 'M'; break;
	case 23: ch = 'N'; break;
	case 24: ch = 'O'; break;
	case 25: ch = 'P'; break;
	case 26: ch = 'Q'; break;
	case 27: ch = 'R'; break;
	case 28: ch = 'S'; break;
	case 29: ch = 'T'; break;
	case 30: ch = 'U'; break;
	case 31: ch = 'V'; break;
	case 32: ch = 'W'; break;
	case 33: ch = 'X'; break;
	case 34: ch = 'Y'; break;
	case 35: ch = 'Z'; break;
	}
	return ch;
}
long long int perevode10(char*t,int a)
{
	int c = 0,j=0;
	long long int k = 0,summa=0;
	j = strlen(t) - 1;
	for (int i = 0; i < strlen(t); i++)
	{
			k = pow(a, i)*_Int(t[j]);
			summa = summa + k;
			j--;
	}
	return summa;
}
char*obratnoe(char*C)
{
	int i = 0;
	int j = strlen(C);
	int k = 0;
	char *f=new char[150];
	char s = '0';
	int a = 0;
	while (j>0)
	{
		if (_Int(C[j - 1]) == 0 && a == 0)
		{
			j--;
		}
		else
		{
			f[i] = C[j - 1];
			i++;
			a = 1;
			j--;
		}
	}
	if (_Int(f[i]) == 0 && i == 0)
	{
		f[i] = s;
		i++;
		f[i] = '\0';
	}
	else
		f[i] = '\0';
	return f;
}
char*perevode_no_10(int t, int a)
{
	char*f=new char[150];
	int c = 0;
	int i = 0;
	while (t != 0)
	{
		c = t % a;
		f[i] = _Char(c);
		t = t / a;
		i++;
	}
	f[i] = '\0';
	return f;
}
char* summa( char *g,  char *t, int a)
{
	int const N = 150;
	int pervoe,vtoroe,k=0;
	int s = 0;
	char F[N] = "0";
	char B[N] = "";
	char A[N] = "";
	char* C = new char[N];
	if (strlen(g) > strlen(t))
	{
		while (strlen(t)+strlen(B) < strlen(g))
		{
			strcat(B, F);
		}
		strcat(B, t);
		strcat(A, g);
	}
	else
		if (strlen(g) < strlen(t))
		{
			while (strlen(A)+strlen(g) < strlen(t))
			{
				strcat(A, F);
			}
			strcat(A, g);
			strcat(B, t);
		}
		else
		{
			if (strlen(g) == strlen(t))
			{
				strcat(A, g);
				strcat(B, t);
			}
		}
			for (int i = strlen(A); i > 0; i--)
		{
			char k1 = A[i-1];
			char k2 = B[i-1];
			if (k == 1)
			{
				if (_Int(k1) != a-1)
				{
					int M = _Int(k1)+1;
					pervoe = M;
				}
				else
					pervoe = a;
			}
			else
				pervoe = _Int(k1);
			vtoroe = _Int(k2);
			if (pervoe + vtoroe >= a)
			{
				pervoe = (pervoe + vtoroe) % a;
				k = 1;
			}
			else
			{
				pervoe = (pervoe + vtoroe) % a;
				k = 0;
			}
			C[s] = _Char(pervoe);
			s++;
		}
			if (k == 1)
			{
				C[s] = _Char(1);
				C[s + 1] = '\0';
			}
		else
			C[s ] = '\0';
		char *e = obratnoe(C);
		return e;	
}
char* raznost(char*g,char*t,int a)
{
	int const N = 150;
	int pervoe, vtoroe, k = 0;
	char C[N] = "";
	int s = 0,c=0;
	char F[N] = "0";
	char B[N] = "";
	char A[N] = "";
	if (strlen(g) > strlen(t))
	{
		while (strlen(t) + strlen(B) < strlen(g))
		{
			strcat(B, F);
		}
		strcat(B, t);
		strcat(A, g);
	}
	else
		if (strlen(g) < strlen(t))
		{
			while (strlen(A) + strlen(g) < strlen(t))
			{
				strcat(A, F);
			}
			strcat(A, g);
			strcat(B, t);
		}
		else
		{
			if (strlen(g) == strlen(t))
			{
				strcat(A, g);
				strcat(B, t);
			}
		}
	for (int i = strlen(A); i > 0; i--)
	{
		char k1 = A[i - 1];
		char k2 = B[i - 1];
		if ((k == 1)&&(strcmp(A,B)>0))
		{
			if (_Int(k1) == 0)
			{
				pervoe = a-1;
				c = 1;
			}
			else
			{
				pervoe = _Int(k1);
				int r = pervoe - 1;
				pervoe = r;
			}
			vtoroe = _Int(k2);
		}
		else
		{
			if (strcmp(A, B) > 0)
			{
				pervoe = _Int(k1);
				vtoroe = _Int(k2);
			}
		}
		
		if ((k == 1) && (strcmp(A, B) < 0))
		{
			pervoe = _Int(k2 - 1);
			vtoroe = _Int(k1);
		}
		else
		{
			if (strcmp(A, B) < 0)
			{
				pervoe = _Int(k2);
				vtoroe = _Int(k1);
			}
		}
		if (strcmp(A, B) ==0)
		{
			pervoe = _Int(k1);
			vtoroe = _Int(k2);
		}
		if (pervoe - vtoroe < 0)
		{
			pervoe = (pervoe +a- vtoroe) ;
			k = 1;
		}
		else
			if (k == 1 && c == 1)
			{
				pervoe = (pervoe - vtoroe);
				c = 0;
			}
			else
			{
				pervoe = (pervoe - vtoroe);
				k = 0;
			}
		C[s] = _Char(pervoe);
		s++;
	}
	if (k == 1)
	{
		C[s] = _Char(1);
		C[s + 1] = '\0';
	}
	else
		C[s] = '\0';
	char*e = obratnoe(C);
	return e;
}
char* umnogenie(char*g, char*t, int a)
{
	int const N = 150;
	int i = 0, k = 0;
	char f[N] = "";
	char *q = new char[N];
	char *C = new char[150];
	int h = 0, j = 0;
	if (_Int(g[i]) == 0 || _Int(t[i]) == 0)
	{
		C[i] = '0';
		C[i + 1] = '\0';
		return C;
	}
	else
		if (strlen(g) == 1 && _Int(g[i]) == 1 && t != 0)
			return t;
		else
			if (strlen(t) == 1 && _Int(t[i]) == 1 && g != 0)
				return g;
	if (strcmp(g, t) > 0)
	{
		j = perevode10(t, a);
		strcat(f, g);
		q = g;
	}
	else
	{
		j = perevode10(g, a);
		strcat(f, t);
		q = t;
	}
				i = 0;
				while (i < j - 1)
				{
					C = summa(f, q, a);
					i++;
					strcpy(f, C);
				}
				int O = strlen(C);
				C[O+1] = '\0';
	return C;
}
char* delenie(char*g, char*t, int a)
{
	int const N = 150;
	int i = 0, k = 0,h=0,r=0;
	char f[N] = "";
	char *C = 0;
	char*z =0;
	char*q = 0;
	char*p = 0;
	char*v =new char[4] { "not" };
	if (_Int(g[i]) == 0 && _Int(t[i]) == 0)
	{
		return v;
	}
	if (_Int(g[i]) == 0 || _Int(t[i]) == 0)
	{
		return 0;
	}
	if (strlen(g) > strlen(t))
	{
		int j = perevode10(t, a);
		strcat(f, g);
		h = strlen(t);
		q = t;
	}
	else
		if (strlen(g) < strlen(t))
		{
			int j = perevode10(g, a);
			strcat(f, t);
			h = strlen(g);
			q = g;
		}
		else
			if (strlen(g) == strlen(t))
			{
				if (strcmp(g, t) > 0)
				{
					int j = perevode10(t, a);
					strcat(f, g);
					h = strlen(t);
					q = t;
				}
				else
				{
					int j = perevode10(g, a);
					strcat(f, t);
					h = strlen(g);
					q = g;
				}
			}
	while (i < h)
	{
		k = k * 10 + _Int(q[i]);
		i++;
	}
	r = 0;
	while (_Int(*f) != 0)
	{
		C = raznost(f, q, a);
		r++;
		strcpy(f, C);
		if ((strcmp(f, q) < 0 && strlen(f) <= strlen(q))||(strlen(f)<strlen(q)))
			*f = 0;
	}
	p = perevode_no_10(r, a);
	z = obratnoe(p);
	return z;
}
int main()
{
	setlocale(0, "");
	while (true)
	{
		int const N = 150;
		char A[N] = "", B[N] = "", C[N] = "";
		int k = 0;
		char ch;
		int j1 = 0, j2 = 0;
		int i, c = 0;
		cout << "������� ��������� ������� ��������� �� 2 �� 36" << endl;
		int a = numbersystem();
		switch (a)
		{
		case 2: ch = '1'; break;
		case 3: ch = '2'; break;
		case 4: ch = '3'; break;
		case 5: ch = '4'; break;
		case 6: ch = '5'; break;
		case 7: ch = '6'; break;
		case 8: ch = '7'; break;
		case 9: ch = '8'; break;
		case 10: ch = '9'; break;
		case 11: ch = 'A'; break;
		case 12: ch = 'B'; break;
		case 13: ch = 'C'; break;
		case 14: ch = 'D'; break;
		case 15: ch = 'E'; break;
		case 16: ch = 'F'; break;
		case 17: ch = 'G'; break;
		case 18: ch = 'H'; break;
		case 19: ch = 'I'; break;
		case 20: ch = 'J'; break;
		case 21: ch = 'K'; break;
		case 22: ch = 'L'; break;
		case 23: ch = 'M'; break;
		case 24: ch = 'N'; break;
		case 25: ch = 'O'; break;
		case 26: ch = 'P'; break;
		case 27: ch = 'Q'; break;
		case 28: ch = 'R'; break;
		case 29: ch = 'S'; break;
		case 30: ch = 'T'; break;
		case 31: ch = 'U'; break;
		case 32: ch = 'V'; break;
		case 33: ch = 'W'; break;
		case 34: ch = 'X'; break;
		case 35: ch = 'Y'; break;
		case 36: ch = 'Z'; break;
		default:
		{
			cout << "������!";
		}
		}
		cout << "������� ������ �����" << endl;
		k = 0;
		while (k == 0)
		{
			scanf_s("%s", A, N);
			j1 = strlen(A);
			for (i = 0; i < j1; i++)
			{

				if ((A[i] <= ch) && (j1 < N) && ((A[i] >= 'A'&&A[i] <= 'Z') || (A[i] >= '0'&&A[i] <= '9')))
				{
					c++;
					if (c == j1)
					{
						k = 1;
						break;
					}
				}
				else
				{
					system("cls");
					cout << "������!" << endl;
					break;
				}
			}
		}
		c = 0;
		k = 0;
		switch (a)
		{
		case 2: ch = '1'; break;
		case 3: ch = '2'; break;
		case 4: ch = '3'; break;
		case 5: ch = '4'; break;
		case 6: ch = '5'; break;
		case 7: ch = '6'; break;
		case 8: ch = '7'; break;
		case 9: ch = '8'; break;
		case 10: ch = '9'; break;
		case 11: ch = 'A'; break;
		case 12: ch = 'B'; break;
		case 13: ch = 'C'; break;
		case 14: ch = 'D'; break;
		case 15: ch = 'E'; break;
		case 16: ch = 'F'; break;
		case 17: ch = 'G'; break;
		case 18: ch = 'H'; break;
		case 19: ch = 'I'; break;
		case 20: ch = 'J'; break;
		case 21: ch = 'K'; break;
		case 22: ch = 'L'; break;
		case 23: ch = 'M'; break;
		case 24: ch = 'N'; break;
		case 25: ch = 'O'; break;
		case 26: ch = 'P'; break;
		case 27: ch = 'Q'; break;
		case 28: ch = 'R'; break;
		case 29: ch = 'S'; break;
		case 30: ch = 'T'; break;
		case 31: ch = 'U'; break;
		case 32: ch = 'V'; break;
		case 33: ch = 'W'; break;
		case 34: ch = 'X'; break;
		case 35: ch = 'Y'; break;
		case 36: ch = 'Z'; break;
		default:
			cout << "������!";
		}
		cout << endl;
		cout << "������� ������ �����" << endl;
		while (k == 0)
		{
			scanf_s("%s", B, N);
			j2 = strlen(B);
			for (i = 0; i < j2; i++)
			{
				if ((B[i] <= int(ch)) && (j2 < N) && ((B[i] >= '0'&&B[i] <= '9') || (B[i] >= 'A'&&B[i] <= 'Z')))
				{
					c++;
					if (c == j2)
					{
						k = 1;
						break;
					}
				}
				else
				{
					system("cls");
					cout << "������" << endl;
					break;
				}
			}
		}
		int ex = 0;
		char x = '0';
		cout << "�������� �������������� ��������,�������������� ����� ����� ������� �� ����������" << endl;
		x = _getch();
		do
		{
			printf_s("+");
			if (k == 1)
				printf_s("<--");
			printf_s("\n-");
			if (k == 2)
				printf_s("<--");
			printf_s("\n*");
			if (k == 3)
				printf_s("<--");
			printf_s("\n/");
			if (k == 4)
				printf_s("<--");
			x = _getch();
			system("cls");
			switch (x)
			{
			case '1': k = 1; ex = 1; break;
			case '2': k = 2; ex = 1; break;
			case '3': k = 3; ex = 1; break;
			case '4': k = 4; ex = 1; break;
			case 72:
				if (k > 1)
					k--;
				break;
			case 80:
				if (k < 4)
					k++;
				break;
			case 13:
				ex = 23;
				break;
			}
		} while (ex != 23);
		switch (k)
		{
		case 1:
			cout << "�� �����:" << endl;
			cout << setw(20) << left << A << "��� ����� � 10 ��:" << setw(10) << right << perevode10(A, a) << endl;
			cout << setw(20) << left << B << "��� ����� � 10 ��:" << setw(10) << right << perevode10(B, a) << endl << endl;
			cout << setw(10) << left << "�����:    " << endl << endl;
			cout << setw(20) << left << summa(A, B, a);
			cout << setw(18) << right << "��� ����� � 10 ��:" << setw(10) << right << perevode10(summa(A, B, a), a);
			break;
		case 2:
			cout << "�� �����:" << endl;
			cout << setw(20) << left << A << "��� ����� � 10 ��:" << setw(10) << right << perevode10(A, a) << endl;
			cout << setw(20) << left << B << "��� ����� � 10 ��:" << setw(10) << right << perevode10(B, a) << endl << endl;
			cout << setw(10) << left << "�����:    " << endl << endl;
			cout << setw(20) << left << raznost(A, B, a);
			cout << setw(18) << right << "��� ����� � 10 ��:" << setw(10) << right << perevode10(raznost(A, B, a), a);
			break;
		case 3:
			cout << "�� �����:" << endl;
			cout << setw(20) << left << A << "��� ����� � 10 ��:" << setw(10) << right << perevode10(A, a) << endl;
			cout << setw(20) << left << B << "��� ����� � 10 ��:" << setw(10) << right << perevode10(B, a) << endl << endl;
			cout << setw(10) << left << "�����:    " << endl << endl;
			cout << setw(20) << left << umnogenie(A, B, a);
			cout << setw(18) << right << "��� ����� � 10 ��:" << setw(10) << right << perevode10(umnogenie(A, B, a), a);
			break;
		case 4:
			cout << "�� �����:" << endl;
			cout << setw(20) << left << A << "��� ����� � 10 ��:" << setw(10) << right << perevode10(A, a) << endl;
			cout << setw(20) << left << B << "��� ����� � 10 ��:" << setw(10) << right << perevode10(B, a) << endl << endl;
			cout << setw(10) << left << "�����:    " << endl << endl;
			cout << setw(20) << left << delenie(A, B, a);
			cout << setw(18) << right << "��� ����� � 10 ��:" << setw(10) << right << perevode10(delenie(A, B, a), a);
			break;
		}
		system("pause");
		system("cls");
	}
	return 0;
}