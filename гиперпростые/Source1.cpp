/*#include<iostream>
using namespace std;
int main()
{
	unsigned long int i,k,x = 2 ^ 32 - 1;
	int z, c;
	cout << 1 << endl;
	cout << 2 << endl;
	cout << 3 << endl;
	for (i = 4; i <= x; i++)
	{
		if (i % 2 != 0) {
			k = 1;
			while (k <= i)
			{
				if (i%k = 0)
				{
					c++
				}
				if (c > 2)
				{
					break;
				};
				else {
					cout << i << endl;
				}
				k++
			}
			}	
	}
	
}
#include <iostream>
#include <cmath>
#include <string>

long double max = pow(2, 32);

bool isPrime(unsigned long long int number) {
	for (unsigned long long int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0)
			return false;
	}
	return true;
}

std::string decToBin(unsigned long long int number) {
	std::string result = "";
	while (number >= 2) {
		if (number % 2 == 0)
			result = "0" + result;
		else
			result = "1" + result;
		number /= 2;
	}
	if (number == 0)
		result = "0" + result;
	else
		result = "1" + result;
	return result;
}

int itrerator(unsigned long long int number) {
	int amount = 0;
	for (int i = 0; i < 10; i++) {
		unsigned long long int subNumber = number * 10 + i;
		if (subNumber >= max)
			continue;
		if (isPrime(subNumber)) {
			// std::cout << subNumber << "\n";
			if (subNumber != 0) {
				amount++;
				std::cout << subNumber << ":" << decToBin(subNumber) << "\n";
				amount += itrerator(subNumber);
			}
		}
	}
	return amount;
}

int main() {
	int amount = itrerator(0);
	std::cout << "\n-----\n" << amount << "\n";
}*/
/*#include<iostream>
using namespace std;
void pr(int a)
{
	bool isProst(int testnum)
	{
		for (int i = 3; i <= sqrt(testnum); i += 2)
			if (testnum%i == 0)
				return false;
		return true;
	}

	int main()
	{
		std::cout�2�"\n";
		int tmparr[30000];
		int st = 0;
		for (int i = 3; i <= 100000; i++)
			if (isProst(i))
				tmparr[st++] = i;
		for (int i = 0; i < st; i++)
			std::cout�tmparr[i]�"\n";
		return 0;
	}
 }*/
#include<iostream>
#include<cmath>
bool pr(int x)
{
	if (x%10==1 || x%10==3 || x%10==7 || x%10==9)
		for (int i = 3; i <= sqrt(x); i++)
		{
			if (x%i == 0)
				return false;
		}
	return true;
}
int main()
{
unsigned long long int N=pow(2,20);
int k;
printf("%d", 1,"\n");
printf("%d", 2,"\n");
for (int j = 3; j <= N; j++)
{
	k = j;
	while (k >= 0)
	{
		if pr(k)
			k /= 10;
		else
			break;
	}
	if k = 0
		printf("%d", j, "\n");
}
system("pause");
return 0;
}