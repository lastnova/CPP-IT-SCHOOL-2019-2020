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
        printf("������� ���������� ������, ����������� � ������: ");
        cin >> boxIn;
        if (boxCount >= boxIn)
        {
            boxCount -= boxIn;
            printf("�����������! �� ��������� %d ������.\n", boxIn);
        }
        else
        {
            printf("� ���������, �� ������ ����������� ������ ���������� ������\n");
        }
    }
    if (boxCount == 0)
    {
        printf("�������, �� ��������� ��� ����� � �������� �� ������!\n\n");

    }
}
