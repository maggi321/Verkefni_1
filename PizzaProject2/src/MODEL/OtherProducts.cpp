#include "OtherProducts.h"
#include <fstream>
#include <string>
#include <iostream>
//(../include/)
using namespace std;

OtherProducts::OtherProducts() {
    //dtor
}

OtherProducts::~OtherProducts() {

}

istream& operator >> (istream& in, OtherProducts& otherproduct)
{
    cout << "Vara: ";
    in >> ws;
    getline(in, otherproduct.name);

    cout << "Verd: ";
    in >> otherproduct.price;

    return in;
}

ostream& operator << (ostream &out, const OtherProducts& otherproduct)
{
    out << "Vara: " << otherproduct.name << " ";
    out << "Verd: " << otherproduct.price;

    return out;
}

void OtherProducts::write(ofstream& fout) const
{
    int stringLength = name.length() + 1;

    fout.write((char*)(&stringLength), sizeof(int));
    fout.write(name.c_str(), stringLength);

    fout.write((char*)(&price), sizeof(double));


}

void OtherProducts::read(ifstream& fin)
{
    int stringLength;

    fin.read((char*)(&stringLength), sizeof(int));
    char *str = new char[stringLength];

    fin.read(str, stringLength);

    name = str;

    fin.read((char*)(&price), sizeof(double));

    delete[] str;
}
