#include "menu.hpp"
#include "FileFunctions.hpp"

#include <iostream>
#include <sstream>

menu::menu()
{

}

void menu::show(customList &MList)
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
            case 49: MenuOpenFile(MList); break;
            case 50: MenuSaveFile(MList); break;
            case 51: MenuDisplayList(MList); break;
            case 52: MenuAddItem_toList(MList); break;
            case 53: MenuSearchItemInList(MList); break;
            case 54: std::cout << "Home Work №3, Zabolotnov N.V. IEUIS-2-6"
                               << std::endl;
                               break;
            case 113: exit(EXIT_SUCCESS);

            default: std::cerr << "Error: wrong menu command" << std::endl;
        }
    }
}
//интерфейс меню
inline void menu::MenuOpenFile(customList &list)
{
    openFile(list);
}

inline void menu::MenuSaveFile(customList &list)
{
    saveFile(list);
}

inline void menu::MenuDisplayList(customList &list)
{
    list.printList();
}

void menu::MenuAddItem_toList(customList &list)
{
    std::cout << "Input CPU info in line of the following type: ...;...;"
                    "(up to 7 positions)" << std::endl;

    std::string in_str; //строка с данными процессора

    std::cin >> in_str;

    std::stringstream in_stream(in_str); //создание потока строк
    std::string record; //строка для хранения конкретной записи (;...;)
    std::string temp[7]; //массив строк для хранения записей полученной парсингом
    int j = 0; //счетчик индекса для массива строк
    while (getline(in_stream, record, ';')) //парсинг потока строк,
        //запись в строку record с разделителем ;
    {
        temp[j] = record;
        j++;
    }
    CPU addCPU; //добавляемый объект
    //заполнение полей объекта данными
    addCPU.setManufacturer(temp[0]);
    addCPU.setCost(stoi(temp[1]));
    addCPU.setSocket(temp[2]);
    addCPU.setCore_num(stoi(temp[3]));
    addCPU.setProc_speed(stoi(temp[4]));
    addCPU.setMem_type(temp[5]);
    addCPU.setMem_freq(stoi(temp[6]));

    list.addToList(addCPU); //добавление объекта в список
}

void menu::MenuSearchItemInList(customList &list)
{
    std::cout << "Enter the position number in the search list: ";
    int pos;
    std::cin >> pos;
    list[pos]->cpu.show();
    system("pause");
}

menu::~menu()
{

}
