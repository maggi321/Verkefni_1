#include "../include/Toppings.h"
#include <fstream>
#include <string>
#include <iostream>
//(../include/)
using namespace std;

Toppings::Toppings() {

}

Toppings::~Toppings() {
    //dtor
}
void Toppings::makeToppings()
{
    Toppings toppings;

    cout << "Hve margar aleggstegundir vildu setja i kerfid ? ";
    cin >> howmany;
    ofstream fout;
    fout.open("aleggstegundir.txt", ios::app);
    for(int i = 0; i < howmany; i++)
    {
        string topping;
        cout << "Nafn: ";
        cin >> topping;
        name.push_back(topping);
        int verd;
        cout << "Verd: ";
        cin >> verd;
        price.push_back(verd);
    }
        cout << endl;

    if (fout.is_open())
    {
        for (unsigned int i = 0; i < name.size(); i++)
        {
            fout << name[i] << " " << price[i] << " kr." << endl;
        }
    }
    else
    {
        cout << "File could not be opened!" << endl;
    }
}

