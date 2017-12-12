#ifndef PIZZASIZE_H
#define PIZZASIZE_H
#include<iostream>
using namespace std;

class PizzaSize {
    public:
        PizzaSize();
        PizzaSize(string tommur, int price);
        string get_tommur() const;
        int get_price() const;
        void set_tommur(string tommur);
        void set_price(int price);

        friend ostream& operator<< (ostream& out, const PizzaSize& pizza_size);
        friend istream& operator >>(istream& in, PizzaSize pizza_size);

    private:
        string tommur;
        int price;
};

#endif // PIZZASIZE_H
