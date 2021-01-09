#include <iostream>
#include <windows.h> 
#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <ctime>
using namespace std; 
int _input()
{
	int a;
	int k = 0;
	while (k == 0)
	{
		a = _getch();
		if ((a >= '3') && (a <= '5'))
		{
			k = 1;
			cout << (char)a << endl;
		}
		else 
		{
			system("cls");
			cout << "Bad" << endl;
		}
	}
	return a;
}
void color(int x)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0 < 4) | x));
}
void Pole(int a,int b,int d[15][15])
{
	int i, j;
	int k = 0;
	i = 0;
	j = 0;
	while (i <= (a - '0') * 2)
	{
		while (j <= (b - '0') * 2)
		{
				if (i == 0)
				{
					if (j == 0)
					{
						color(4);
						printf("%c", d[0][0] = (char)201);
					}
					if ((j != 0)&&(j != (b - '0') * 2))
					{
						if (j % 2 != 0)
						{
							color(4);
							printf("%c", d[i][j] = (char)205);
						}
						else
						{
							color(4);
							printf("%c", d[i][j] = (char)203);
						}
						}
					if (j == (b - '0') * 2)
					{
						color(4);
						printf("%c", d[0][(b - '0') * 2] = (char)187);
					}
						j++;
				}
				if (i % 2 == 1)
				{
					if (i != (a - '0') * 2)
					{
						if (j == 0)
						{
							color(4);
							printf("%c", d[i][j] = (char)186);
						}
						else
							if (j != 0 && j % 2 == 0)
							{
								color(4);
								printf("%c", d[i][j] = (char)186);
							}
							else
								if (j != 0 && j % 2 == 1)
								{
									color(3);
									if (d[i][j] != 'X' && d[i][j] != '0')
									{
										d[i][j] = -1; 
										printf("%c", d[i][j]);
									}
									else
										printf("%c", d[i][j]);
									}
						j ++;
					}
					else
					{
						if (j == 0)
						{
							color(4);
							printf("%c", d[i][j] = (char)200);
						}
						if (j == (b - '0') * 2)
						{
							color(4);
							printf("%c", d[i][j] = (char)188);
						}
							if ((j % 2 != 0)&&(j != 0)&&(j != (b - '0') * 2))
						{
							color(4);
							printf("%c", d[i][j] = (char)205);
						}
						else
							if ((j != 0)&&(j != (b - '0') * 2))
							{
								color(4);
								printf("%c", d[i][j] = (char)202);
							}
						j++;
					}
				}
				if (i % 2 == 0 && i!=0)
				{
					if (i != (a - '0') * 2)
					{
						if (j == 0)
						{
							color(4);
							printf("%c", d[i][j] = (char)204);
						}
						if (j == (b - '0') * 2)
						{
							color(4);
							printf("%c", d[i][j] = (char)185);
						}
							if ((j % 2 != 0)&&(j != 0)&&(j != (b - '0') * 2))
						{
							color(4);
							printf("%c", d[i][j] = (char)205);
						}
						else
							if ((j != 0)&&(j != (b - '0') * 2))
							{
								color(4);
								printf("%c", d[i][j] = (char)206);
							}
						j++;
					}
					else
					{
						if (j == 0)
						{
							color(4);
							printf("%c", d[i][j] = (char)200);
						}
						if (j == (b - '0') * 2)
						{
							color(4);
							printf("%c", d[i][j] = (char)188);
						}
							if ((j % 2 != 0)&&(j != 0)&&(j != (b - '0') * 2))
						{
							color(4);
							printf("%c", d[i][j] = (char)205);
						}
						else
							if ((j != 0)&&(j != (b - '0') * 2))
							{
								color(4);
								printf("%c", d[i][j] = (char)202);
							}
						j++;
					}
				}
		}
		j = 0;
		i++;
		printf("%c", '\n');
	}
}
int Win(int a,int b,int d[15][15])
{
	int nichya=0;
	for (int i = 1; i < (a-'0')*2+1; i += 2)
	{
		for (int j = 1; j < (b-'0')*2+1; j += 2)
		{
			if ((d[i][j] == 'X') && (d[i][j + 2] == 'X') && (d[i][j + 4] == 'X'))
			{
				return 1;
			}
		}
	}
	for (int i = 1; i < (a-'0')*2+1 - 5; i += 2)
	{
		for (int j = 1; j < (b-'0')*2+1 - 5; j += 2)
		{
			if ((d[i][j] == 'X') && (d[i + 2][j + 2] == 'X') && (d[i + 4][j + 4] == 'X'))
			{
				return 1;
			}
		}
	}

	for (int i = 1; i < (a-'0')*2+1 - 5; i += 2)
	{
		for (int j = 5; j < (b-'0')*2+1 - 1; j += 2)
		{
			if ((d[i][j] == 'X') && (d[i + 2][j - 2] == 'X') && (d[i + 4][j - 4] == 'X'))
			{
				return 1;
			}
		}
	}

	for (int i = 1; i < (a-'0')*2+1 - 5; i += 2)
	{
		for (int j = 1; j < (b-'0')*2+1 - 1; j += 2)
		{
			if ((d[i][j] == 'X') && (d[i + 2][j] == 'X') && (d[i + 4][j] == 'X'))
			{
				return 1;
			}
		}
	}

	for (int i = 1; i < (a-'0')*2+1; i += 2)
	{
		for (int j = 1; j < (b-'0')*2+1; j += 2)
		{
			if ((d[i][j] == '0') && (d[i][j + 2] == '0') && (d[i][j + 4] == '0'))
			{
				return 0;
			}
		}
	}

	for (int i = 1; i < (a-'0')*2+1 - 5; i += 2)
	{
		for (int j = 1; j < (b-'0')*2+1 - 5; j += 2)
		{
			if ((d[i][j] == '0') && (d[i + 2][j + 2] == '0') && (d[i + 4][j + 4] == '0'))
			{
				return 0;
			}
		}
	}

	for (int i = 1; i < (a-'0')*2+1 - 5; i += 2)
	{
		for (int j = 5; j < (b-'0')*2+1 - 1; j += 2)
		{
			if ((d[i][j] == '0') && (d[i + 2][j - 2] == '0') && (d[i + 4][j - 4] == '0'))
			{
				return 0;
			}
		}
	}

	for (int i = 1; i < (a-'0')*2+1 - 5; i += 2)
	{
		for (int j = 1; j < (b-'0')*2+1 - 1; j += 2)
		{
			if ((d[i][j] == '0') && (d[i + 2][j] == '0') && (d[i + 4][j] == '0'))
			{
				return 0;
			}
		}
	}
}
int Gameover(int a,int b,int d[15][15])
{
	int count1 = 0,z=0;
	for (int x = 0; x <= (a - '0') * 2; x++)
	{
		for (int y = 0; y <= (b - '0') * 2; y++)
		{
			if ((d[x][y] == 'X') || (d[x][y] == '0'))
				count1++;
		}
	}
	if ((count1 == (a - '0')*(b - '0')) && (z != 32)) {
		z = 32;
		system("cls");
		Pole(a, b, d);
		cout << "=========";
	}
	return z;
}
int main()
{
	int a, b,d[15][15];
	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 15; j++)
			d[i][j] = -1;
	int i, j;
	int k = 0;
	cout << "Dlina" << endl;
	a = _input();
	cout << "Shirina" << endl;
	b = _getch();
	b = _input();
	for (i = 0; i <= (a - '0') * 2; i++)
		for (j = 0; j <= (b - '0') * 2; j++)
			d[i][j] = 0;
	Pole(a, b,d);
	int ch = 0;
	int ex = 0;
	i = 1;
	j = 1;
	int count1 = 0;
	do 
	{
		system("cls");
		int z = 0;
		Pole(a, b, d);
	do
	{
		ch = _getch();
		if (ch == 224)
		{
			int c = _getch();
			if (c == 72)
			{
				i = i - 2;
				if (i < 1) i = 1;
				if ((d[i][j] != 'X') && (d[i][j] != '0')) 
				{
					d[i][j] = 'X';
					system("cls");
					Pole(a, b, d);
					d[i][j] = -1;
				}
				else
				{
					system("cls");
					Pole(a, b, d);
				}
			}
			if (c == 80)
			{
				i = i + 2;
				if (i > (a - '0') * 2 - 1)
					i = (a - '0') * 2 - 1;
				if ((d[i][j] != 'X') && (d[i][j] != '0')) {
					d[i][j] = 'X';
					system("cls");
					Pole(a, b, d);
					d[i][j] = -1;
				}
				else
				{
					system("cls");
					Pole(a, b, d);
				}
			}
			if (c == 77)
			{
				j = j + 2;
				if (j > (b - '0') * 2 - 1)
					j = (b - '0') * 2 - 1;
				if ((d[i][j] != 'X') && (d[i][j] != '0')) {
					d[i][j] = 'X';
					system("cls");
					Pole(a, b, d);
					d[i][j] = -1;
				}
				else
				{
					system("cls");
					Pole(a, b, d);
				}
			}
			if (c == 75)
			{
				j = j - 2;
				if (j < 1)
					j = 1;
				if ((d[i][j] != 'X') && (d[i][j] != '0')) 
				{
					d[i][j] = 'X';
					system("cls");
					Pole(a, b, d);
					d[i][j] =-1;
				}
				else
				{
					system("cls");
					Pole(a, b, d);
				}
			}
		}
	if (ch == 13)
			{
				if (d[i][j] == 'X' || d[i][j] == '0')
				{
					cout << "Vvedite v drugoe mesto";
					system("pause");
					break;
				}
				else
					d[i][j] = 'X';
				if (Win(a, b, d) == 1)
				{
					cout << "X Win!";
					ex = 1;
					break;
				}
				z = Gameover(a, b, d);
				int e = i;
				int f = j;
				srand(time(NULL));
				bool s = 0;
				if (z != 32)
				{
					while (s == 0)
					{
						e = (rand() % (a - '0')) * 2 + 1;
						f = (rand() % (b - '0')) * 2 + 1;
						if (d[e][f] == -1)
						{
							d[e][f] = '0';
							s = 1;
						}
					}
				}
				if (Win(a, b, d) == 0)
				{
					system("cls");
					Pole(a, b, d);
					cout << "0 Win!";
					ex = 1;
					break;
				}
				z = Gameover(a, b, d);
				s = 0;
				if ((ch == 32) || (z == 32))
				{
					ex = 1;
					break;
				}
			}
	} while (ch != 13);
}while (ex != 1);
	 system("color C");
	system("pause");
	return 0;
}
