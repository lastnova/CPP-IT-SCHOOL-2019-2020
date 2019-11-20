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
        printf("Введите число, которое нужно возвести в квадрат: ");
        cin >> numberToSquare;
        printf("%f в квадрате будет %f\n", numberToSquare, pow(numberToSquare,2));
        printf("Хотите ли возвести число в квадрат ещё раз?(Введите 1, чтобы ввести ещё раз или 0, чтобы выйти): ");
        cin >> continuation;
        switch (continuation)
        {
        case 1:
            break;
        case 0:
            printf("Спасибо, что воспользовались нашей программой.\n");
            exit = false;
            break;
        default:
            printf("Вы ввели неверное число, попробуйте ещё раз\n");

        }
    }
    printf("\n\n");
}
