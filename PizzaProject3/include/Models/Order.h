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

        friend ostream& operator<< (ostream& out, const Order& order);

    private:
        string name;
        int price;

};

#endif // ORDER_H
