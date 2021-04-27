#ifndef MENU_HPP
#define MENU_HPP


class menu
{
public:
    menu(); //конструктор меню по умолчанию
    ~menu(); //деструктор меню по умолчанию

    menu(const menu &other) = delete; //запрет создания конструктора копирования меню

};

#endif // MENU_HPP
