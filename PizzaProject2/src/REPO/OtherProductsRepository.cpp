#include "OtherProductsRepository.h"
#include <fstream>

OtherProductsRepository::OtherProductsRepository()
{
    //ctor
}

OtherProductsRepository::~OtherProductsRepository()
{
    //dtor
}

void OtherProductsRepository::storeAllOtherProducts(const vector<OtherProducts> &otherproducts)
{
    ofstream fout;
    fout.open("adradvorur.bin", ios::binary);

    int otherProductsCount = otherproducts.size();

    fout.write((char*)(&otherProductsCount), sizeof(int));

    for(int i = 0; i < otherProductsCount; i++)
    {
        otherproducts[i].write(fout);
    }
    fout.close();

}

vector
<OtherProducts> OtherProductsRepository::retrieveAllOtherProducts() {

    vector<OtherProducts> otherproducts;
    OtherProducts otherproduct;

    ifstream fin;
    fin.open("adrarvorur.bin", ios::binary);

    if(fin.is_open())
    {
        int otherProductsCount;

        fin.read((char*)(&otherProductsCount), sizeof(int));

        for (int i = 0; i < otherProductsCount; i++) {
            otherproduct.read(fin);
            otherproducts.push_back(otherproduct);
        }
        fin.close();
    }

    return otherproducts;
}



