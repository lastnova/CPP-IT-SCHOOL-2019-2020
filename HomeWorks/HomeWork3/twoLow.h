#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int twoLow()
{

    int count, min1, min2, buff;
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
    if (arrayOfNumbers[0] < arrayOfNumbers[1])
    {
        min1 = 0;
        min2 = 1;
    }
    else
    {
        min1 = 1;
        min2 = 0;
    }

    for (int i = 2; i < count; i++)
    {
        if (arrayOfNumbers[i] < arrayOfNumbers[min1])
        {
            buff = min1;
            min1 = i;
            if (arrayOfNumbers[buff] < arrayOfNumbers[min2])
                min2 = buff;
        }
        else
        {
            if (arrayOfNumbers[i] < arrayOfNumbers[min2])
                min2 = i;
        }
    }

    printf("����������� ������� 1 � ������� ��� ������� %d: %d\n", min1 + 1, arrayOfNumbers[min1]);
    printf("����������� ������� 2 � ������� ��� ������� %d: %d\n", min2 + 1, arrayOfNumbers[min2]);
    printf("\n");
}
