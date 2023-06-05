#include<iostream>
using namespace std;

int main()
{
	const int n = 20;
	for (int i = 1; i <= n; i += 2)
	{
		for (int k = n; k >= i; k -= 2)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 1; i <= n - 8; i += 2)
	{
		for (int k = 1; k <= i; k += 2)
		{
			cout << " ";
		}
		for (int j = n; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 1; i <= n - 10; i += 2)
	{
		for (int k = n; k >= i + 8; k -= 2)
		{
			cout << " ";
		}
		for (int j = 1; j <= i + 8; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}