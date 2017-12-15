#ifndef TOPPING_H
#define TOPPING_H
#include<iostream>
using namespace std;

class Topping {
    public:
        Topping();
        Topping(string name, int price);
        string get_name() const;
        int get_price() const;
        void set_name(string name);
        void set_price(int price);

        friend ostream& operator<< (ostream& out, const Topping& topping);
        friend istream& operator >>(istream& in, Topping topping);

    private:
        string name;
        int price;
};

#endif // TOPPING_H
