#ifndef SALA_H
#define SALA_H
#include<iostream>
#include "PizzaSize.h"
#include "Repositories.h"
using namespace std;

class Sala
{
    public:
        Sala();
        void retrive_pizza_size();
        vector<PizzaSize> load_pizza_size();


    private:
        vector<PizzaSize> pizza_sizes;
};

#endif // SALA_H
