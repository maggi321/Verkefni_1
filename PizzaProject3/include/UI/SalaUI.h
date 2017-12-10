#ifndef SALAUI_H
#define SALAUI_H
#include <iostream>
#include <fstream>
using namespace std;


class SalaUI {
    public:
        SalaUI();
        virtual ~SalaUI();
        void displaySala();
        void getOrder();

    protected:

    private:
};

#endif // SALAUI_H
