#include "function.h"
using namespace std;
void(*function_selection(int n))(int* m, unsigned SIZE)
{
	if (n == 1)
	{
		return minuses;
		printMassive;
	}
	if (n == 2)
	{
		return change;
		printMassive;
	}
	else if (n == 3)
	{
		return randomMassive;
		printMassive;
	}
	else if (n == 4)
	{
		return reverse;
		printMassive;
	}
}
void randomMassive(int* m, unsigned  SIZE)
{
	srand(time(NULL));
	for (int i=0; i < SIZE; i++)
	{
		m[i] = rand() % 100;
	}
}
void printMassive(int* m, unsigned  SIZE)
{
	for (int j = 0; j < SIZE; j++)
	{
		cout << m[j] << " " << endl;
	}
}
void change(int* m, unsigned  SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		m[i] = 5;
	}
}
void minuses(int* m, unsigned  SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (m[i] <0)
			m[i]=abs(m[i]);
	}
}
void reverse(int* m, unsigned  SIZE)
{
	for (int i = 0, j = SIZE - 1; i < j; ++i, --j) {

		int t = m[i];
		m[i] = m[j];
		m[j] = t;
	}
	
}
