#include "Toppings.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

Toppings::Toppings() {
    name = " ";
    price = 0;
    howmany = 0;
}

Toppings::~Toppings() {
    //dtor
}
void Toppings::makeToppings() {
    Toppings toppings;
/*
    cout << "Nafn: ";
    cin >> toppings.name;
    cout << "verd: ";
    cin >> toppings.price;
*/
    cout << "Hve margar aleggstegundir vildu setja i kerfid ? ";
    cin >> howmany;
    ofstream fout;
    fout.open("aleggstegundir.txt", ios::app);

    if(fout.is_open()) {
        for(int i = 0; i < howmany; i++) {
            cout << "Nafn: ";
            cin >> toppings.name;
            cout << "verd: ";
            cin >> toppings.price;
            fout << toppings.name << " " << toppings.price << endl;
        }
        fout.close();
    }
    else {
        cout << "File could not be opened!" << endl;
    }
}
