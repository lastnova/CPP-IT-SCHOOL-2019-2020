#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int oftenNumber()
{
    int count, change, number, frequence, maxFrequence;
    printf("������� ����������� �������: ");
    cin >> count;

    int* arrayOfNumbers = new int[count];

    printf("������ �� ���������� �������: ");
    for (int i = 0; i < count; i++)
    {
        arrayOfNumbers[i] = rand() % 20;
        printf("%d ", arrayOfNumbers[i]);
    }
    printf("\n");
    number = arrayOfNumbers[0];
    maxFrequence = 1;
    for (int i = 0; i < count - 1; i++)
    {
        frequence = 1;
        for (int k = i + 1; k < count; k++)
            if (arrayOfNumbers[i] == arrayOfNumbers[k])
                frequence += 1;
        if (frequence > maxFrequence)
        {
            maxFrequence = frequence;
            number = arrayOfNumbers[i];
        }
    }

    if (maxFrequence > 1)
        printf("%d ���(�) ����������� ����� %d\n", maxFrequence, number);
    else
        printf("��� �������� ���������!\n");
    printf("\n\n");
}

