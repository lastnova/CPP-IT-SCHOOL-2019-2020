#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int amountOfNumbers()
{
    bool check = true;
    int counter = 0, amount = 0;
    while (check)
    {
        int number;
        if (number != 0)
        {
            printf("������� �����: ");
            cin >> number;
            amount += number;
            counter++;
        }
        else
        {
            check = false;
        }
    }
    printf("����� �������� �����: %d\n", amount);
    printf("���������� �������� �����: %d\n", counter - 1);
    float average = float(amount) / float(counter - 1);
    printf("������� �������������� �����: %f\n", average);
}
