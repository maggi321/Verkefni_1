#ifndef SERVICE_H
#define SERVICE_H
#include "Topping.h"
#include "PizzaSize.h"
#include "Medlaeti.h"
#include "Repositories.h"
#include "Gos.h"
#include "Afhendingarstadir.h"

class Service {
    public:
        Service();
        void add_topping(const Topping& topping);
        void add_pizza_size(const PizzaSize& pizza_size);
        void add_medlaeti(const Medlaeti& medlaeti);
        void add_gos(const Gos& gos);
        void add_afhendingarstadur(const Afhendingarstadir& afhendingarstadur);

        vector<Topping> load_topping();
        vector<PizzaSize> load_pizza_size();
        vector<Medlaeti> load_medlaeti();
        vector<Gos> load_gos();
        vector<Afhendingarstadir> load_afhendingarstadur();

    private:

        Repositories topping_repo;
        Repositories pizza_size_repo;
        Repositories medlaeti_repo;
        Repositories gos_repo;
        Repositories afhendingarstadir_repo;
};

#endif // SERVICE_H
