#include<iostream>
#include<cmath>
#include<string>
#include<conio.h>
#include<iomanip>
using namespace std;
bool prostoe(unsigned long long int n)
{
	int x = 0;;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}
string dvoichnoe(unsigned long long int n)
{
	string s = "";
	while (n >= 2)
	{
		if (n % 2 == 0)
			s = '0' + s;
		else
			s = '1' + s;
		n /= 2;
	}
	s = '1' + s;
	return s;
}
int main()
{
	setlocale(0, "");
	unsigned long long int a[200] = { 1,2,3,5,7 };
	int b[4] = { 1,3,7,9 };
	int k = 0;
	int j = 4;
	int i = 0;
	string c;
	int N = pow(2, 32);
	while (k <= 200 && a[i] <= N)
	{
		if (a[k] == 0)
			break;
		cout << setw(10) <<left<< a[k] << "   " << dvoichnoe(a[k]) << endl;
		for (int i = 0; i <= 3; i++)
		{
			if (prostoe(a[k] * 10 + b[i]))
			{
				j++;
				a[j] = a[k] * 10 + b[i];
			}
		}
		k++;
	}
	cout << "���������� ������������ �����-" << k;
	system("pause");
	return 0;
}