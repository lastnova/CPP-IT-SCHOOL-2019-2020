#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

int readOrWriteFile()
{
    setlocale(LC_ALL, "RUS");
    int homeWork4;
    bool ending = true;
    while (ending)
    {
        printf(" 1 - ������ �����;\n 2 - ������ � ����;\n 0 - ����� � ����;\n");
        printf("������� ��� �����: ");
        cin >> homeWork4;
        switch(homeWork4)
        {
        case(1): {
            ifstream inf("C:\\Users\\2048\\Desktop\\Programming\\�++\\�������� ������ C++. ���������\\HomeWorks\\HomeWork4\\readFile.txt");  //������ ���������� �����

            if (!inf) // ���� �� �� ����� ������� ���� ���� ��� ������ ��� �����������
            {
                cerr << "���� readFile.txt �� ����� ��� ������ ��� ������!" << endl;
            }

            while (inf) // ���� ���� ������, ������� �� ����� ���������
            {
                string strInput;
                inf >> strInput;
                cout << strInput << endl;
            }
            return 0;
            break; }

        case(2): {
            ofstream outf("C:\\Users\\2048\\Desktop\\Programming\\�++\\�������� ������ C++. ���������\\HomeWorks\\HomeWork4\\writeFile.txt"); // ������ ����

            if (!outf) // ���� �� �� ����� ������� ���� ���� ��� ������ ������ � ����
            {
                cerr << "���� writeFile.txt �� ����� ��� ������ ��� ������!" << endl;
            }

            // ���������� � ���� ��������� �������
            string whatToWtite;
            printf("��� �������� � ����?: ");
            cin >> whatToWtite;
            outf << whatToWtite << endl;
            printf("�������!\n");

            return 0;
            break; }

        case(0): {
            ending = false;
            break; }
        }
    }
}



