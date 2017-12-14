#include "Repositories.h"

Repositories::Repositories() {}
void Repositories::add_topping(const Topping& topping) {
    ofstream fout;
    fout.open("topping.txt", ios::app);
    if(fout.is_open()) {
        fout << topping;
        fout.close();
    }
    else {
        cout << "File write error!" << endl; ///setja exception/villubod (ekki cout)
    }
}
void Repositories::retrive_topping() {
    ifstream fin;
    fin.open("topping.txt");

    if(fin.is_open()) {
        while(fin >> file) {
            Topping T;

            //fin >> file;
            stringstream ss(file);
            string item;
            int counter = 0;

            while(getline(ss, item, ',')) {
                if(counter == 0) {
                    T.set_name(item);
                }
                else if(counter == 1) {
                    string s = item;
                    stringstream testing(s);
                    int x = 0;
                    testing >> x;
                    T.set_price(x);
                }
                counter++;
            }
            toppings.push_back(T);

        }
        fin.close();
    }
    else {
        cout << "File not opened!" << endl; ///setja exception/villubod (ekki cout)
    }
}
vector<Topping> Repositories::load_topping() {
    toppings.clear();
    retrive_topping();
    vector<Topping> all_toppings;

    for(unsigned int i = 0; i < toppings.size(); i++) {
        all_toppings.push_back(toppings[i]);
    }
    return all_toppings;
}
void Repositories::add_pizza_size(const PizzaSize& pizza_size) {
    ofstream fout;
    fout.open("pizzasize.txt", ios::app);
    if(fout.is_open()) {
        fout << pizza_size;
        fout.close();
    }
    else {
        cout << "File write error!" << endl; ///setja exception/villubod (ekki cout)
    }
}
void Repositories::retrive_pizza_size() {
    ifstream fin;
    fin.open("pizzasize.txt");

    if(fin.is_open()) {
        while(fin >> file) {
            PizzaSize PS;
            //fin >> file;
            stringstream ss(file);
            string item;
            int counter = 0;

            while(getline(ss, item, ',')) {
                if(counter == 0) {
                    PS.set_tommur(item);
                }
                else if(counter == 1) {
                    string s = item;
                    stringstream testing(s);
                    int x = 0;
                    testing >> x;
                    PS.set_price(x);
                }
                counter++;
            }
            pizza_sizes.push_back(PS);
        }
        fin.close();
    }
    else {
        cout << "File not opened!" << endl; ///setja exception/villubod (ekki cout)
    }
}
vector<PizzaSize> Repositories::load_pizza_size() {
    pizza_sizes.clear();
    retrive_pizza_size();
    vector<PizzaSize> all_pizza_sizes;

    for(unsigned int i = 0; i < pizza_sizes.size(); i++) {
        all_pizza_sizes.push_back(pizza_sizes[i]);
    }
    return all_pizza_sizes;
}
void Repositories::add_medlaeti(const Medlaeti& medlaeti) {
    ofstream fout;
    fout.open("medlaeti.txt", ios::app);
    if(fout.is_open()) {
        fout << medlaeti;
        fout.close();
    }
    else {
        cout << "File write error!" << endl; ///setja exception/villubod (ekki cout)
    }
}
void Repositories::retrive_medlaeti() {
    ifstream fin;
    fin.open("medlaeti.txt");

    if(fin.is_open()) {
        while(fin >> file) {
            Medlaeti M;
            //fin >> file;
            stringstream ss(file);
            string item;
            int counter = 0;

            while(getline(ss, item, ',')) {
                if(counter == 0) {
                    M.set_name(item);
                }
                else if(counter == 1) {
                    string s = item;
                    stringstream testing(s);
                    int x = 0;
                    testing >> x;
                    M.set_price(x);
                }
                counter++;
            }
            medlaeti.push_back(M);
        }
        fin.close();
    }
    else {
        cout << "File not opened!" << endl; ///setja exception/villubod (ekki cout)
    }
}
vector<Medlaeti> Repositories::load_medlaeti() {
    medlaeti.clear();
    retrive_medlaeti();
    vector<Medlaeti> all_medlaeti;

    for(unsigned int i = 0; i < medlaeti.size(); i++) {
        all_medlaeti.push_back(medlaeti[i]);
    }
    return all_medlaeti;
}
void Repositories::add_gos(const Gos& gos) {
    ofstream fout;
    fout.open("gos.txt", ios::app);
    if(fout.is_open()) {
        fout << gos;
        fout.close();
    }
    else {
        cout << "File write error!" << endl; ///setja exception/villubod (ekki cout)
    }
}
void Repositories::retrive_gos() {
    ifstream fin;
    fin.open("gos.txt");

    if(fin.is_open()) {
        while(fin >> file) {
            Gos G;
            //fin >> file;
            stringstream ss(file);
            string item;
            int counter = 0;

            while(getline(ss, item, ',')) {
                if(counter == 0) {
                    G.set_name(item);
                }
                else if(counter == 1) {
                    string s = item;
                    stringstream testing(s);
                    int x = 0;
                    testing >> x;
                    G.set_price(x);
                }
                counter++;
            }
            gos.push_back(G);
        }
        fin.close();
    }
    else {
        cout << "File not opened!" << endl; ///setja exception/villubod (ekki cout)
    }
}
vector<Gos> Repositories::load_gos() {
    gos.clear();
    retrive_gos();
    vector<Gos> all_gos;

    for(unsigned int i = 0; i < gos.size(); i++) {
        all_gos.push_back(gos[i]);
    }
    return all_gos;
}
void Repositories::add_afhendingarstadir(const Afhendingarstadir& afhendingarstadir) {
    ofstream fout;
    fout.open("afhendingarstadur.txt", ios::app);
    if(fout.is_open()) {
        fout << afhendingarstadir;
        fout.close();
    }
    else {
        cout << "File write error!" << endl; ///setja exception/villubod (ekki cout)
    }
}
void Repositories::retrive_afhendingarstadir() {
    ifstream fin;
    fin.open("afhendingarstadur.txt");

    if(fin.is_open()) {
        while(fin >> file) {
            Afhendingarstadir A;

            //fin >> file;
            stringstream ss(file);
            string item;
            int counter = 0;

            while(getline(ss, item, ',')) {
                if(counter == 0) {
                    A.set_name(item);
                }
                else if(counter == 1) {
                    string s = item;
                    stringstream testing(s);
                    int x = 0;
                    testing >> x;
                    A.set_number(x);
                }
                counter++;
            }
            afhendingarstadir.push_back(A);

        }
        fin.close();
    }
    else {
        cout << "File not opened!" << endl; ///setja exception/villubod (ekki cout)
    }
}
vector<Afhendingarstadir> Repositories::load_afhendingarstadir() {
    afhendingarstadir.clear();
    retrive_afhendingarstadir();
    vector<Afhendingarstadir> all_afhendingarstadir;

    for(unsigned int i = 0; i < afhendingarstadir.size(); i++) {
        all_afhendingarstadir.push_back(afhendingarstadir[i]);
    }
    return all_afhendingarstadir;
}
void Repositories::add_pizzabotn(const PizzaBotn& pizzabotn) {
    ofstream fout;
    fout.open("pizzabotn.txt", ios::app);
    if(fout.is_open()) {
        fout << pizzabotn;
        fout.close();
    }
    else {
        cout << "File write error!" << endl; ///setja exception/villubod (ekki cout)
    }
}
void Repositories::retrive_pizzabotn() {
    ifstream fin;
    fin.open("pizzabotn.txt");

    if(fin.is_open()) {
        while(fin >> file) {
            PizzaBotn P;

            //fin >> file;
            stringstream ss(file);
            string item;
            int counter = 0;

            while(getline(ss, item, ',')) {
                if(counter == 0) {
                    P.set_name(item);
                }
                else if(counter == 1) {
                    string s = item;
                    stringstream testing(s);
                    int x = 0;
                    testing >> x;
                    P.set_price(x);
                }
                counter++;
            }
            pizzabotn.push_back(P);

        }
        fin.close();
    }
    else {
        cout << "File not opened!" << endl; ///setja exception/villubod (ekki cout)
    }
}
vector<PizzaBotn> Repositories::load_pizzabotn() {
    pizzabotn.clear();
    retrive_pizzabotn();
    vector<PizzaBotn> all_pizzabotn;

    for(unsigned int i = 0; i < pizzabotn.size(); i++) {
        all_pizzabotn.push_back(pizzabotn[i]);
    }
    return all_pizzabotn;
}

