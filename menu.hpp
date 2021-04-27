#ifndef MENU_HPP
#define MENU_HPP


class menu
{
public:
    menu(); //конструктор меню по умолчанию, создает меню и отрисовывает его
    ~menu(); //деструктор меню по умолчанию

    menu(const menu &other) = delete; //запрет создания конструктора копирования меню

    //методы класса меню
    void openFile();
    void saveFile();
    void displayList();
};

#endif // MENU_HPP
