#ifndef SALAUI_H
#define SALAUI_H
#include "Order.h"
#include "PizzaSize.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;


class SalaUI {
    public:
        SalaUI();
        virtual ~SalaUI();
        void displaySalaUI();
        //void getOrder();

    private:
};

#endif // SALAUI_H
