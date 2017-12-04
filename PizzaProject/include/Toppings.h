#ifndef TOPPINGS_H
#define TOPPINGS_H
#include <string>
#include <vector>
using namespace std;

class Toppings
{
    public:
        Toppings();
        virtual ~Toppings();
        void makeToppings();
        string getName();

    private:
        vector <string> name;
        vector <int> price;
        int howmany;
        int id;
};

#endif // TOPPINGS_H

