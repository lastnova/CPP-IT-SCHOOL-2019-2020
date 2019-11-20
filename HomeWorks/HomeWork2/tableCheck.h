#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int tableCheck()
{
    int factorOne, factorTwo;
    printf("Введите первое число (1-9): ");
    cin >> factorOne;
    printf("Введите второе число (1-9): ");
    cin >> factorTwo;
    bool check = true;
    while (check)
    {
        int result = rand() % 81 + 1;
        int answer;
        printf("%d * %d = %d? (1 - да, 0 - нет): ", factorOne, factorTwo, result);
        cin >> answer;
        switch (answer)
        {
        case 1:
            if ((factorOne * factorTwo) == result)
            {
                printf("Вы правы, поздравляем!");
                check = false;
            }
            else
            {
                printf("Вы не правы, попробуйте ещё!");
            }
            break;
        case 0:
            if ((factorOne * factorTwo) == result)
            {
                printf("Результат %d правильный, вы ошиблись!", factorOne * factorTwo);
                check = false;
            }
            break;
        }

    }
    printf("\n");
}
