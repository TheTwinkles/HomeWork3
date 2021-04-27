#include "menu.hpp"

#include <iostream>

menu::menu()
{
    char n; //
    while(true)
    {
        std::cout <<
        "1)Открыть файл\n"
        "2)Сохранить файл\n"
        "3)Изменение записи\n"
        "4)Поиск\n"
        "5)Вывод списка на экран\n"
        "6)О программе\n"
        "q)Вывод" << std::endl;

        std::cin >> n;
        switch (n)
        {
            case 49:  break;
            case 50:  break;
            case 51:  break;
            case 52:  break;
            case 53:  break;
            case 54: std::cout << "Домашняя работа №3, Заболотнов Николай Владимирович "
                                   "ИЭУИС-2-6 \n" << std::endl;
                      break;
            case 113: exit(EXIT_SUCCESS);

            default: std::cerr << "Error: wrond menu command" << std::endl;
            }
        }
}

menu::~menu()
{
    system("cls");
}
