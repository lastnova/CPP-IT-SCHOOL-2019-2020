#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <cstdlib>
using namespace std;

int square()
{
    bool exit = true;
    int continuation;
    float numberToSquare;
    while (exit)
    {
        printf("������� �����, ������� ����� �������� � �������: ");
        cin >> numberToSquare;
        printf("%f � �������� ����� %f\n", numberToSquare, pow(numberToSquare,2));
        printf("������ �� �������� ����� � ������� ��� ���?(������� 1, ����� ������ ��� ��� ��� 0, ����� �����): ");
        cin >> continuation;
        switch (continuation)
        {
        case 1:
            break;
        case 0:
            printf("�������, ��� ��������������� ����� ����������.\n");
            exit = false;
            break;
        default:
            printf("�� ����� �������� �����, ���������� ��� ���\n");

        }
    }
    printf("\n\n");
}
