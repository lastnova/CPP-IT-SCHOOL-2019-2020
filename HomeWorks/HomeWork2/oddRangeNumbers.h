#include <iostream>
using namespace std;

int oddRangeNumbers()
{
    int startOfRange, endOfRange, amount = 0;
    printf("������� ����� - ������ ���������: ");
    cin >> startOfRange;
    printf("������� ����� - ����� ���������: ");
    cin >> endOfRange;
    for (int i = startOfRange; i < endOfRange; i++)
    {
        if (i % 2 == 1);
        amount += i;
    }
    printf("����� �������� ����� ��������� %d-%d = %d\n", startOfRange, endOfRange, amount);
    printf("\n\n");
}
