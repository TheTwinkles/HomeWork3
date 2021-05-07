#include <iostream>

#include "menu.hpp"
#include "customlist.hpp"

using namespace std;

int main()
{
    system("mode con cols=100 lines=25");

    menu mainMenu;
    customList MainList;

    mainMenu.show(MainList);

    return 0;
}
