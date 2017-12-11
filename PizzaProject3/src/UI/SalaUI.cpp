#include "SalaUI.h"
//#include "UmsjonUI.h"
//#include "Topping.h"
//#include "Pizza.h"
#include <vector>

SalaUI::SalaUI() {
    //ctor
}
SalaUI::~SalaUI() {
    //dtor
}
void SalaUI::displaySalaUI() {
    system("CLS");
    char selection = '\0';

    while(selection != 'q') {
        cout << "---------Sala---------" << endl;
        cout << "======================" << endl;

        cout << "1: Skra pontun"  << endl;
        cout << "2: Baeta vid pontun" << endl;
        cout << "3: Sja heildarverd pontunar" << endl;
        cout << "4: Skra sent eda sott" << endl;
        cout << "5: Merkja pontun greidda" << endl;
        cout << "6: Merkja pizzu a afhendingarstad" << endl;
        cout << "7: Skra athugasemdir" << endl;
        cout << "q: Til baka" << endl;

        cin >> selection;
        cout << endl;

        if (selection == '1') {
            system("CLS");
            Order order;
            order.order_pizza_size();

        }
        else if(selection == '2') {

        }
    }

    if(selection == 'q') {
        system("CLS");
    }
}
/*
void SalaUI::getOrder() {
    ToppingRepository toppingRepo;
    vector<Toppings> toppings = toppingRepo.retrieveAllToppings();

    Pizza pizza;

    int toppingSelection = -1;
    while(toppingSelection != 0)
    {
        cout << "Sladu inn vorunr aleggstegundar sem fara a pizzuna (0 til ad haetta)" << endl;
        for (unsigned int i = 0; i < toppings.size(); i++)
        {
            cout << "[" << i + 1 << "] " << toppings[i] << endl;
        }
        cin >> toppingSelection;

        if (toppingSelection > 0 && toppingSelection <= (int)toppings.size())
        {
            pizza.addTopping(toppings[toppingSelection - 1]);
        }
    }

    PizzaRepository pizzaRepo;
    pizzaRepo.storePizza(pizza);

    cout << endl;
}
*/
/*void Sala::getOrder()
{
    cout << "Aleggstegundir og verd: " << endl;
    string str;
    ifstream fin;

    fin.open("aleggstegundir.txt");
    if (fin.is_open())
    {
        while (!fin.eof())
        {
            getline(fin, str);
            cout << str << endl;
        }
    }
    fin.close();





}
*/
