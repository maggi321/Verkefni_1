#ifndef SALAUI_H
#define SALAUI_H
#include "Order.h"
#include "PizzaSize.h"
#include <iostream>
#include <fstream>
<<<<<<< HEAD
#include <Service.h>
#include "PizzaSize.h"
=======
#include <stdlib.h>
>>>>>>> ba5a1cba6973b406503a2ddc93d5a8f7cfe9f183
using namespace std;


class SalaUI {
    public:
        SalaUI();
        virtual ~SalaUI();
<<<<<<< HEAD
        void displaySala();
        void getOrder();


    protected:
=======
        void displaySalaUI();
        //void getOrder();
>>>>>>> ba5a1cba6973b406503a2ddc93d5a8f7cfe9f183

    private:
        //PizzaSize create_pizza_size();
        Service pizza_size_service;
};

#endif // SALAUI_H
