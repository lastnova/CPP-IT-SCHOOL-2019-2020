#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int bubbleSort()
{
    int count, temp;
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
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (arrayOfNumbers[j] > arrayOfNumbers[j + 1])
            {
                temp = arrayOfNumbers[j];
                arrayOfNumbers[j] = arrayOfNumbers[j + 1];
                arrayOfNumbers[j + 1] = temp;
            }
        }
    }
    printf("Массив, отсортированный методом пузырька: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arrayOfNumbers[i]);
    }
    printf("\n\n");
}
