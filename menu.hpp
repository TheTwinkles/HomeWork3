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
private:
    void MenuOpenFile(customList &list);
    void MenuSaveFile(customList &list);

    void MenuDisplayList(customList &list);
    void MenuAddItem_toList(customList &list);
};

#endif // MENU_HPP
