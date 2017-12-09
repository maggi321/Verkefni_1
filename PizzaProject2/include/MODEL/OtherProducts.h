#ifndef OTHERPRODUCTS_H
#define OTHERPRODUCTS_H
#include <string>
#include <vector>
using namespace std;


class OtherProducts
{
    public:
        OtherProducts();
        virtual ~OtherProducts();
        void write(ofstream& fout) const;
        void read(ifstream& fin);

        friend istream& operator >> (istream& in, OtherProducts& otherproduct);
        friend ostream& operator << (ostream &out, const OtherProducts& otherproduct);

    private:
        string name;
        int price;

};

#endif // OTHERPRODUCTS_H
