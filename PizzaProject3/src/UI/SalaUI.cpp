#include "SalaUI.h"

SalaUI::SalaUI() {
    //ctor
}
SalaUI::~SalaUI() {
    //dtor
}
void SalaUI::displaySalaUI() {
    system("CLS");
    char selection = '\0';

    while(selection != 'q') {
        cout << "---------Sala---------" << endl;
        cout << "======================" << endl;

        cout << "1: Skra pontun"  << endl; ///vantar í byrjun sækja/sent og lista upp pöntun í endann (skrá athugasemd?)
        cout << "q: Til baka" << endl;

        cin >> selection;
        cout << endl;

        if (selection == '1') {
            system("CLS");
            OrderUI orderui;
            orderui.create_order();

        }
        else if(selection == '2') {

        }
    }

    if(selection == 'q') {
        system("CLS");
    }
}
