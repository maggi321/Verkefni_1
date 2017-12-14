#ifndef REPOSITORIES_H
#define REPOSITORIES_H
#include "Topping.h"
#include "PizzaSize.h"
#include "Medlaeti.h"
#include "Gos.h"
#include "Afhendingarstadir.h"
#include "PizzaBotn.h"
#include "Order.h"
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

class Repositories {
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

        void add_afhendingarstadir(const Afhendingarstadir& afhendingarstadir);
        void retrive_afhendingarstadir();
        vector<Afhendingarstadir> load_afhendingarstadir();

        void add_pizzabotn(const PizzaBotn& pizzabotn);
        void retrive_pizzabotn();
        vector<PizzaBotn> load_pizzabotn();

        void add_order(string name);
        void add_order_end(string name);
        void retrive_order();
        vector<Order> find_order(string name);
        vector<Order> find_order_name(string nafn, string name);
        void retrive_order_rewrite();
        vector<Order> change_merking(string nafn, string name);
        void add_tilbuinn(string name, string tommur, string botn, string alegg, string medlaeti, string gos, string verd, string greitt, string nafn, string breyta);

    private:
        string file;
        vector<Topping> toppings;
        vector<PizzaSize> pizza_sizes;
        vector<Medlaeti> medlaeti;
        vector<Gos> gos;
        vector<Afhendingarstadir> afhendingarstadir;
        vector<PizzaBotn> pizzabotn;
        vector<Order> order;
};

#endif // REPOSITORIES_H
