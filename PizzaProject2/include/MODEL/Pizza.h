#ifndef PIZZA_H
#define PIZZA_H
#include "Toppings.h"
#include <iostream>
#include <vector>
using namespace std;

class Pizza
{
    public:
        Pizza();
        virtual ~Pizza();
        void makeGpizzaVerd();
        void addTopping(Toppings topping);

        void write(ofstream& fout) const;
        void read(ifstream& fin);

        friend istream& operator >> (istream& in, Pizza& pizza);
        friend ostream& operator << (ostream &out, const Pizza& pizza);


    private:
        vector<Toppings> toppings;
        int price;

};

#endif // PIZZA_H
