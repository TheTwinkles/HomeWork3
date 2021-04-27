#include "FileFunctions.hpp"

#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

customList openFile()
{
    customList list;

    fstream in_file("CPU.txt", ios_base::in); //открытие файлового потока

    //проверка открытия файла
    if(!in_file.is_open())
    {
        cerr << "Error opening file!" << endl;
        exit(EXIT_FAILURE);
    }
    //заполнение полей структуры парсингом строки
    string in_str; //цельная строка получаемая из файла
    int i = 0; //счетчик для массива структур
    while (!in_file.eof())
    {
        getline(in_file, in_str); //получение строки вида "...;...;...;...;"
        if (in_str.empty()) continue;

        stringstream file_str(in_str); //создание потока строк
        string record; //строка для хранения конкретной записи (;...;)
        const int num_of_rec = 9; //количество записей в цельной строке из файла
        string temp[num_of_rec]; //массив строк для хранения записей полученной парсингом
        int j = 0; //счетчик индекса для массива строк
        while (getline(file_str, record, ';')) //парсинг потока строк,
            //запись в строку record с разделителем ;
        {
            temp[j] = record;
            j++;
        }

}
