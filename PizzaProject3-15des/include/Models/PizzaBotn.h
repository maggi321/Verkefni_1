#ifndef PIZZABOTN_H
#define PIZZABOTN_H
#include<iostream>
using namespace std;

class PizzaBotn
{   public:
        PizzaBotn();
        PizzaBotn(string name, int price);
        string get_name() const;
        int get_price() const;
        void set_name(string name);
        void set_price(int price);

        friend ostream& operator<< (ostream& out, const PizzaBotn& pizzabotn);
        friend istream& operator >>(istream& in, PizzaBotn pizzabotn);

    private:
        string name;
        int price;
};

#endif // PIZZABOTN_H
