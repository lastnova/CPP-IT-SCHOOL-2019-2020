#include <locale>
#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int gym()
{
    int count;
    printf("������� ������� �������� ��� �� ����?: ");
    cin >> count;
    int listOfAges[count];
    for (int i = 0; i < count; i++)
    {
        printf("������� ������� %d ����������: ", i + 1);
        cin >> listOfAges[i];
    }

    int maxAge = listOfAges[0];
    for (int i = 0; i < count; i++)
    {
        if (listOfAges[i] > maxAge)
        {
            maxAge = listOfAges[i];
        }
    }
    printf("����� ������� ���������� ����: %d ���\n", maxAge);

    int minAge = listOfAges[0];
    for (int i = 0; i < count; i++)
    {
        if (listOfAges[i] < minAge)
        {
            minAge = listOfAges[i];
        }
    }
    printf("����� ������� ���������� ����: %d ���\n", minAge);

    int amount = 0;
    for (int i = 0; i < count; i++)
    {
        amount += listOfAges[i];
    }

    float average = float(amount) / float(count);
    printf("������� ������� �����������: %f\n", average);
    printf("\n");
}
