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
    system("title �������� ������");
    int homeWork;
    bool ending = true;
    while (ending)
    {
        printf("����� �������� ������� �����?\n 1 - �����������;\n 2 - �������;\n 3 - �������;\n");
        printf(" 4 - ������ � ������ ������;\n 5 - ��������;\n 0 - �����;\n");
        printf("������� ��� �����: ");
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
