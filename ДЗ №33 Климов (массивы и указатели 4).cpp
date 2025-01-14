﻿// Задание #2
// 
// ДЗ №33 Климов (массивы и указатели 4)
//
//Используя указатель на массив целых чисел, 
//изменить порядок следования элементов массива на
//противоположный.
//Использовать в программе арифметику указателей
//для продвижения по массиву, а также оператор разыменования.

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    cout << "\n **********************************************************************" << endl;
    cout << " *           Программа действий с массивами через указатели V3.1      *" << endl;
    cout << " **********************************************************************" << endl;
        
    const int size = 5;
    int arr[size];
    int temp;
    int* start = &arr[0];
    int* end = &arr[size - 1];

    cout << "Первичный вид массива:" << "\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % (10 - 1);
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    while (start != end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    cout << "Вид массива в обратном порядке:" << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    
    cout << "\n\n";
    
    return 0;
}