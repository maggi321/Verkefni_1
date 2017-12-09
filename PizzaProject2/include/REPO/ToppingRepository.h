#ifndef TOPPINGREPOSITORY_H
#define TOPPINGREPOSITORY_H

#include <vector>
#include "Toppings.h"


class ToppingRepository
{
    public:
        ToppingRepository();
        virtual ~ToppingRepository();

        void storeAllToppings(const vector<Toppings> &toppings);
        vector<Toppings> retrieveAllToppings();

    protected:

    private:
};

#endif // TOPPINGREPOSITORY_H