void Repositories::add_order(string name) {
    ofstream fout;
    fout.open("pantanir.txt", ios::app);
    if(fout.is_open()) {
        fout << name << "-";
        fout.close();
    }
    else {
        cout << "File write error!" << endl; ///setja exception/villubod (ekki cout)
    }
}
void Repositories::add_order_end(string name) {
    ofstream fout;
    fout.open("pantanir.txt", ios::app);
    if(fout.is_open()) {
        fout << name << "-merking-" << endl;
        fout.close();
    }
    else {
        cout << "File write error!" << endl; ///setja exception/villubod (ekki cout)
    }
}
void Repositories::retrive_order() {
    ifstream fin;
    fin.open("pantanir.txt");

    if(fin.is_open()) {
        while(fin >> file) {
            Order O;

            stringstream ss(file);
            string item;
            int counter = 0;

            while(getline(ss, item, '-')) {
                //O.set_name(item);
                if(counter == 0) {
                    O.set_name(item);
                }
                else if(counter == 1) {
                    O.set_tommur(item);
                }
                else if(counter == 2) {
                    O.set_botn(item);
                }
                else if(counter == 3) {
                    O.set_alegg(item);
                }
                else if(counter == 4) {
                    if(item == "Ekkert") {
                        item = "Ekkert medlaeti";
                        O.set_medlaeti(item);
                    }
                    else {
                        O.set_medlaeti(item);
                    }
                }
                else if(counter == 5) {
                    if(item == "Ekkert") {
                        item = "Ekkert medlaeti";
                        O.set_gos(item);
                    }
                    else {
                        O.set_gos(item);
                    }
                }
                else if(counter == 6) {
                    O.set_verd(item);
                }
                else if(counter == 7) {
                    O.set_greitt(item);
                }
                else if(counter == 8) {
                    O.set_nafn(item);
                }
                else if(counter == 9) {
                    //item;
                    //O.set_merking(item);
                }
                counter++;
            }
            order.push_back(O);

        }
        fin.close();
    }
    else {
        cout << "File not opened!" << endl; ///setja exception/villubod (ekki cout)
    }
}
vector<Order> Repositories::find_order(string name) {
    order.clear();
    retrive_order();
    vector<Order> allOrdersWithPlace;

    for (unsigned int i = 0; i < order.size(); i++){
        if (order[i].get_name() == name){
            allOrdersWithPlace.push_back(order[i]);
        }
    }
    return allOrdersWithPlace;
}
vector<Order> Repositories::find_order_name(string nafn, string name) {
    order.clear();
    retrive_order();
    vector<Order> allOrdersWithNafn;

    for (unsigned int i = 0; i < order.size(); i++){
        if (order[i].get_nafn() == nafn && order[i].get_name() == name){
            allOrdersWithNafn.push_back(order[i]);
        }
        else if(order[i].get_nafn() == nafn && order[i].get_name() != name) {
            cout << "No order on this name" << endl; ///setja exception/villubod (ekki cout)
            break;
        }
    }
    return allOrdersWithNafn;
}
void Repositories::retrive_order_rewrite() {
    ifstream fin;
    fin.open("pantanir.txt");

    if(fin.is_open()) {
        while(fin >> file) {
            Order O;

            stringstream ss(file);
            string item;
            int counter = 0;

            while(getline(ss, item, '-')) {
                if(counter == 0) {
                    O.set_name(item);
                }
                else if(counter == 1) {
                    O.set_tommur(item);
                }
                else if(counter == 2) {
                    O.set_botn(item);
                }
                else if(counter == 3) {
                    O.set_alegg(item);
                }
                else if(counter == 4) {
                    O.set_medlaeti(item);
                }
                else if(counter == 5) {
                    O.set_gos(item);
                }
                else if(counter == 6) {
                    O.set_verd(item);
                }
                else if(counter == 7) {
                    O.set_greitt(item);
                }
                else if(counter == 8) {
                    O.set_nafn(item);
                }
                else if(counter == 9) {
                    //O.set_merking(item);
                }
                counter++;
            }
            order.push_back(O);

        }
        fin.close();
    }
    else {
        cout << "File not opened!" << endl; ///setja exception/villubod (ekki cout)
    }
}
vector<Order> Repositories::change_merking(string nafn, string name) {
    order.clear();
    retrive_order_rewrite();
    vector<Order> allOrdersWithMerking;
    bool foundOrNot = false;
    for (unsigned int i = 0; i < order.size(); i++){
        if (order[i].get_nafn() == nafn && order[i].get_name() == name && order[i].get_merking() == false) {
            order[i].set_merking(false);
            foundOrNot = true;
            allOrdersWithMerking.push_back(order[i]);
            break;
        }
        else if (order[i].get_nafn() == nafn && order[i].get_name() == name && order[i].get_merking() == true) {
            order[i].set_merking(true);
            foundOrNot = true;
            allOrdersWithMerking.push_back(order[i]);
            break;
        }
    }
    if (foundOrNot == false){
        cout << "Order not found" << endl; ///setja exception/villubod (ekki cout)
    }
    return allOrdersWithMerking;
}
void Repositories::add_tilbuinn(string name, string tommur, string botn, string alegg, string medlaeti, string gos, string verd, string greitt, string nafn, string breyta) {
    ofstream fout;
    fout.open("tilbunpantanir.txt", ios::app);
    if(fout.is_open()) {
        fout << name << "-" << tommur << "-" << botn << "-" << alegg << "-" << medlaeti << "-";
        fout << gos << "-" << verd << "-" << greitt << "-" << nafn << "-" << breyta << "-" << endl;
        fout.close();
    }
    else {
        cout << "File write error!" << endl; ///setja exception/villubod (ekki cout)
    }
}

