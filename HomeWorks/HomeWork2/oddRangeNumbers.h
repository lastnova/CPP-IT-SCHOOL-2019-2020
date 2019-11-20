#include <iostream>
using namespace std;

int oddRangeNumbers()
{
    int startOfRange, endOfRange, amount = 0;
    printf("¬ведите число - начало диапазона: ");
    cin >> startOfRange;
    printf("¬ведите число - конец диапазона: ");
    cin >> endOfRange;
    for (int i = startOfRange; i < endOfRange; i++)
    {
        if (i % 2 == 1);
        amount += i;
    }
    printf("—умма нечЄтных чисел диапазона %d-%d = %d\n", startOfRange, endOfRange, amount);
    printf("\n\n");
}
