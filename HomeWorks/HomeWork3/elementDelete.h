#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int elementDelete()
{
    int count, change, removingElement;
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
    printf("������� ����� ��������, ������� ������� �������: ");
    cin >> removingElement;
    printf("������ ��� %d ��������: ", removingElement);
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
