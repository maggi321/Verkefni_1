#include "Toppings.h"
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

istream& operator >> (istream& in, Toppings& topping)
{
    cout << "Nafn: ";
    in >> ws;
    getline(in, topping.name);

    cout << "Verd: ";
    in >> topping.price;

    return in;
}

ostream& operator << (ostream &out, const Toppings& topping)
{
    out << "Alegg: " << topping.name << " ";
    out << "Verd: " << topping.price;

    return out;
}

void Toppings::write(ofstream& fout) const
{
    int stringLength = name.length() + 1;

    fout.write((char*)(&stringLength), sizeof(int));
    fout.write(name.c_str(), stringLength);

    fout.write((char*)(&price), sizeof(double));


}

void Toppings::read(ifstream& fin)
{
    int stringLength;

    fin.read((char*)(&stringLength), sizeof(int));
    char *str = new char[stringLength];

    fin.read(str, stringLength);

    name = str;

    fin.read((char*)(&price), sizeof(double));

    delete[] str;
}












/*void Toppings::makeToppings()
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
            fout << name[i] << " " << price[i] << endl;
        }
    }
    else
    {
        cout << "File could not be opened!" << endl;
    }
}
*/

