#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int negativeDelete()
{
    int countOfRandomList, count = 0, numberOfElement = 0;
    printf("������� ����������� �������: ");
    cin >> countOfRandomList;

    int* arrayOfNumbers = new int[countOfRandomList];

    printf("������ �� ���������� �������: ");
    for (int i = 0; i < countOfRandomList; i++)
    {
        arrayOfNumbers[i] = rand() % 9-1;
        printf("%d ", arrayOfNumbers[i]);
        if (arrayOfNumbers[i] >= 0)
        {
            count++;
        }
    }
    printf("\n");
    int* arrayOnlyPositive = new int[count];
    for(int i = 0; i < countOfRandomList; i++)
    {
        if(arrayOfNumbers[i] >= 0)
        {
            arrayOnlyPositive[numberOfElement]=arrayOfNumbers[i];
            numberOfElement++;
        }
    }
    printf("������ � �������������� ����������: ");
    for(int i = 0; i < numberOfElement; i++)
    {
        printf("%d ", arrayOnlyPositive[i]);
    }
    printf("\n\n");
}
