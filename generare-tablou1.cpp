#include <iostream>

using namespace std;

#define MIN_N 1
#define MAX_N 19

int main()
{
	int n;

	cout << "n = "; cin >> n;

	if (n < MIN_N || n > MAX_N)
	{
		cout << "Eroare valoare n\n";
		return 1;
	}

	int a[n][n], i, j;

	for (i = 0; i < n; i++)
	{
		a[0][i] = a[i][0] = i+1;

		a[i][i] = 1;
	}

	for (i = 2; i < n; i++)
	{
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[j][i] = a[i][j-1]-1;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}

		cout << "\n";
	}

	return 0;
}
