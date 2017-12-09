#include "Pizza.h"
#include <fstream>
//(../include/)

Pizza::Pizza() {

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

void Pizza::addTopping(Toppings topping)
{
    toppings.push_back(topping);
}

void Pizza::write(ofstream& fout) const
{
    int tCount = toppings.size();

    fout.write((char*)(&tCount), sizeof(int));

    for(int i = 0; i < tCount; i++)
    {
        toppings[i].write(fout);
    }

}
void Pizza::read(ifstream& fin)
{
    int tCount;
    fin.read((char*)(&tCount), sizeof(int));

    Toppings topping;
    for (int i = 0; i < tCount; i++)
    {
        topping.read(fin);
        addTopping(topping);
    }
}

istream& operator >> (istream& in, Pizza& pizza)
{

    int toppingCount;
    in >> toppingCount;

    Toppings topping;
    for (unsigned int i = 0; i < pizza.toppings.size(); i++)
    {
        in >> topping;
        pizza.addTopping(topping);
    }
    return in;


}
ostream& operator << (ostream &out, const Pizza& pizza)
{
    out << "Pizza with toppings:" << endl;

    for(unsigned int i = 0; i < pizza.toppings.size(); i++)
    {
        out << pizza.toppings[i] << endl;
    }
    return out;


}

