#ifndef SERVICE_H
#define SERVICE_H
#include "Topping.h"
#include "Repositories.h"

class Service
{
    public:
        Service();
        void add_topping(const Topping& topping);

        vector<Topping> load_topping();

    private:

        Repositories topping_repo;
};

#endif // SERVICE_H
