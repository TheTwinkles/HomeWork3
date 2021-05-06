#ifndef CUSTOMLIST_HPP
#define CUSTOMLIST_HPP

#include "cpu.hpp"

class customList
{
public:
    struct Item //элемент списка
    {
        int id;
        CPU cpu;
        Item* next; //указатель на следующий элемент списка
        Item* prev; //указатель на предыдущий элемент списка
    };

private:
    int size_of_list; //размер списка
    Item *arr_Item; //создание массива элементов списка
    Item* head;
    Item* tail;

public:
    customList(); //конструктор списка по умолчанию
    //customList(const CPU sCPU); //конструктор списка с параметром

    //запрет создания конструктора копирования и перегрузки оператора =
    customList(const customList &other);
    void operator=(const customList&) = delete;

    ~customList(); //деструктор по умолчанию

    void addToList(CPU &adCPU); //метод добавления элемента в список

    void printList() const; //customList &list

};

#endif // CUSTOMLIST_HPP
