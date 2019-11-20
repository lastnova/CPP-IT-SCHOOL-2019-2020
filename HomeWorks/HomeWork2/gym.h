#include <locale>
#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int gym()
{
    int count;
    printf("Сколько человек посетило зал за день?: ");
    cin >> count;
    int listOfAges[count];
    for (int i = 0; i < count; i++)
    {
        printf("Введите возраст %d посетителя: ", i + 1);
        cin >> listOfAges[i];
    }

    int maxAge = listOfAges[0];
    for (int i = 0; i < count; i++)
    {
        if (listOfAges[i] > maxAge)
        {
            maxAge = listOfAges[i];
        }
    }
    printf("Самый старший посетитель зала: %d лет\n", maxAge);

    int minAge = listOfAges[0];
    for (int i = 0; i < count; i++)
    {
        if (listOfAges[i] < minAge)
        {
            minAge = listOfAges[i];
        }
    }
    printf("Самый младший посетитель зала: %d лет\n", minAge);

    int amount = 0;
    for (int i = 0; i < count; i++)
    {
        amount += listOfAges[i];
    }

    float average = float(amount) / float(count);
    printf("Средний возраст посетителей: %f\n", average);
    printf("\n");
}
