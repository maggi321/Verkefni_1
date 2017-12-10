#ifndef REPOSITORIES_H
#define REPOSITORIES_H
#include "Topping.h"
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

    private:
        string file;
        vector<Topping> toppings;
};

#endif // REPOSITORIES_H
