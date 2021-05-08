#ifndef MENU_HPP
#define MENU_HPP

#include "cpu.hpp"
#include "customlist.hpp"

class menu
{
public:
    menu(); //конструктор меню по умолчанию
    ~menu(); //деструктор меню по умолчанию

    menu(const menu &other) = delete; //запрет создания конструктора копирования меню

    //методы класса меню
    void show(customList &list); //метод отображения меню
private:
    //методы интерфейса меню
    inline void MenuOpenFile(customList &list);
    inline void MenuSaveFile(customList &list);

    inline void MenuDisplayList(customList &list);
    void MenuAddItem_toList(customList &list);
    void MenuSearchItemInList(customList &list);
};

#endif // MENU_HPP
