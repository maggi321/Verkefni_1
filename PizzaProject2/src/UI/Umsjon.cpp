#include "Umsjon.h"

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
    system("cls");
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
            addToppings();
        }
        else if(selection == '4') {

        }
        else if(selection == '5') {
            addOtherProducts();
        }
        else if(selection == '6') {

        }
        else if(selection == '7') {

        }
    }

    if(selection == 'q') {
    system("cls");
    }
}


void Umsjon::addToppings()
{
    vector<Toppings> toppings = toppingRepo.retrieveAllToppings();

    cout << "Aleggstegundir og verd: " << endl;

    for (unsigned int i = 0; i < toppings.size(); i++)
    {
        cout << "[" << i+1 << "] " << toppings[i] << endl;
    }

    char selection = 'y';
    Toppings topping;
    while (selection == 'y')
    {
        cout << endl;

        cout << "Baeta vid aleggstegund (y)? ";
        cin >> selection;
        if (selection == 'y')
        {
            cin >> topping;
            toppings.push_back(topping);
        }
    }
    toppingRepo.storeAllToppings(toppings);


}

void Umsjon::addOtherProducts()
{
    vector<OtherProducts> otherproducts = otherRepo.retrieveAllOtherProducts();

    cout << "Adrar vorur: " << endl;

    for (unsigned int i = 0; i < otherproducts.size(); i++)
    {
        cout << "[" << i+1 << "] " << otherproducts[i] << endl;
    }

    char selection = 'y';
    OtherProducts otherproduct;
    while (selection == 'y')
    {
        cout << endl;

        cout << "Baeta vid nyrri voru (y)? ";
        cin >> selection;
        if (selection == 'y')
        {
            cin >> otherproduct;
            otherproducts.push_back(otherproduct);
        }
    }
    otherRepo.storeAllOtherProducts(otherproducts);


}



