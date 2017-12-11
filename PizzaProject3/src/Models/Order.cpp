#include "Order.h"

Order::Order() {}


void Order::order_pizza_size() {
    cout << "Vorunr  Tommur   Verd" << endl;
    vector<PizzaSize> pizza_size = pizza_size_service.load_pizza_size();
    for (unsigned int i = 0; i < pizza_size.size(); i++){
        int tommur = pizza_size[i].get_tommur();
        int price = pizza_size[i].get_price();
        cout << "[" << i+1 << "] " << '\t' << tommur << '\t' << price << endl;
    }
    cout << "Veldu Vorunr til ad setja botn i pontun: ";
    int x;
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
    cout << tommur << '\t' << price << endl;
}
