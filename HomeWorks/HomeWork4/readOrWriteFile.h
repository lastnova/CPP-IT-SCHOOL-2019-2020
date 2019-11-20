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
        printf(" 1 - Чтение файла;\n 2 - Запись в файл;\n 0 - Выйти в меню;\n");
        printf("Введите ваш выбор: ");
        cin >> homeWork4;
        switch(homeWork4)
        {
        case(1): {
            ifstream inf("C:\\Users\\2048\\Desktop\\Programming\\С++\\Домашние работы C++. Программа\\HomeWorks\\HomeWork4\\readFile.txt");  //читать содержимое файла

            if (!inf) // Если мы не можем открыть этот файл для чтения его содержимого
            {
                cerr << "Файл readFile.txt не может быт открыт для чтения!" << endl;
            }

            while (inf) // Пока есть данные, которые мы можем прочитать
            {
                string strInput;
                inf >> strInput;
                cout << strInput << endl;
            }
            return 0;
            break; }

        case(2): {
            ofstream outf("C:\\Users\\2048\\Desktop\\Programming\\С++\\Домашние работы C++. Программа\\HomeWorks\\HomeWork4\\writeFile.txt"); // Создаём файл

            if (!outf) // Если мы не можем открыть этот файл для записи данных в него
            {
                cerr << "Файл writeFile.txt не может быт открыт для записи!" << endl;
            }

            // Записываем в файл следующие строчки
            string whatToWtite;
            printf("Что записать в файл?: ");
            cin >> whatToWtite;
            outf << whatToWtite << endl;
            printf("Успешно!\n");

            return 0;
            break; }

        case(0): {
            ending = false;
            break; }
        }
    }
}



