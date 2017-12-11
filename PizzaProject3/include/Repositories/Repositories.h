#ifndef REPOSITORIES_H
#define REPOSITORIES_H
#include "Topping.h"
#include "PizzaSize.h"
#include "Medlaeti.h"
#include "Gos.h"
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

class Repositories
{
    public:
        Repositories();
        void add_topping(const Topping& topping);
        void retrive_topping();
        vector<Topping> load_topping();

        void add_pizza_size(const PizzaSize& pizza_size);
        void retrive_pizza_size();
        vector<PizzaSize> load_pizza_size();

        void add_medlaeti(const Medlaeti& medlaeti);
        void retrive_medlaeti();
        vector<Medlaeti> load_medlaeti();

        void add_gos(const Gos& gos);
        void retrive_gos();
        vector<Gos> load_gos();

    private:
        string file;
        vector<Topping> toppings;
        vector<PizzaSize> pizza_sizes;
        vector<Medlaeti> medlaeti;
        vector<Gos> gos;
};

#endif // REPOSITORIES_H
