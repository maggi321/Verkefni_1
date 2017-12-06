#include "Pizza.h"
#include <fstream>
#include "Toppings.h"
#include <vector>
#include <iostream>
using namespace std;
//(../include/)

Pizza::Pizza() {
    price = 0;
    total = 0;
}

Pizza::~Pizza() {
    //dtor
}
void Pizza::makeGpizzaVerd() {
    Pizza pizza;

    cout << "Verd a grunnpizzu: ";
    cin >> pizza.price;
    cout << endl;

    ofstream fout;
    fout.open("grunnverd.txt");

    if(fout.is_open()) {
        fout << pizza.price;
        fout.close();
    }
    else {
        cout << "File could not be opened!" << endl;
    }
}
void Pizza::makePizzaOrder() {
    Pizza pizza;

    ifstream fin;
    int x;
    fin.open("grunnverd.txt");
    fin >> x;
    fin.close();
    pizza.total =+ x;

    Toppings toppings;
    string name;
    int id;
    int aPrice;
    int velja;
    fin.open("aleggstegundir.txt");
    cout << "Vorunr" << '\t' << "Nafn" << '\t' << "Verd" << endl;
    vector<Toppings> currenttoppings;
    while(!fin.eof()) {
        fin >> id >> name >> aPrice;
        toppings.set_id(id);
        toppings.set_name(name);
        toppings.set_price(price);
        currenttoppings.push_back(toppings);
        if(!fin.eof()) {
            cout << id << '\t' << name<< '\t' << aPrice << endl;
        }
    }
    cout << "sladu inn vorunr til ad setja alegg a pizzu :";
    cin >> velja;

    if(velja == currenttoppings.at(id)) {
        cout << name << " " << price;
    }
}
