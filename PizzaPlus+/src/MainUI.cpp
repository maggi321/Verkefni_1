#include "MainUI.h"
#include <iostream>
using namespace std;

MainUI::MainUI() {
    //ctor
}
MainUI::~MainUI() {
    //dtor
}
void MainUI::StartUI () {
    char selection = '\0';

    while(selection != 'q') {
        cout << "-------Main Menu-------" << endl;
        cout << "=======================" << endl;

        cout << "s: Skraningar"  << endl;
        cout << "f: Fletta upp pantanir" << endl;
        cout << "m: Merkja pantanir" << endl;
        cout << "q: Loka forrit" << endl;

        cin >> selection;
        cout << endl;

        if(selection == 's') {
            skraningUI();
        }
        else if(selection == 'f') {

        }
        else if(selection == 'm') {

        }
    }
}
void MainUI::skraningUI() {
    char selection = '\0';

    while(selection != 'q') {
        cout << "-------Skraningar-------" << endl;
        cout << "========================" << endl;

        cout << "g: Grunnpizza"  << endl;
        cout << "a: Alegg" << endl;
        cout << "p: Pontun" << endl;
        cout << "q: Fara til baka" << endl;

        cin >> selection;
        cout << endl;

        if(selection == 'g') {

        }
        else if(selection == 'a') {

        }
        else if(selection == 'p') {

        }
    }
}
