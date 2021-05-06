#include "menu.hpp"
#include "FileFunctions.hpp"

#include <iostream>

menu::menu()
{

}

void menu::show(customList &list)
{
    char n; //переменная для ввода пункта меню
    while(true)
    {
        system("cls");
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
            case 49: MenuOpenFile(list); break;
            case 50: break;
            case 51: MenuDisplayList(list); break;
            case 52: break;
            case 53: break;
            case 54: std::cout << "Home Work №3" << std::endl; break;
            case 113: exit(EXIT_SUCCESS);

            default: std::cerr << "Error: wrong menu command" << std::endl;
        }
    }
}
////// !!!!!!!!!!!!!!!!!!!!!!! не читается производитель и цена !!!!!!!!!!!!!!
inline void menu::MenuOpenFile(customList &list)
{
    openFile(list);
}

inline void menu::MenuDisplayList(customList &list)
{
    list.printList();
}

void menu::MenuAddItem_toList(CPU &adCPU)
{
//addToList();
}

menu::~menu()
{

}
