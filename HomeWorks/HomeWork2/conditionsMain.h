#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "square.h"
#include "tableCheck.h"
#include "triangle.h"
#include "countRemainderOfApples.h"
#include "amountOfNumbers.h"
#include "gym.h"
#include "oddRangeNumbers.h"

int conditionsMain()
{
    bool endingConditions = true;
    int conditionsChoice;
    while (endingConditions)
    {
        printf("Что хотите посмотреть?\n1 - Возведение в квадрат;\n");
        printf("2 - Ящики яблок;\n");
        printf("3 - Проверка таблицы умножения;\n");
        printf("4 - Спортзал;\n");
        printf("5 - Сумма и ср. арифм. чисел;\n");
        printf("6 - Прорисовка треугольника;\n");
        printf("7 - Сумма нечёт. чисел;\n");
        printf("0 - Выйти: ");
        cin >> conditionsChoice;
        switch(conditionsChoice)
        {
        case(1):
            square();
            break;
        case(2):
            countRemainderOfApples();
            break;
        case(3):
            tableCheck();
            break;
        case(4):
            gym();
            break;
        case(5):
            amountOfNumbers();
            break;
        case(6):
            triangle();
            break;
        case(7):
            oddRangeNumbers();
            break;
        case(0):
            endingConditions = false;
            break;
        default:
            printf("Вы ввели неверное значение, попробуйте ещё раз! (Число от 0 до 7)\n");
        }
    }
}
