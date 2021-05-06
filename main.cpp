#include <iostream>

#include "menu.hpp"
#include "customlist.hpp"

using namespace std;

int main()
{
    system("mode con cols=100 lines=50");

    menu mainMenu;
    customList MainList;

    mainMenu.show(MainList);
    /*cout << "Parametric Constructor Output" << endl;
    CPU cpu1("Intel",
             9900,
             "LGA1200",
             4,
             3600,
             "DDR4",
             2666);
    cpu1.show();
    return 0;*/

}
