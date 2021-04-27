#include "menu.hpp"

#include <iostream>

menu::menu()
{

}

void menu::show()
{
    char n; //
    while(true)
    {
        std::cout <<
        "1)Open File\n"
        "2)Save File\n"
        "3)Print to screen\n"
        "4)Add Item\n"
        "5)Search\n"
        "6)About\n"
        "q)Exit" << std::endl;

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

void menu::addItem()
{

}

menu::~menu()
{
    system("cls");
}
