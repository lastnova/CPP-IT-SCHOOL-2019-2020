#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "negativeDelete.h"
#include "choiceSort.h"
#include "elementDelete.h"
#include "lowerThanAverage.h"
#include "twoLow.h"
#include "oftenNumber.h"
#include "bubbleSort.h"

using namespace std;

int arraysMain()
{
    bool endingArrays = true;
    int arraysChoice;
    while (endingArrays)
    {
        printf("Что хотите посмотреть?\n1 - Два наименьших элемента массива;\n");
        printf("2 - Элементы, меньшие среднего арифметического\n");
        printf("3 - Удаление отрицательных элементов массива;\n");
        printf("4 - Сортировка методом пузырька;\n");
        printf("5 - Сортировка выбором;\n");
        printf("6 - Число, чаще всего встречающееся в массиве;\n");
        printf("7 - Удалить элемент из массива;\n");
        printf("0 - выйти: ");
        cin >> arraysChoice;
        switch(arraysChoice)
        {
        case(1):
            twoLow();
            break;
        case(2):
            lowerThanAverage();
            break;
        case(3):
            negativeDelete();
            break;
        case(4):
            bubbleSort();
            break;
        case(5):
            choiceSort();
            break;
        case(6):
            oftenNumber();
            break;
        case(7):
            elementDelete();
            break;
        case(0):
            endingArrays = false;
            break;
        default:
            printf("Вы ввели неверное значение, попробуйте ещё раз! (Число от 0 до 7)\n");
        }
    }
}
