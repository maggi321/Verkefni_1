#ifndef GOS_H
#define GOS_H
#include<iostream>
using namespace std;

class Gos {
    public:
        Gos();
        Gos(string name, int price);
        string get_name() const;
        int get_price() const;
        void set_name(string name);
        void set_price(int price);

        friend ostream& operator<< (ostream& out, const Gos& gos);
        friend istream& operator >>(istream& in, Gos gos);

    private:
        string name;
        int price;
};

#endif // GOS_H
