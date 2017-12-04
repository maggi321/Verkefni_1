#include "../include/Pizza.h"
#include <fstream>
//(../include/)

Pizza::Pizza() {
    price = 0;
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
        fout << pizza.price << endl;
        fout.close();
    }
    else {
        cout << "File could not be opened!" << endl;
    }

}
