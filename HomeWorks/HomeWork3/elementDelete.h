#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int elementDelete()
{
    int count, change, removingElement;
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
    printf("Введите номер элемента, который желаете удалить: ");
    cin >> removingElement;
    printf("Массив без %d элемента: ", removingElement);
    for (int i = 0; i < count - 1; i++)
    {
        if (i >= removingElement - 1)
        {
            change = arrayOfNumbers[i];
            arrayOfNumbers[i] = arrayOfNumbers[i+1];
            arrayOfNumbers[i + 1] = change;

        }
        printf("%d ", arrayOfNumbers[i]);
    }
    printf("\n\n");
}
