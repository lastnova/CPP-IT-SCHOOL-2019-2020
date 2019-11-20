#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "HomeWorks\calculator.h"
#include "HomeWorks\HomeWork2\conditionsMain.h"
#include "HomeWorks\HomeWork3\arraysMain.h"
#include "HomeWorks\HomeWork4\readOrWriteFile.h"
#include "HomeWorks\students.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    system("title Домашние работы");
    int homeWork;
    bool ending = true;
    while (ending)
    {
        printf("Какое домашнее задание нужно?\n 1 - Калькулятор;\n 2 - Условия;\n 3 - Массивы;\n");
        printf(" 4 - Чтение и запись файлов;\n 5 - Студенты;\n 0 - Выход;\n");
        printf("Введите ваш выбор: ");
        cin >> homeWork;
        switch(homeWork)
        {
        case(1):
            calculator();
            break;
        case(2):
            conditionsMain();
            break;
        case(3):
            arraysMain();
            break;
        case(4):
            readOrWriteFile();
            break;
        case(5):
            students();
            break;
        case(0):
            ending = false;
            break;
        }

    }
}
