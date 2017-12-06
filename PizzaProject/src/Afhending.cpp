#include "../include/Afhending.h"
#include <iostream>
using namespace std;

Afhending::Afhending()
{
    //ctor
}

Afhending::~Afhending()
{
    //dtor
}

void Afhending::displayAfhending()
{
    char selection = '\0';

    while(selection != 'q') {
        cout << "-------Afhending-------" << endl;
        cout << "=======================" << endl;

        cout << "1: Velja afhendingarstad"  << endl;
        cout << "2: Fa lista af pontudum pizzum" << endl;
        cout << "3: Fa upp tilbunar pantanir" << endl;
        cout << "4: Fa upp pontun" << endl;
        cout << "5: Merkja greidda" << endl;
        cout << "6: Merkja afhenta" << endl;
        cout << "q: Til baka" << endl;

        cin >> selection;
        cout << endl;
    }
}
