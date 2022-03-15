#include "function.h"
#include <iostream>
#include <ctime>
using namespace std;
void randomMassive(int m[],const int SIZE)
{
	srand(time(0));
	for (int i=0; i < SIZE; i++)
	{
		m[i] = rand() % 100;
	}
}
void printMassive(int m[], const int SIZE)
{
	for (int j = 0; j < SIZE; j++)
	{
		cout << m[j] << " " << endl;
	}
}
void change(int m[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		m[i] = 5;
	}
}
void minuses(int m[], const int SIZE)
{
	for (int i = 1; i < SIZE; i++)
	{
		if (m[i] <0)
			m[i]=abs(m[i]);
	}
}
void reverse(int m[], const int SIZE)
{
	for (int i = 0, j = SIZE - 1; i < j; ++i, --j) {

		int t = m[i];
		m[i] = m[j];
		m[j] = t;
	}
}
