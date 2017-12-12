#include "../include/Toppings.h"
#include <fstream>
#include <string>
#include <iostream>
//(../include/)
using namespace std;

Toppings::Toppings() {
    name = "";
    price = 0;
    howmany = 0;
    id = 100;
}

Toppings::~Toppings() {
    //dtor
}
void Toppings::set_id(int id) {
    this->id = id;
}
void Toppings::set_name(string name) {
    this->name = name;
}
void Toppings::set_price(int price) {
    this->price = price;
}
void Toppings::makeToppings() {
    Toppings toppings;

    cout << "Hve margar aleggstegundir vildu setja i kerfid ? ";
    cin >> howmany;
    ofstream fout;
    fout.open("aleggstegundir.txt", ios::app);

    if(fout.is_open()) {
        for(int i = 0; i < howmany; i++) {
            toppings.id += i;
            cout << "Nafn: ";
            cin >> toppings.name;
            cout << "verd: ";
            cin >> toppings.price;
            fout << toppings.id << '\t' << toppings.name << '\t' << toppings.price << endl;
        }
        fout.close();
    }
    else {
        cout << "File could not be opened!" << endl;
    }
}
