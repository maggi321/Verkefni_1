#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>
using namespace std;

class Pizza
{
    public:
        Pizza();
        virtual ~Pizza();
        void makeGpizzaVerd();

    private:
        int price;
};

#endif // PIZZA_H
