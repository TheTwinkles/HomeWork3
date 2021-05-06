#include "customlist.hpp"
#include "cpu.hpp"

#include <iostream>

customList::customList():
    size_of_list(1)
  , arr_Item(new Item[size_of_list])
  , head(nullptr)
  , tail(nullptr)
{
    for (int i = 0; i < size_of_list; i++)
    {
        arr_Item[i].cpu = CPU();
        arr_Item[i].next = nullptr;
        arr_Item[i].prev = nullptr;
    }
}

//customList::customList(const CPU sCPU): //?????????????
//    arr_Item[size_of_list].cpu(sCPU)
//{
//    //CPU(sCPU);
//}

//customList::customList(const CPU sCPU):
//    customList::Item::cpu(sCPU)
//{
//    item.next = nullptr;
//    item.prev = nullptr;
//}

customList::~customList()
{
    while (head) //пока по адресу начала списка что-то есть
    {
        tail = head->next;
        delete head;
        head = tail;
    }
}

void customList::addToList(CPU &adCPU)
{
    Item *temp = new Item; //выделение памяти под новый элемент списка
    temp->next = nullptr; //изначально по следующему адресу null_ptr
    temp->cpu = adCPU; //записываем значение в структуру

    if (head != nullptr) //если список не пустой
    {
        temp->prev = tail; //указываем адрес на предыдущий элемент в соотв. поле
        tail->next = temp; //указываем адрес следующего за хвостом элемента
        tail = temp; //меняем адрес хвоста
    }
    else //если список пустой
    {
        temp->prev = nullptr; //предыдущий элемент указывает в null_ptr
        head = temp;
        tail = temp; //голова=хвост=тот элемент, что сейчас добавили
    }
}

void customList::printList() const //customList &list
{
    Item *temp = tail; //временный указатель на адрес последнего элемента
    while (temp!=NULL) //поднимаемся пока не встретим конец(начало)
    {
        temp->cpu.show();
        temp = temp->prev; //записываем адрес предыдущего элемента
    }
    system("pause");
}
