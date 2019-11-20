#include <iostream>
#include <locale>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int calculator()
{
    float number1, number2, result;
    char operation;
    string exitCheck;
    bool exit = true;

    while (exit)
    {
        printf("������� ������ �����: ");
        cin >> number1;
        printf("������� ������ �����: ");
        cin >> number2;
        printf("�������� (+, -, *, /): ");
        cin >> operation;

        switch(operation)
        {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            if (number2 != 0)
            {
                result = number1 / number2;
            }
            else
            {
                printf("�� ���� ������ ������!");
            }
            break;
        default:
            {
                printf("������� ������� ��������.");
            }
        }
        printf("%f %c %f %s %f\n", number1, operation, number2, "=", result);
        printf("������ ����������? (y - ��, n - ���): ");
        cin >> exitCheck;
        if (exitCheck != "y")
        {
            exit = false;
        }
    }

    return EXIT_SUCCESS;
}
