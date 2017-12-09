#ifndef OTHERPRODUCTSREPOSITORY_H
#define OTHERPRODUCTSREPOSITORY_H

#include <vector>
#include "OtherProducts.h"


class OtherProductsRepository
{
    public:
        OtherProductsRepository();
        virtual ~OtherProductsRepository();

        void storeAllOtherProducts(const vector<OtherProducts> &otherproducts);
        vector<OtherProducts> retrieveAllOtherProducts();

    protected:

    private:
};

#endif // OTHERPRODUCTSREPOSITORY_H
