#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int choiceSort()
{
    int count, buff = 0, min = 0;
    printf("������� ����������� �������: ");
    cin >> count;

    int* arrayOfNumbers = new int[count];

    printf("������ �� ���������� �������: ");
    for (int i = 0; i < count; i++)
    {
        arrayOfNumbers[i] = rand() % 100;
        printf("%d ", arrayOfNumbers[i]);
    }
    printf("\n");
    for (int i = 0; i < count; i++)
    {
        min = i;
        for (int j = i + 1; j < count; j++)
            min = (arrayOfNumbers[j] < arrayOfNumbers[min]) ? j : min;
        if (i != min)
        {
            buff = arrayOfNumbers[i];
            arrayOfNumbers[i] = arrayOfNumbers[min];
            arrayOfNumbers[min] = buff;
        }
    }
    printf("��������������� ������: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ",arrayOfNumbers[i]);
    }
    printf("\n\n");
}
