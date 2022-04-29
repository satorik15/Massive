#ifndef FUNCTION_H
#define FUNCTION_H
#include <string>
#include <iostream>
#include <stdlib.h>
#include <ctime>
void(*function_selection(int n))(int*, unsigned);
void randomMassive(int* m, unsigned  SIZE);
void printMassive(int* m, unsigned  SIZE);
void change(int* m, unsigned  SIZE);
void minuses(int* m, unsigned  SIZE);
void reverse(int* m, unsigned  SIZE);
#endif // !FUNCTION_H