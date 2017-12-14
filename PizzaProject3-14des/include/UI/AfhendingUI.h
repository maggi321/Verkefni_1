#ifndef AFHENDINGUI_H
#define AFHENDINGUI_H
#include "Service.h"
#include <stdlib.h>

class AfhendingUI {
    public:
        AfhendingUI();
        void displayAfhendingUI();
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
