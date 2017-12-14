#ifndef BAKSTURUI_H
#define BAKSTURUI_H
#include "Service.h"
#include <stdlib.h>

class BaksturUI {
    public:
        BaksturUI();
        void displayBaksturUI();
        char eftir_val();

    private:
        Service afhendingarstadir_service;
        string name;
        int number;
        char select;
        string stadur;

        string place;
        string tommur;
        string breyta;
};

#endif // BAKSTURUI_H
