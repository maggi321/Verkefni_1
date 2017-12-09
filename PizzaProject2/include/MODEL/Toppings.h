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
        void write(ofstream& fout) const;
        void read(ifstream& fin);

        friend istream& operator >> (istream& in, Toppings& topping);
        friend ostream& operator << (ostream &out, const Toppings& topping);

    private:
        string name;
        double price;

};

#endif // TOPPINGS_H
