/*
#include <iostream>
#include <time.h>
#include <iomanip>
#include <limits.h>

using namespace std;

int searchMin(int* massiv, int massivSize, int startIndex, int& min);
void initAndPrintMassiv(int* massiv, int massivSize);


int main()
{
    srand((int)time(NULL));
    int const massivSize = 100;
    int massiv[massivSize];
    int min = INT_MAX;
    initAndPrintMassiv(massiv, massivSize);
    searchMin(massiv, massivSize, 0, min);
    cout << "Min = " << min << endl;
    return 0;
}

int searchMin(int* massiv, int massivSize, int startIndex, int& min)
{
    int localMin = 0;
    if (startIndex + 9 == massivSize)
    {
        return 0;
    }
    for (int i = startIndex; i < startIndex + 10; i++)
    {
        localMin += massiv[i];
    }
    if (localMin < min)
    {
        min = localMin;
    }
    return searchMin(massiv, massivSize, startIndex + 1, min);
}


void initAndPrintMassiv(int* massiv, int massivSize)
{
    for (int i = 0; i < massivSize; i++)
    {
        *(massiv + i) = rand() % 101;
        cout << fixed << setw(4) << *(massiv + i) << " ";
        if (i % 10 == 9)
        {
            cout << endl;
        }
    }
}
*///4


/**/
#include "iostream"
#include "tchar.h"
#include "stdio.h"
#include "stdlib.h"
#include "iomanip"

using namespace std;

const size_t N = 5;
const size_t M = 5;
const size_t K = 5;
int maxarr(int n, int m, int k, int arr[N][M][K]);
int maxarr(int n, int m, int arr[N][M]);
int maxarr(int n, int arr[]);
float maxarr(int n, float arr[]);
int maxarr(int n, int m);
int maxarr(int n, int m, int k);

typedef int T[N];
typedef float V[N];
typedef int S[N][M];
typedef int W[N][M][K];
int main()
{
	setlocale(LC_ALL, "ru");
	T A = {}; V B; S C; W Q;
	int c1, n = N, m = M, k = K;
	int a, b, c;
	do {
		cout << "Введите  C1" << endl;
		cin >> c1;
	} while (c1 < 1 || c1>5);

	switch (c1)
	{
	case 1:
		for (int i = 0; i < N; i++)
		{
			A[i] = rand() % 10;
			B[i] = (((float)(rand()) / (float)(RAND_MAX))) * 100;
			cout << "\n" << A[i];
		}
		cout << endl << endl;
		c1 = maxarr(n, A); cout << "\nMAX element = " << c1;
		break;
	case 2:
		for (int i = 0; i < N; i++)
		{
			for (int j = 1; j < M; j++)
			{
				C[i][j] = (int)((((float)(rand()) / (float)(RAND_MAX))) * 11);
				cout << setw(5) << C[i][j];
			}
			cout << endl << endl;
		}

		c1 = maxarr(n, m, C); cout << "\nMAX element = " << c1;
		break;
	case 3:
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				for (int q = 0; q < K; q++)

				{
					Q[i][j][q] = (int)((((float)(rand()) / (float)(RAND_MAX))) * 10);
					cout << setw(5) << Q[i][j][q];
				}
				cout << endl << endl;
			}
			cout << endl << endl;
		}
		c1 = maxarr(n, m, k, Q); cout << "\nMAX element = " << c1;
		break;
	case 4:
		cout << "Введите 2 числа через пробел= " << endl;
		cin >> a >> b;
		c1 = maxarr(a, b);
		cout << "\nMAX element = " << c1;
		break;
	case 5:
		cout << "Введите 2 числа через пробел= " << endl;
		cin >> a >> b >> c;
		c1 = maxarr(a, b, c);
		cout << "\nMAX element = " << c1;

		break;

	}


	return 0;
}
int maxarr(int n, int m, int arr[N][M])
{

	int max = arr[0][0];
	for (int i = 0; i < n; i++)
		for (int j = 1; j < m; j++)
			if (arr[i][j] > max) { max = arr[i][j]; }
	return max;
}

int maxarr(int n, int arr[])
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max) { max = arr[i]; }
	return max;
}
float maxarr(int n, float arr[])
{
	float max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max) { max = arr[i]; }
	return max;
}

int  maxarr(int n, int m, int k, int arr[N][M][K])
{
	int max = arr[0][0][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			for (int q = 0; q < k; q++)
				if (arr[i][j][q] > max) { max = arr[i][j][q]; }
	return max;
}
int maxarr(int n, int m)
{
	if (n == m) { cout << "Числа равны "; return 0; }
	if (n > m) { return n; }
	else
	{
		return m;
	}
}
int maxarr(int n, int m, int k)
{
	int max;
	if (n == m == k) { cout << "Числа равны "; return 0; }
	max = n;
	m > max&& m > k ? max = m : k > max ? max = k : max = n;
	return max;
}


