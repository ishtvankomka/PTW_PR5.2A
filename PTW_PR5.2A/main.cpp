#include <iostream>
#include <fstream>
#include <iomanip>
#include "Student.h"
using namespace std;

int main()
{
    char fname[100];
    char ch;
    do
    {
        cout << endl;
        cout << "Вибрати:" << endl;
        cout << "[1] - ввести дані;" << endl;
        cout << "[2] - вивести дані;" << endl;
        cout << "[3] - вивід кількості оцінок 4 або 5 з фізики;" << endl;
        cout << "[4] - вивід середнього балу з кожного предмету;" << endl;
        cout << "[0] - вийти." << endl << endl;
        cout << "Ваш вибір: "; cin >> ch;
        switch (ch)
        {
        case '0':
            break;
        case '1':
            cin.get();
            cin.sync();
            cout << "Введіть назву файла: "; cin.getline(fname, sizeof(fname));
            enter_save(fname);
            break;
        case '2':
            cin.get();
            cin.sync();
            cout << "Введіть назву файла: "; cin.getline(fname, sizeof(fname));
            load_print(fname);
            break;
        case '3':
            cout << endl;
            cout << "Введіть назву файла: "; cin >> fname;
            cout << "Кількість студентів, які отримали з фізики “5” або “4”: " << PhysicsFiveOrFour(fname) << endl;
            break;
        case '4':
            cout << endl;
            cout << "Введіть назву файла: "; cin >> fname;
            ArithmeticMean(fname);
            break;
        default:
            cout << "Помилка! ";
        }
    } while (ch != '0');
    return 0;
}

// /Users/mac/Desktop/Student/PTW/5/PTW_PR5.2A/PTW_PR5.2A/1.txt
