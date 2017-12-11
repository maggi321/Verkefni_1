#ifndef SALAUI_H
#define SALAUI_H
#include <iostream>
#include <fstream>
#include <Service.h>
#include "PizzaSize.h"
using namespace std;


class SalaUI {
    public:
        SalaUI();
        virtual ~SalaUI();
        void displaySala();
        void getOrder();


    protected:

    private:
        //PizzaSize create_pizza_size();
        Service pizza_size_service;
};

#endif // SALAUI_H
