#ifndef CUSTOMLIST_HPP
#define CUSTOMLIST_HPP

#include "cpu.hpp"

class customList
{
private:
    CPU cpu; //элемент списка
    customList* next; //указатель на следующий элемент списка
    customList* prev; //указатель на предыдущий элемент списка
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
};

#endif // CUSTOMLIST_HPP
