#include<iostream>
#include<stdio.h> 
#include<conio.h> 
#include <string> 
using namespace std;
int _strlenX(char*ch)
{
	int i = 0;
	while (ch[i] != '\0')
		i++;
	return i;
}
int _strcmpX(char*ch1, char*ch2)
{
		int i = 0;
		if (ch1[i] > ch2[i])
			return 1;
		else
			if (ch1[i] < ch2[i])
				return 2;
			else
			{
				while ((ch1[i] == ch2[i]) && (ch1[i] != '\0') && (ch2[i] != '\0'))
				{
					i++;
					if (ch1[i] > ch2[i])
						return 1;
					else
						if (ch1[i] < ch2[i])
							return 2;
				}
				return 3;
			}
}
int _strcatX(char*ch1, char*ch2)
{
		 int i = 0;
		int c1 = _strlenX(ch1);
		int c2 = _strlenX(ch2);
		while (ch1[i] != 0)
		 {
			 i++;
		 }
		 int j = 0;
		 while (ch2[j]!=0)
		 {
			 ch1[i] = ch2[j];
			 j++;
			 i++;
		 }
		 ch1[i] = '\0';
		 ch2 = '\0';
		 cout << ch1 << endl;
	return 0;
}
int _strcpyX(char*ch1, char*ch2)
{
		  int i = 0;
		  while (ch2[i] != '\0')
		  {
			  ch1[i] = ch2[i];
			  i++;
		  }
		  ch1[i] = '\0';
		  cout << ch1;
	return 0;
}
int main()
{
	setlocale(0, "");
	char d[100] , s[100] ;
	int n;
	cout << "������� ������ ������ �� ����� 50 �������" << endl;
	scanf_s("%s", d, 100);
	cout << "������� ������ ������ �� ����� 50 �������" << endl;
	scanf_s("%s", s, 100);
	cout << "����� ������ ������" << endl;
	cout << _strlenX(d) << endl;
	cout << "����� ������ ������" << endl;
	cout<<_strlenX(s)<<endl;
	cout << "��������� ���� �����" << endl;
	switch (_strcmpX(d, s))
	{
	case 1:
		cout << d << '>' << s << endl;
		break;
	case 2:
		cout << d << '<' << s << endl;
		break;
	case 3:
		cout << d << '=' << s << endl;
		break;
	}
	cout << "������ ��� ������" << endl;
		_strcatX(d, s);
	cout << "��������� ������ ������ � ������"<<endl;
		_strcpyX(d, s);
	system("pause");
	return 0;
}
