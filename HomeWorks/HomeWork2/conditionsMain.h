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
        printf("��� ������ ����������?\n1 - ���������� � �������;\n");
        printf("2 - ����� �����;\n");
        printf("3 - �������� ������� ���������;\n");
        printf("4 - ��������;\n");
        printf("5 - ����� � ��. �����. �����;\n");
        printf("6 - ���������� ������������;\n");
        printf("7 - ����� �����. �����;\n");
        printf("0 - �����: ");
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
            printf("�� ����� �������� ��������, ���������� ��� ���! (����� �� 0 �� 7)\n");
        }
    }
}
