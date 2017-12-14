#ifndef MEDLAETI_H
#define MEDLAETI_H
#include<iostream>
using namespace std;

class Medlaeti {
    public:
        Medlaeti();
        Medlaeti(string name, int price);
        string get_name() const;
        int get_price() const;
        void set_name(string name);
        void set_price(int price);

        friend ostream& operator<< (ostream& out, const Medlaeti& medlaeti);
        friend istream& operator >>(istream& in, Medlaeti medlaeti);

    private:
        string name;
        int price;
};

#endif // MEDLAETI_H
