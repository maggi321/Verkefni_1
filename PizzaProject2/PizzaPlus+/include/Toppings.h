#ifndef TOPPINGS_H
#define TOPPINGS_H
#include <string>
using namespace std;

class Toppings
{
    public:
        Toppings();
        virtual ~Toppings();
        void set_id(int id);
        void set_name(string name);
        void set_price(int price);
        void makeToppings();

    private:
        string name;
        int price;
        int howmany;
        int id;
};

#endif // TOPPINGS_H
