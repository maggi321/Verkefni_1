#include "../include/MainUI.h"
#include "../include/Umsjon.h"
#include "../include/Sala.h"
#include "../include/Bakstur.h"
#include "../include/Afhending.h"
#include <iostream>
using namespace std;

MainUI::MainUI()
{
    //ctor
}

MainUI::~MainUI()
{
    //dtor
}

void MainUI::displayMainUI()
{
    char selection = '\0';

    while(selection != 'q') {
        cout << "-------Main Menu-------" << endl;
        cout << "=======================" << endl;

        cout << "u: Umsjon"  << endl;
        cout << "s: Sala" << endl;
        cout << "b: Bakstur" << endl;
        cout << "a: Afhending" << endl;
        cout << "q: Loka forriti" << endl;

        cin >> selection;
        cout << endl;

        if(selection == 'u') {
            Umsjon umsjon;
            umsjon.displayUmsjon();
        }
        else if(selection == 's') {
            Sala sala;
            sala.displaySala();
        }
        else if(selection == 'b') {
            Bakstur bakstur;
            bakstur.displayBakstur();
        }
        else if (selection == 'a')
        {
            Afhending afhending;
            afhending.displayAfhending();
        }
    }

}
