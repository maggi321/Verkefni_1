#ifndef ORDER_H
#define ORDER_H
#include<iostream>
using namespace std;

class Order {
    public:
        Order();
        Order(string name, int price);
        string get_name() const;
        int get_price() const;
        void set_name(string name);
        void set_price(int price);

        string get_place() const;
        string get_tommur() const;
        string get_botn() const;
        string get_alegg() const;
        string get_medlaeti() const;
        string get_gos() const;
        string get_verd() const;
        string get_greitt() const;
        string get_nafn() const;
        void set_place(string place);
        void set_tommur(string tommur);
        void set_botn(string botn);
        void set_alegg(string alegg);
        void set_medlaeti(string medlaeti);
        void set_gos(string gos);
        void set_verd(string verd);
        void set_greitt(string greitt);
        void set_nafn(string nafn);

        friend ostream& operator<< (ostream& out, const Order& order);

    private:
        string name;
        int price;

        string place;
        string tommur;
        string botn;
        string alegg;
        string medlaeti;
        string gos;
        string verd;
        string greitt;
        string nafn;

};

#endif // ORDER_H
