#include "Bakstur.h"
#include <iostream>
using namespace std;

Bakstur::Bakstur()
{
    //ctor
}

Bakstur::~Bakstur()
{
    //dtor
}

void Bakstur::displayBakstur()
{
    system("cls");
    char selection = '\0';

    while(selection != 'q') {
        cout << "-------Bakstur-------" << endl;
        cout << "=======================" << endl;

        cout << "1: Velja afhendingarstad"  << endl;
        cout << "2: Fa lista af pontudum pizzum" << endl;
        cout << "3: Fa upp pantada pizzu" << endl;
        cout << "4: Merkja i vinnslu" << endl;
        cout << "5: Merkja tilbuna" << endl;
        cout << "q: Til baka" << endl;

        cin >> selection;
        cout << endl;
    }

    if(selection == 'q') {
        system("cls");
    }
}
