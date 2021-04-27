#ifndef CUSTOMLIST_HPP
#define CUSTOMLIST_HPP

#include "cpu.hpp"

class customList
{
private:
    int size_of_list;
    struct Item //элемент списка
    {
        CPU cpu;
        Item* next; //указатель на следующий элемент списка
        Item* prev; //указатель на предыдущий элемент списка
    } *arr_Item = new Item[size_of_list]; //создание массива элементов списка
    Item* head;
    Item* tail;
public:

    customList(); //конструктор списка по умолчанию

    customList(const CPU sCPU); //конструктор списка с параметром

    //запрет создания конструктора копирования и перегрузки оператора =
    customList(const customList &other) = delete;
    void operator=(const customList&) = delete;

    ~customList(); //деструктор по умолчанию

    //геттеры и сеттеры
    void setCPU(const CPU sCPU);
    CPU getCPU() const;

    void addToList(CPU adCPU); //метод добавления элемента в список

};

#endif // CUSTOMLIST_HPP
