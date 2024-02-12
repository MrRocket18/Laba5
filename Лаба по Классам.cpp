
#include "Комплексне числа.h"
#include <iostream>
using namespace std;
int Menu(void)
{
    int select;
    do
    {
        system("CLS");
        cout << "Меню взаимодействия с компланарными числами" << endl << endl;
        cout << "1-добавление первого компланарного числа" << endl;
        cout << "2-добавление второго компланарного числа" << endl;
        cout << "3 - вычисление суммы первого и второго компланарного числа" << endl;
        cout << "4 - вычисление разности первого и второго компланарного числа( от первого вычитается второе) " << endl;
        cout << "5 - вычисление произведения первого и второго компланарного числа" << endl;
        cout << "6 - выход из программы" << endl;
        cout << "\tВыбор:";
        cin >> select;

    } while ((select < 1) or (select > 6));
    return select;
}
//void vvod(string *x1,string *y1, string *x2, string *y2)
//{
//    
//    cout << "Введите x для первого компланарного числа" << endl;
//    cin >> *x1;
//    cout << "Введите y для первого компланарного числа" << endl;
//    cin >> *y1;
//    cout << "Введите x для второго компланарного числа" << endl;
//    cin >> *x2;
//    cout << "Введите y для второго компланарного числа" << endl;
//    cin >> *y2;
//}

int main()
{
    setlocale(LC_ALL, "ru");
    complch complch2;
    int select; 
    do
    {
        select = Menu();
        switch (select)
        {
        case 1:
        {
            complch2.setZ1();
            break;
        }
        case 2:
        {
            complch2.setZ2();
            break;
        }
        case 3:
        {
            complch2.slozh();
            break;
        }
        case 4:
        {
            complch2.vichet();
            break;
        }
        case 5:
        {
            complch2.umno();
            break;
        }
        }
        if (select != 6)
        {
            cout << endl << endl;
            system("pause");
        }
    } while (select != 6);
    return EXIT_SUCCESS;
}


