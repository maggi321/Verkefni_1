#ifndef SERVICE_H
#define SERVICE_H
#include "Topping.h"
#include "PizzaSize.h"
#include "Medlaeti.h"
#include "Repositories.h"
#include "Gos.h"
#include "Afhendingarstadir.h"

//#include "Order.h"

class Service {
    public:
        Service();
        void add_topping(const Topping& topping);
        void add_pizza_size(const PizzaSize& pizza_size);
        void add_medlaeti(const Medlaeti& medlaeti);
        void add_gos(const Gos& gos);
        void add_afhendingarstadir(const Afhendingarstadir& afhendingarstadir);
        void add_pizzabotn(const PizzaBotn& pizzabotn);

        void add_order(string name);
        void add_order_end(string name);

        void add_tilbuinn(string name, string tommur, string botn, string alegg, string medlaeti, string gos, string verd, string greitt, string nafn, string breyta);

        vector<Topping> load_topping();
        vector<PizzaSize> load_pizza_size();
        vector<Medlaeti> load_medlaeti();
        vector<Gos> load_gos();
        vector<Afhendingarstadir> load_afhendingarstadir();
        vector<PizzaBotn> load_pizzabotn();
        vector<Order> find_order(string name);
        vector<Order> find_order_name(string nafn, string name);
        vector<Order> change_merking(string nafn, string name);
        vector<Order> find_tilbuinn(string name);

    private:
        Repositories topping_repo;
        Repositories pizza_size_repo;
        Repositories medlaeti_repo;
        Repositories gos_repo;
        Repositories afhendingarstadir_repo;
        Repositories pizzabotn_repo;

        Repositories order_repo;
};

#endif // SERVICE_H
