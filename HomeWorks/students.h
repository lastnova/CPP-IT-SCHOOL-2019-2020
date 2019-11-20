#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct Student
{
public:
    string name, surname, dateOfBirthday;
    int mathsMax, physicsMax, chemistryMax;
    float averageBallOfStudent;

    Student(string name, string surname, string dateOfBirthday, int mathsMax, int physicsMax, int chemistryMax)
    {
        this -> name = name;
        this -> surname = surname;
        this -> dateOfBirthday = dateOfBirthday;
        this -> mathsMax = mathsMax;
        this -> physicsMax = physicsMax;
        this -> chemistryMax = chemistryMax;
        averageBallOfStudent = (mathsMax + physicsMax + chemistryMax) / 3.0;
    }

};

void dataPrint(string name, string surname, string dateOfBirthday)
{
    printf("Name: %s\n", name.c_str());
    printf("Surname: %s\n", surname.c_str());
    printf("Date Of Birthday: %s\n\n", dateOfBirthday.c_str());
}


int students()
{
    Student Elizabeth("Elizabeth", "Raava", "06.16.1997", 2, 2, 3);
    Student Marry("Marry", "Goone", "12.08.1997", 3, 4, 3);
    Student Max("Max", "Barring", "12.05.1997", 4, 5, 5);
    Student Jonson("Jonson", "Mareto", "15.04.1997", 3, 5, 4);
    Student Tony("Tony", "World", "27.07.1997", 2, 4, 3);
    Student Soma("Soma", "Cartiz", "25.12.1997", 4, 4, 4);
    Student John("John", "Arm", "27.03.1997", 5, 5, 5);
    Student Clara("Clara", "Madison", "12.04.1997", 5, 5, 5);
    Student Karl("Karl", "Lanskoy", "04.01.1997", 4, 3, 2);
    Student Harwy("Harwy", "Maybach", "18.09.1997", 5, 5, 4);


    const int amount = 10;
    const float K = 0.2;

    Student listOfStudents[amount] = {Elizabeth, Marry, Max, Jonson, Tony, Soma, John, Clara, Karl, Harwy};

    printf("Excellent Students:\n");
    for (int i = 0; i < amount; i++) // на отлично
    {
        if (listOfStudents[i].chemistryMax == 5 && listOfStudents[i].mathsMax == 5 && listOfStudents[i].physicsMax == 5)
            dataPrint(listOfStudents[i].name, listOfStudents[i].surname, listOfStudents[i].dateOfBirthday);
    }

    printf("\nStudents with satisfactory marks:\n");
    for (int i = 0; i < amount; i++) // удовлетворительно
    {
        if (listOfStudents[i].chemistryMax == 3 && listOfStudents[i].mathsMax == 3 && listOfStudents[i].physicsMax == 3)
            dataPrint(listOfStudents[i].name, listOfStudents[i].surname, listOfStudents[i].dateOfBirthday);
    }

    printf("\nExcellent and Good marks:\n");
    for (int i = 0; i < amount; i++) // хорошисты
    {
        if ((listOfStudents[i].chemistryMax == 4 || listOfStudents[i].chemistryMax == 5) && (listOfStudents[i].mathsMax == 4 || listOfStudents[i].mathsMax == 5) && (listOfStudents[i].physicsMax == 4 || listOfStudents[i].physicsMax == 5))
            dataPrint(listOfStudents[i].name, listOfStudents[i].surname, listOfStudents[i].dateOfBirthday);
    }

    printf("\nExcellent in physics:\n");
    for (int i = 0; i < amount; i++) // 5 по физике
    {
        if (listOfStudents[i].physicsMax == 5)
            dataPrint(listOfStudents[i].name, listOfStudents[i].surname, listOfStudents[i].dateOfBirthday);
    }

    printf("\nOne Good, other Excellent:\n");
    for (int i = 0; i < amount; i++) // по одному предмету хорошо, по другим отлично
    {
        if (listOfStudents[i].averageBallOfStudent >= 4.8 && listOfStudents[i].averageBallOfStudent <= 4.9)
            dataPrint(listOfStudents[i].name, listOfStudents[i].surname, listOfStudents[i].dateOfBirthday);
    }


    printf("\nNot Satisfactory marks:\n");
    for (int i = 0; i < amount; i++) // без троек
    {
        if ((listOfStudents[i].chemistryMax == 4 || listOfStudents[i].chemistryMax == 5 || listOfStudents[i].chemistryMax == 2) && (listOfStudents[i].mathsMax == 4 || listOfStudents[i].mathsMax == 5 || listOfStudents[i].mathsMax == 2) && (listOfStudents[i].physicsMax == 4 || listOfStudents[i].physicsMax == 5 || listOfStudents[i].physicsMax == 2))
            dataPrint(listOfStudents[i].name, listOfStudents[i].surname, listOfStudents[i].dateOfBirthday);
    }

    printf("\nSorted by average Ball of Students:\n");
    for (int beginIndex = 0; beginIndex < amount - 1; beginIndex++) // сортировка студентов по возрастанию среднего балла в массиве
    {
        int smallIndex = beginIndex;
        for (int currentIndex = beginIndex + 1; currentIndex < amount; currentIndex++)
            if (listOfStudents[currentIndex].averageBallOfStudent < listOfStudents[smallIndex].averageBallOfStudent)
                smallIndex = currentIndex;

        swap(listOfStudents[beginIndex].averageBallOfStudent, listOfStudents[smallIndex].averageBallOfStudent);
        printf("%s %s: %f\n\n", listOfStudents[beginIndex].name.c_str(), listOfStudents[beginIndex].surname.c_str(), listOfStudents[beginIndex].averageBallOfStudent);
    }

    float averageBallOfGroup;
    for (int i = 0; i < amount; i++) // средний балл группы
    averageBallOfGroup += listOfStudents[i].averageBallOfStudent;
    averageBallOfGroup /= amount;

    printf("\nAverage ball of group: %f\n\n", averageBallOfGroup);

    printf("\nAverage Ball higher than avg ball of group\n"); // ср. балл студентов выше ср. балла группы
    for (int i = 0; i < amount; i++)
    {
        if (listOfStudents[i].averageBallOfStudent > averageBallOfGroup)
            dataPrint(listOfStudents[i].name, listOfStudents[i].surname, listOfStudents[i].dateOfBirthday);
    }

    printf("\nAverage Ball lower than avg ball of group\n"); // ср. балл студентов ниже ср. балла группы
    for (int i = 0; i < amount; i++)
    {
        if (listOfStudents[i].averageBallOfStudent < averageBallOfGroup)
            dataPrint(listOfStudents[i].name, listOfStudents[i].surname, listOfStudents[i].dateOfBirthday);
    }

    printf("\nAverage Ball nearby to avg ball of group\n"); // ср. балл студентов отличается не более чем на 20 процентов от среднего балла группы
    for (int i = 0; i < amount; i++)
    {
        if (fabs((1 - (listOfStudents[i].averageBallOfStudent / averageBallOfGroup))) <= K || fabs((1 - (averageBallOfGroup / listOfStudents[i].averageBallOfStudent))) <= K)
            dataPrint(listOfStudents[i].name, listOfStudents[i].surname, listOfStudents[i].dateOfBirthday);
    }

    string temp = "";

    for (int i = 0; i < amount; i++) // сортировка студентов по алфавиту
    {
        for (int j = 0; j < amount; j++)
        {
            if (strcmp(listOfStudents[i].surname.c_str(), listOfStudents[j].surname.c_str()) < 0)
            {
                temp = listOfStudents[i].surname;
                listOfStudents[i].surname = listOfStudents[j].surname;
                listOfStudents[j].surname = temp;
            }
        }
    }

    printf("\nSort alphabetically\n");
    for (int i = 0; i < amount; i++) // вывод списка студентов по алфавиту
    {
        dataPrint(listOfStudents[i].name, listOfStudents[i].surname, listOfStudents[i].dateOfBirthday);
    }

    printf("\nChemistry and Physics 5 or 4\n");
    for (int i = 0; i < amount; i++) // по  химии и физике 4 или 5
    {
        if ((listOfStudents[i].chemistryMax == 4 || listOfStudents[i].chemistryMax == 5) && (listOfStudents[i].physicsMax == 4 || listOfStudents[i].physicsMax == 5))
            dataPrint(listOfStudents[i].name, listOfStudents[i].surname, listOfStudents[i].dateOfBirthday);
    }

}
