#include <iostream>
using namespace std;

int triangle()
{
    int height = 0;
    printf("¬ведите высоту равнобедренного треугольника: ");
    cin >> height;

    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j < height - i; j++)
        {
            printf(" ");
        }

        for (int j = height - 2 * i; j <= height; j++)
        {
            printf("^");
        }
        printf("\n");
    }
    printf("\n");
}
