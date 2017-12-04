#include "Umsjon.h"
#include "Pizza.h"
#include "Toppings.h"
#include <iostream>
using namespace std;

Umsjon::Umsjon()
{
    //ctor
}

Umsjon::~Umsjon()
{
    //dtor
}


void Umsjon::displayUmsjon()
{
    char selection = '\0';

    while(selection != 'q') {
        cout << "-------Umsjon-------" << endl;
        cout << "=======================" << endl;

        cout << "1: Skra grunnverd" << endl;
        cout << "2: Skra mismunandi gerdir af pizzum (staerd/botn)"  << endl;
        cout << "3: Skra aleggstegundir" << endl;
        cout << "4: Skra matsedil" << endl;
        cout << "5: Skra adrar vorur" << endl;
        cout << "6: Skra verd" << endl;
        cout << "7: Skra afhendingarstadi" << endl;
        cout << "q: Til baka" << endl;

        cin >> selection;
        cout << endl;

        if(selection == '1') {
            Pizza pizza;
            pizza.makeGpizzaVerd();
        }
        else if (selection == '2')
        {
            //Pizza pizza;
            //pizza.makeSizes();
        }
        else if(selection == '3') {
            Toppings toppings;
            toppings.makeToppings();
        }
    }

}
