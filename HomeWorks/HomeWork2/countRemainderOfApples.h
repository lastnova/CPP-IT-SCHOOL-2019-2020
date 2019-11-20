#include <stdio.h>
#include <locale>
#include <cstdlib>
#include <iostream>

using namespace std;

int countRemainderOfApples()
{
    int boxCount = 15, boxIn;
    while (boxCount != 0)
    {
        printf("Введите количество ящиков, загружаемых в машину: ");
        cin >> boxIn;
        if (boxCount >= boxIn)
        {
            boxCount -= boxIn;
            printf("Поздравляем! Вы загрузили %d ящиков.\n", boxIn);
        }
        else
        {
            printf("К сожалению, на складе отсутствует данное количество ящиков\n");
        }
    }
    if (boxCount == 0)
    {
        printf("Отлично, вы отправили все ящики с яблоками со склада!\n\n");

    }
}
