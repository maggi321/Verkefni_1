#include "Order.h"

Order::Order() {}


int Order::order_pizza_size() {
    cout << "Vorunr  Tommur  Verd" << endl;
    vector<PizzaSize> pizza_size = pizza_size_service.load_pizza_size();
    for (unsigned int i = 0; i < pizza_size.size(); i++){
        int tommur = pizza_size[i].get_tommur();
        int price = pizza_size[i].get_price();
        cout << "[" << i+1 << "] " << '\t' << tommur << '\t' << price << endl;
    }
    cout << "Veldu Vorunr til ad setja staerd pizzu i pontun: ";
    unsigned int x;
    cin >> x;
    int tommur;
    int price;
    for (unsigned int i = 0; i < pizza_size.size(); i++){
        if(x-1 == i) {
            tommur = pizza_size[i].get_tommur();
            price = pizza_size[i].get_price();
        }
    }
    cout << "tetta er staerdin" << endl;
    cout << tommur << '\t' << price << endl << endl;
    return price;
}
int Order::order_pizza_botn() {
    cout << "Vorunr  Botn   Verd" << endl;
    vector<PizzaBotn> pizza_botn = pizzabotn_service.load_pizzabotn();
    for (unsigned int i = 0; i < pizza_botn.size(); i++){
        string name = pizza_botn[i].get_name();
        int price = pizza_botn[i].get_price();
        cout << "[" << i+1 << "] " << '\t' << name << '\t' << price << endl;
    }
    cout << "Veldu Vorunr til ad setja botn i pontun: ";
    unsigned int x;
    cin >> x;
    string name;
    int price;
    for (unsigned int i = 0; i < pizza_botn.size(); i++){
        if(x-1 == i) {
            name = pizza_botn[i].get_name();
            price = pizza_botn[i].get_price();
        }
    }
    cout << "tetta er botninn" << endl;
    cout << name << '\t' << price << endl << endl;
    return price;
}
int Order::order_pizza_topping() {
    int total = 0;
    cout << "Vorunr  Alegg   Verd" << endl;
    vector<Topping> toppings = topping_service.load_topping();
    for(unsigned int i = 0; i < toppings.size(); i++) {
        string name = toppings[i].get_name();
        int price = toppings[i].get_price();
        cout << "[" << i+1 << "] " << '\t' << name << '\t' << price << endl;
    }

    cout << "Veldu vorunr a aleggi (0 til ad haetta): ";
    unsigned int toppingSelection = -1;
    //string toppingName;
    //int toppingPrice;
    while (toppingSelection != 0) {
        cin >> toppingSelection;
        for (unsigned int i = 0; i < toppings.size(); i++) {
            if (toppingSelection - 1 == i) {
                string name = toppings[i].get_name();
                int toppingPrice = toppings[i].get_price();
                total += toppingPrice;
            }
        }
    }
    return total;
}
int Order::order_medlaeti() {
    char select = '\0';
    cout << "Viltu baeta vid medlaeti ? (y/n) ";
    cin >> select;
    if(select == 'y') {
        cout << "Vorunr  Medlaeti   Verd" << endl;
        vector<Medlaeti> medlaeti = medlaeti_service.load_medlaeti();
        for (unsigned int i = 0; i < medlaeti.size(); i++){
            string name = medlaeti[i].get_name();
            int price = medlaeti[i].get_price();
            cout << "[" << i+1 << "] " << '\t' << name << '\t' << price << endl;
        }
        cout << "Veldu Vorunr til ad setja medlaeti i pontun: ";
        unsigned int x;
        cin >> x;
        string name;
        int price;
        for (unsigned int i = 0; i < medlaeti.size(); i++){
            if(x-1 == i) {
                name = medlaeti[i].get_name();
                price = medlaeti[i].get_price();
            }
        }
        cout << "tetta er medlaetid" << endl;
        cout << name << '\t' << price << endl << endl;
        return price;
    }
    else {
        int price = 0;
        return price;
    }
}
int Order::order_gos() {
    char select = '\0';
    cout << "Viltu baeta vid gosi ? (y/n) ";
    cin >> select;
    if(select == 'y') {
        cout << "Vorunr  Gos   Verd" << endl;
        vector<Gos> gos = gos_service.load_gos();
        for (unsigned int i = 0; i < gos.size(); i++){
            string name = gos[i].get_name();
            int price = gos[i].get_price();
            cout << "[" << i+1 << "] " << '\t' << name << '\t' << price << endl;
        }
        cout << "Veldu Vorunr til ad setja gos i pontun: ";
        unsigned int x;
        cin >> x;
        string name;
        int price;
        for (unsigned int i = 0; i < gos.size(); i++){
            if(x-1 == i) {
                name = gos[i].get_name();
                price = gos[i].get_price();
            }
        }
        cout << "tetta er gosid" << endl;
        cout << name << '\t' << price << endl << endl;
        return price;
    }
    else {
        int price = 0;
        return price;
    }
}
void Order::create_order() {
    int total = 0;
    total += order_pizza_size();
    total += order_pizza_botn();
    total += order_pizza_topping();
    total += order_medlaeti();
    total += order_gos();
    cout << "heildarverd er " << total;

}
