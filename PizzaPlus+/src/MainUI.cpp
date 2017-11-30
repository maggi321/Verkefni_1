#include <iostream>
#include <fstream>
#include <string>
#include "MainUI.h"
#include "Pizza.h"
#include "Toppings.h"
//(../include/)
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
        cout << "f: Fletta upp" << endl;
        cout << "m: Merkja pantanir" << endl;
        cout << "q: Loka forrit" << endl;

        cin >> selection;
        cout << endl;

        if(selection == 's') {
            skraningUI();
        }
        else if(selection == 'f') {
            flettaUppUI();
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

        cout << "g: Grunnpizza (verd)"  << endl;
        cout << "a: Aleggstegundir" << endl;
        cout << "p: Pontun" << endl;
        cout << "q: Fara til baka" << endl;

        cin >> selection;
        cout << endl;

        if(selection == 'g') {
            Pizza pizza;
            pizza.makeGpizzaVerd();
        }
        else if(selection == 'a') {
            Toppings toppings;
            toppings.makeToppings();
        }
        else if(selection == 'p') {

        }
    }
}
void MainUI::flettaUppUI() {
    char selection = '\0';

    while(selection != 'q') {
        cout << "-------Fletta upp-------" << endl;
        cout << "========================" << endl;

        cout << "g: Grunnpizza (verd)"  << endl;
        cout << "a: Aleggstegundir" << endl;
        cout << "p: Pantanir" << endl;
        cout << "q: Fara til baka" << endl;

        cin >> selection;
        cout << endl;

        if(selection == 'g') {
            ifstream fin;
            string price;
            fin.open("grunnverd.txt");
            if(fin.is_open()) {
                cout << "Verd a Grunnpizzu er ";
                getline(fin, price);
                cout << price << endl;
                cout << endl;
                fin.close();
            }
            else {
                cout << "File could not be opened!" << endl;
            }
        }
        else if(selection == 'a') {
            ifstream fin;
            string toppings;
            fin.open("aleggstegundir.txt");
            if(fin.is_open()) {
                cout << "Aleggstegundir i kerfinu:" << endl;
                cout << "Vorunr" << '\t' << "Nafn" << '\t' << "Verd" << endl;
                while(!fin.eof()) {
                getline(fin, toppings);
                cout << toppings << endl;
                }
                fin.close();
            }
            else {
                cout << "File could not be opened!" << endl;
            }
        }
        else if(selection == 'p') {

        }
    }
}
