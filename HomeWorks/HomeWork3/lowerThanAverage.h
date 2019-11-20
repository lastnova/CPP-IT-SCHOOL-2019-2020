#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int lowerThanAverage()
{
    int count;
    printf("Введите размерность массива: ");
    cin >> count;

    int* arrayOfNumbers = new int[count];

    printf("Массив со случайными числами: ");
    for (int i = 0; i < count; i++)
    {
        arrayOfNumbers[i] = rand() % 100;
        printf("%d ", arrayOfNumbers[i]);
    }
    printf("\n");
    int amount = 0;
    for (int i = 0; i < count; i++)
    {
        amount += arrayOfNumbers[i];
    }
    float average = amount / count;
    printf("Элементы, которые меньше среднего арифметического: ");
    for (int i = 0; i < count; i++)
    {
        if (arrayOfNumbers[i] < average)
        {
            printf("%d ", arrayOfNumbers[i]);
        }
    }
    printf("\n\n");
}
