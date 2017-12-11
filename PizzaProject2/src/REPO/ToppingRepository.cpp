#include "ToppingRepository.h"
#include <fstream>

ToppingRepository::ToppingRepository()
{
    //ctor
}

ToppingRepository::~ToppingRepository()
{
    //dtor
}

void ToppingRepository::storeAllToppings(const vector<Toppings> &toppings)
{
    ofstream fout;
    fout.open("aleggstegundir.bin", ios::binary);

    int toppingCount = toppings.size();

    fout.write((char*)(&toppingCount), sizeof(int));

    for(int i = 0; i < toppingCount; i++)
    {
        toppings[i].write(fout);
    }
    fout.close();

}
vector<Toppings> ToppingRepository::retrieveAllToppings() {
    vector<Toppings> toppings;
    Toppings topping;

    ifstream fin;
    fin.open("aleggstegundir.bin", ios::binary);

    if(fin.is_open())
    {
        int toppingCount;

        fin.read((char*)(&toppingCount), sizeof(int));

        for (int i = 0; i < toppingCount; i++)
        {
            topping.read(fin);
            toppings.push_back(topping);
        }
        fin.close();
    }

    return toppings;
}
