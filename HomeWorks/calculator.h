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
        printf("Введите первое число: ");
        cin >> number1;
        printf("Введите второе число: ");
        cin >> number2;
        printf("Операция (+, -, *, /): ");
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
                printf("На ноль делить нельзя!");
            }
            break;
        default:
            {
                printf("Неверно введены значения.");
            }
        }
        printf("%f %c %f %s %f\n", number1, operation, number2, "=", result);
        printf("Хотите продолжить? (y - да, n - нет): ");
        cin >> exitCheck;
        if (exitCheck != "y")
        {
            exit = false;
        }
    }

    return EXIT_SUCCESS;
}
