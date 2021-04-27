#include "customlist.hpp"
//#include "cpu.hpp"

customList::customList():
    head(nullptr), tail(nullptr)
{
    CPU();
    item.next = nullptr;
    item.prev = nullptr;
}

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

void customList::setCPU(const CPU sCPU)
{
    item.cpu = sCPU;
}

CPU customList::getCPU() const
{
    return item.cpu;
}

void customList::addToList(CPU adCPU)
{
    Item *temp = new Item; //Выделение памяти под новый элемент списка
    item.next = nullptr; //Указываем, что изначально по следующему адресу пусто
    temp->cpu = adCPU; //Записываем значение в структуру

    if (head!=NULL) //Если список не пуст
    {
        temp->prev = tail; //Указываем адрес на предыдущий элемент в соотв. поле
        tail->next = temp; //Указываем адрес следующего за хвостом элемента
        tail = temp; //Меняем адрес хвоста
    }
    else //Если список пустой
    {
        temp->prev = nullptr; //Предыдущий элемент указывает в пустоту
        head = temp;
        tail = temp; //Голова=Хвост=тот элемент, что сейчас добавили
    }
}

//void customList::addToList()
//{

//    customList* curListItem = listStart;

//    if(listStart == 0)
//    {
//        listStart = this;
//        return;
//    }
//    else
//    {
//        while (curListItem->item.next != 0)
//            curListItem = curListItem->item.next;

//      curListItem->item.next = this;
//     this->item.prev = curListItem;
// }
//}


