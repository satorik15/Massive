#include <iostream>
#include "function.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
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
    function_selection(n)(m,SIZE);
    printMassive(m, SIZE);
}

