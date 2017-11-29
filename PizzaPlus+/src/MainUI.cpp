#include "MainUI.h"
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
void MainUI::StartUI () {
    char selection = '\0';

        cout << "-------Main Menu-------" << endl;
        cout << "=======================" << endl;

    while(selection != 'q') {

        cout << "s: Skraningar"  << endl;
        cout << "f: fletta upp pantanir" << endl;
        cout << "m: merkja pantanir" << endl;
        cout << "q: loka forrit" << endl;

        cin >> selection;

        if(selection == 's') {

        }
        else if(selection == 'f') {

        }
        else if(selection == 'm') {

        }
    }
}