void Repositories::retrive_tilbuinn() {
    ifstream fin;
    fin.open("tilbunpantanir.txt");
    if(fin.is_open()) {
    while(fin >> file) {
        Order O;
        stringstream ss(file);
            string item;
            int counter = 0;

            while(getline(ss, item, '-')) {
                if(counter == 0) {
                    O.set_name(item);
                }
                else if(counter == 1) {
                    O.set_tommur(item);
                }
                else if(counter == 2) {
                    O.set_botn(item);
                }
                else if(counter == 3) {
                    O.set_alegg(item);
                }
                else if(counter == 4) {
                    O.set_medlaeti(item);
                }
                else if(counter == 5) {
                    O.set_gos(item);
                }
                else if(counter == 6) {
                    O.set_verd(item);
                }
                else if(counter == 7) {
                    O.set_greitt(item);
                }
                else if(counter == 8) {
                    O.set_nafn(item);
                }
                else if(counter == 9) {
                    O.set_breyta(item);
                }
                counter++;
            }
            order.push_back(O);

        }
        fin.close();
    }
    else {
        cout << "File not opened!" << endl; ///setja exception/villubod (ekki cout)
    }

}

vector<Order> Repositories::find_tilbuinn(string name) {
    order.clear();
    retrive_tilbuinn();
    vector<Order> allOrdersWithTilbuinn;

    for (unsigned int i = 0; i < order.size(); i++){
        if (order[i].get_name() == name){
            allOrdersWithTilbuinn.push_back(order[i]);
        }
    }
    return allOrdersWithTilbuinn;
}
