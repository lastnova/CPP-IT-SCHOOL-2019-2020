#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int tableCheck()
{
    int factorOne, factorTwo;
    printf("������� ������ ����� (1-9): ");
    cin >> factorOne;
    printf("������� ������ ����� (1-9): ");
    cin >> factorTwo;
    bool check = true;
    while (check)
    {
        int result = rand() % 81 + 1;
        int answer;
        printf("%d * %d = %d? (1 - ��, 0 - ���): ", factorOne, factorTwo, result);
        cin >> answer;
        switch (answer)
        {
        case 1:
            if ((factorOne * factorTwo) == result)
            {
                printf("�� �����, �����������!");
                check = false;
            }
            else
            {
                printf("�� �� �����, ���������� ���!");
            }
            break;
        case 0:
            if ((factorOne * factorTwo) == result)
            {
                printf("��������� %d ����������, �� ��������!", factorOne * factorTwo);
                check = false;
            }
            break;
        }

    }
    printf("\n");
}
