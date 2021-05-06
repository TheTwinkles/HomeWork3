#ifndef MENU_HPP
#define MENU_HPP

#include "cpu.hpp"
#include "customlist.hpp"

class menu
{
public:
    menu(); //конструктор меню по умолчанию, создает меню и отрисовывает его
    ~menu(); //деструктор меню по умолчанию

    menu(const menu &other) = delete; //запрет создания конструктора копирования меню

    //методы класса меню
    void show(customList &list);
    void MenuOpenFile(customList &list);
    void saveFile();
    void displayList();
    void addItem(CPU &adCPU);
};

#endif // MENU_HPP
