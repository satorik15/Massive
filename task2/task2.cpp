#include <iostream>
#include "function.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    void menu();
    cout << "Выберете, что хотите сделать с заданным массивом:\n"
        << "1.Избавится от минусов\n" << "2.Заменить все элементы на 5\n"
        << "3.Заменить все элементы массива рандомными числами\n"
        << "4.Инвертироапть массив\n";
    int n = 0;
    cin >> n;
    
    const int SIZE=10;
    setlocale(LC_ALL, "RUS");
    int m[SIZE];
    cout << "Введите массив" << endl;
    for (int i = 0; i < SIZE; i++)
        cin >> m[i];
    if (n == 1)
    {
        minuses(m, SIZE);
        printMassive(m, SIZE);
    }
    else if (n == 2)
    {
        change(m, SIZE);
        printMassive(m, SIZE);
    }
    else if(n==3)
    {
        randomMassive(m, SIZE);
        printMassive(m, SIZE);
    }
    else if(n==4)
    {
        reverse(m, SIZE);
        printMassive(m, SIZE);
    }
}

