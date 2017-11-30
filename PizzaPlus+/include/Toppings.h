#ifndef TOPPINGS_H
#define TOPPINGS_H
#include <string>
using namespace std;

class Toppings
{
    public:
        Toppings();
        virtual ~Toppings();
        void makeToppings();

    private:
        string name;
        int price;
        int howmany;
        int id;
};

#endif // TOPPINGS_H
