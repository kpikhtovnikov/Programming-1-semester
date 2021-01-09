/*#include<iostream>
#include <conio.h>
using namespace std;
void _output(int i,int j)
{
	char a[50][50];
for (i = 0; i < 1; i++)
{
	for (j = 0; j < 40; j++)
	{
		cout << a[i][j];
	}
	cout << endl;
}
for (i = 1; i < 39; i++) {
	for (j = 0; j < 40; j++) {
		if (j == 0 || j == 39)
		{
			printf("%c", a[i][j]);
		}
		if (j != 39 || j != 38) {
			cout << " ";
		}
	}
	cout << endl;
}
for (i = 39; i < 40; i++)
{
	for (j = 0; j < 40; j++)
	{
		cout << a[i][j];
	}
}
}
int main()
{
	int  i, j;
	char N, M;
	char ch,a[50][50];
	int k = 0;
	cout << "VVedite Dlina from 1 to 40" << endl;
	while (k == 0)
	{
		N = _getch();
		if ((N >= '1') && (N <= '40'))
		{
			k = 1;
			cout << N << endl;
		}
		else
		{
			system("cls");
			cout << "Error! Vvedite Dlina from 1 to 40" << endl;
		}
	}
	k = 0;
	cout << "VVedite Shirina from 1 to 40" << endl;
	M = _getch();
	while (k == 0)
	{
		M = _getch();
		if ((M >= '1') && (M <= '40'))
		{
			k = 1;
			cout << M << endl;
		}
		else
		{
			system("cls");
			cout << "Error! Vvedite Shirina from 1 to 40" << endl;
		}
	}
	_output(N-'0', M-'0');
	


	system("pause");
	return 0;


}*/
#include <iostream>
#include<stdio.h>
#include<locale>
#include <math.h>
#include <cmath>
#include<conio.h>
#include "windows.h"
using namespace std;
int const a = 18;
int const b = 20;
char mass[a][b];
int x, y, s = 0, s1 = 0, s2 = 1, s3 = 0;
float s_time = 5;
int len = 1, bonus = 0, inter = 250;
int last_get = 80, posh = 11;
struct position
{
	int x;
	int y;
};
position snake[324];
position pos;
void lose()
{
	cout << "You lose..." << endl;
	exit(0);
}
void filling()
{
	pos.x = 1;
	pos.y = 1;
	for (int i = 0; i < 324; i++)
	{
		snake[i].x = 1;
		snake[i].y = 1;
	}
}
void swp()
{
	for (int i = len + 2; i >= 0; i--)
	{
		snake[i + 1].x = snake[i].x;
		snake[i + 1].y = snake[i].y;
	}
	snake[0].x = pos.x;
	snake[0].y = pos.y;

}
int move(int get)
{
	if (get == 72)
	{
		if (mass[pos.y - 1][pos.x] == '*')
		{
			lose();
		}
		if (mass[pos.y - 1][pos.x] == '0')
		{
			len++;
		}
		if (mass[pos.y - 1][pos.x] == '@')
		{
			len++;
			bonus++;
		}
		if (mass[pos.y - 1][pos.x] == ':')
		{
			pos.y = a - 2;
		}
		else
		{
			pos.y--;
		}
		last_get = get;
	}
	if (get == 80)
	{
		if (mass[pos.y + 1][pos.x] == '*')
		{
			lose();
		}
		if (mass[pos.y + 1][pos.x] == '0')
		{
			len++;
		}
		if (mass[pos.y + 1][pos.x] == '@')
		{
			len++;
			bonus++;
		}
		if (mass[pos.y + 1][pos.x] == ':')
		{
			pos.y = 1;
		}
		else
		{
			pos.y++;
		}
		last_get = get;
	}
	if (get == 75)
	{
		if (mass[pos.y][pos.x - 1] == '*')
		{
			lose();
		}
		if (mass[pos.y][pos.x - 1] == '0')
		{
			len++;
		}
		if (mass[pos.y][pos.x - 1] == '@')
		{
			len++;
			bonus++;
		}
		if (mass[pos.y][pos.x - 1] == ':')
		{
			pos.x = b - 2;
		}
		else
		{
			pos.x--;
		}
		last_get = get;
	}
	if (get == 77)
	{
		if (mass[pos.y][pos.x + 1] == '*')
		{
			lose();
		}
		if (mass[pos.y][pos.x + 1] == '0')
		{
			len++;
		}
		if (mass[pos.y][pos.x + 1] == '@')
		{
			len++;
			bonus++;
		}
		if (mass[pos.y][pos.x + 1] == ':')
		{
			pos.x = 1;
		}
		else
		{
			pos.x++;
		}
		last_get = get;
	}
	if (get == 43)
	{
		if (inter <= 1000)
		{
			inter += 25;
		}
		get = last_get;
	}
	if (get == 45)
	{
		if (inter != 0)
		{
			inter -= 25;
		}
		get = last_get;
	}
	if (get == 48)
	{
		inter = 250;
		get = last_get;
	}
	else
	{
		get = last_get;
	}
	swp();
	if (get == 13)
	{
		system("cls");
		for (int i = 0; i <= len + 1; i += 2)
		{
			cout << snake[i].y << " " << snake[i].x << endl;
		}
		cout << "Bonus: " << bonus << endl;
		cout << "Last get: " << last_get << endl;
		Sleep(10000);
		get = last_get;
	}
	return get;
}
void out()
{
	s1 = 0;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (mass[i][j] == '0' || (mass[i][j] == '@'&&s_time != 0))
			{
				s1 = 1;
			}
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (mass[i][j] != '0'&&mass[i][j] != '@' || s_time == 0)
			{
				mass[i][j] = ' ';
			}
		}
	}

	for (int i = 0; i < len; i++)
	{
		mass[snake[i].y][snake[i].x] = '*';
	}
	for (int i = 0; i < a; i++)
	{
		for (int g = 0; g < b; g++)
		{
			if ((g == 0 || g == (b - 1) || i == 0 || i == (a - 1)) && (mass[i][g] != '*'))
			{
				mass[i][g] = ':';
			}
		}
	}


	if (s1 != 1)
	{
		s_time = 5;
		do {
			y = rand() % (a - 1) + 1;
			x = rand() % (b - 1) + 1;
			if (mass[y][x] == ' ' && (s2%posh) != 0)
			{
				mass[y][x] = '0';
				s = 1;
				s3 = 0;
				s2++;
			}
			if (mass[y][x] == ' ' && (s2%posh) == 0)
			{
				mass[y][x] = '@';
				s = 1;
				s3 = 1;
				s2++;
			}
		} while (s == 0);
		s = 0;
	}

}
void print()
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << mass[i][j];
		}
		if (i == 0)
		{
			cout << "\tYour Points:";
		}
		if (i == 1)
		{
			cout << "\t     " << (len - 1) * 10 + bonus * 100 - bonus * 10;
		}
		if (i == 3 && s3 == 1)
		{
			cout << "\tBonus time:";
		}
		if (i == 4 && s3 == 1)
		{
			cout << "\t";
			for (int i = s_time; i >= 0; i--)
			{
				cout << "**";
			}
			s_time -= 0.25;
		}
		cout << endl;
	}
}
void main()
{
	srand(time(NULL));
	int get = 80;
	filling();
	while (1)
	{
		out();
		print();
		if (_kbhit() == true)
		{
			get = _getch();
		}
		get = move(get);
		Sleep(inter);
		system("cls");
	}

}