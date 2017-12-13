#include "OrderUI.h"

OrderUI::OrderUI() {}
void OrderUI::order_afhendingarstadir() {
    vector<Afhendingarstadir> afhendingarstadir = afhendingarstadir_service.load_afhendingarstadir();
    for (unsigned int i = 0; i < afhendingarstadir.size(); i++){
        string name = afhendingarstadir[i].get_name();
        int number = afhendingarstadir[i].get_number();
        cout << i+1 << ": " << name << " " << number << endl;
    }
    cout << "Veldu numer a afhendingarstad: ";
    unsigned int x;
    cin >> x;
    for (unsigned int i = 0; i < afhendingarstadir.size(); i++){
        if(x-1 == i) {
            name = afhendingarstadir[i].get_name();
            number = afhendingarstadir[i].get_number();
        }
    }
    order_service.add_order(name);
}
int OrderUI::order_pizza_size() {
    system("CLS");
    cout << "Vorunr  Tommur  Verd" << endl;
    vector<PizzaSize> pizza_size = pizza_size_service.load_pizza_size();
    for (unsigned int i = 0; i < pizza_size.size(); i++){
        string tommur = pizza_size[i].get_tommur();
        int price = pizza_size[i].get_price();
        cout << "[" << i+1 << "] " << '\t' << tommur << '\t' << price << endl;
    }
    cout << "Veldu Vorunr til ad setja staerd pizzu i pontun: ";
    unsigned int x;
    cin >> x;
    for (unsigned int i = 0; i < pizza_size.size(); i++){
        if(x-1 == i) {
            tommur = pizza_size[i].get_tommur();
            price = pizza_size[i].get_price();
        }
    }
    order_service.add_order(tommur);
    return price;
}
int OrderUI::order_pizza_botn() {
    system("CLS");
    cout << "Vorunr  Botn   Verd" << endl;
    vector<PizzaBotn> pizza_botn = pizzabotn_service.load_pizzabotn();
    for (unsigned int i = 0; i < pizza_botn.size(); i++){
        name = pizza_botn[i].get_name();
        price = pizza_botn[i].get_price();
        cout << "[" << i+1 << "] " << '\t' << name << '\t' << price << endl;
    }
    cout << "Veldu Vorunr til ad setja botn i pontun: ";
    unsigned int x;
    cin >> x;
    for (unsigned int i = 0; i < pizza_botn.size(); i++){
        if(x-1 == i) {
            name = pizza_botn[i].get_name();
            price = pizza_botn[i].get_price();
        }
    }
    order_service.add_order(name);
    return price;
}
int OrderUI::order_pizza_topping() {
    system("CLS");
    int total = 0;
    cout << "Vorunr  Alegg   Verd" << endl;
    vector<Topping> toppings = topping_service.load_topping();
    for(unsigned int i = 0; i < toppings.size(); i++) {
        name = toppings[i].get_name();
        price = toppings[i].get_price();
        cout << "[" << i+1 << "] " << '\t' << name << '\t' << price << endl;
    }

    cout << "Veldu vorunr a aleggi (0 til ad haetta): ";
    unsigned int toppingSelection = -1;
    //string toppingName;
    //int toppingPrice;
    string temp = "";
    while (toppingSelection != 0) {
        cin >> toppingSelection;
        for (unsigned int i = 0; i < toppings.size(); i++) {
            if (toppingSelection - 1 == i) {
                name = toppings[i].get_name();
                int toppingPrice = toppings[i].get_price();
                total += toppingPrice;
                temp += name + ',';
            }
        }
    }
    order_service.add_order(temp);
    return total;
}
int OrderUI::order_medlaeti() {
    system("CLS");
    char select = '\0';
    cout << "Viltu baeta vid medlaeti ? (y/n) ";
    cin >> select;
    if(select == 'y') {
        cout << "Vorunr  Medlaeti   Verd" << endl;
        vector<Medlaeti> medlaeti = medlaeti_service.load_medlaeti();
        for (unsigned int i = 0; i < medlaeti.size(); i++){
            name = medlaeti[i].get_name();
            price = medlaeti[i].get_price();
            cout << "[" << i+1 << "] " << '\t' << name << '\t' << price << endl;
        }
        cout << "Veldu Vorunr til ad setja medlaeti i pontun: ";
        unsigned int x;
        cin >> x;
        for (unsigned int i = 0; i < medlaeti.size(); i++){
            if(x-1 == i) {
                name = medlaeti[i].get_name();
                price = medlaeti[i].get_price();
            }
        }
        order_service.add_order(name);
        return price;
    }
    else {
        int price = 0;
        return price;
    }
}
int OrderUI::order_gos() {
    system("CLS");
    char select = '\0';
    cout << "Viltu baeta vid gosi ? (y/n) ";
    cin >> select;
    if(select == 'y') {
        cout << "Vorunr  Gos   Verd" << endl;
        vector<Gos> gos = gos_service.load_gos();
        for (unsigned int i = 0; i < gos.size(); i++){
            name = gos[i].get_name();
            price = gos[i].get_price();
            cout << "[" << i+1 << "] " << '\t' << name << '\t' << price << endl;
        }
        cout << "Veldu Vorunr til ad setja gos i pontun: ";
        unsigned int x;
        cin >> x;
        for (unsigned int i = 0; i < gos.size(); i++){
            if(x-1 == i) {
                name = gos[i].get_name();
                price = gos[i].get_price();
            }
        }
        order_service.add_order(name);
        return price;
    }
    else {
        int price = 0;
        return price;
    }
}
void OrderUI::order_greitt() {
    char select = '\0';
    cout << "Merkja greitt (y/n): ";
    cin >> select;
    if(select == 'y') {
        name = "Greitt";
    }
    else if(select == 'n') {
        name = "Ogreitt";
    }
    order_service.add_order(name);
}
void OrderUI::order_name() {
    cout << "skrifadu nafn a pontun: ";
    cin >> name;
    order_service.add_order_end(name);
}
void OrderUI::create_order() {
    int total = 0;
    order_afhendingarstadir();
    total += order_pizza_size();
    total += order_pizza_botn();
    total += order_pizza_topping();
    total += order_medlaeti();
    total += order_gos();

    system("CLS");
    cout << "Heildarverd er " << total << " kronur" << endl;
    ostringstream str1;
    str1 << total;
    string sum = str1.str();
    order_service.add_order(sum);

    order_greitt();
    order_name();

}
