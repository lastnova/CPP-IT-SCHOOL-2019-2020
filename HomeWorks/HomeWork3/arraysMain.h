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
        printf("��� ������ ����������?\n1 - ��� ���������� �������� �������;\n");
        printf("2 - ��������, ������� �������� ���������������\n");
        printf("3 - �������� ������������� ��������� �������;\n");
        printf("4 - ���������� ������� ��������;\n");
        printf("5 - ���������� �������;\n");
        printf("6 - �����, ���� ����� ������������� � �������;\n");
        printf("7 - ������� ������� �� �������;\n");
        printf("0 - �����: ");
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
            printf("�� ����� �������� ��������, ���������� ��� ���! (����� �� 0 �� 7)\n");
        }
    }
}
