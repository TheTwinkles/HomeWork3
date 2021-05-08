#include "FileFunctions.hpp"
#include "customlist.hpp"

#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

void openFile(customList &list)
{
    fstream in_file("CPU.txt", ios_base::in); //открытие файлового потока

    //проверка открытия файла
    if(!in_file.is_open())
    {
        cerr << "Error opening file!" << endl;
        exit(EXIT_FAILURE);
    }

    //заполнение полей структуры парсингом строки
    string in_str; //цельная строка получаемая из файла
    while (!in_file.eof())
    {
        getline(in_file, in_str); //получение строки вида "...;...;...;...;"
        if (in_str.empty()) continue;

        stringstream file_str(in_str); //создание потока строк
        string record; //строка для хранения конкретной записи (;...;)
        const int num_of_rec = 7; //количество записей в цельной строке из файла
        string temp[num_of_rec]; //массив строк для хранения записей полученной парсингом
        int j = 0; //счетчик индекса для массива строк
        while (getline(file_str, record, ';')) //парсинг потока строк,
            //запись в строку record с разделителем ;
        {
            temp[j] = record;
            j++;
        }
        CPU cpu; //добавляемый объект
        //заполнение полей объекта данными
        cpu.setManufacturer(temp[0]);
        cpu.setCost(stoi(temp[1]));
        cpu.setSocket(temp[2]);
        cpu.setCore_num(stoi(temp[3]));
        cpu.setProc_speed(stoi(temp[4]));
        cpu.setMem_type(temp[5]);
        cpu.setMem_freq(stoi(temp[6]));

        list.addToList(cpu); //добавление объекта в список
    }
    cout << "File Opened Sucessfully" << endl;
    in_file.close();
    system("pause");
    return;
}

void saveFile(customList &list)
{
    fstream out_file("CPU.txt", ios::out); //открытие файлового потока

    //проверка открытия файла
    if (!out_file.is_open())
    {
        cerr << "Error opening file!" << endl;
        exit(EXIT_FAILURE);
    }

    customList::Item *temp = list.head;
    while (temp!=NULL) //поднимаемся пока не встретим конец(начало)
    {
        //запись данных в файл
        out_file << temp->cpu.getManufacturer() << ';'
                 << temp->cpu.getCost() << ';'
                 << temp->cpu.getSocket() << ';'
                 << temp->cpu.getCore_num() << ';'
                 << temp->cpu.getProc_speed() << ';'
                 << temp->cpu.getMem_type() << ';'
                 << temp->cpu.getMem_freq() << ';' << endl;
        temp = temp->next; //записываем адрес предыдущего элемента
    }
    cout << "File was saved successfully" << endl;
    out_file.close();
    system("pause");
    return;
}
