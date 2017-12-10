#include "Repositories.h"

Repositories::Repositories()
{
    //ctor
}
void Repositories::add_topping(const Topping& topping) {
    ofstream fout;
    fout.open("topping.txt", ios::app);
    if(fout.is_open()) {
        fout << topping;
        fout.close();
    }
    else {
        cout << "File write error!" << endl;
    }
}
void Repositories::retrive_topping() {
    ifstream fin;
    fin.open("topping.txt");

    if(fin.is_open()) {
        while(!fin.eof()) {
            Topping T;
            fin >> file;
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
        cout << "File not opened!" << endl;
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
        cout << "File write error!" << endl;
    }
}
void Repositories::retrive_pizza_size() {
    ifstream fin;
    fin.open("pizzasize.txt");

    if(fin.is_open()) {
        while(!fin.eof()) {
            PizzaSize PS;
            fin >> file;
            stringstream ss(file);
            string item;
            int counter = 0;

            while(getline(ss, item, ',')) {
                if(counter == 0) {
                    string s = item;
                    stringstream testing(s);
                    int x = 0;
                    testing >> x;
                    PS.set_tommur(x);
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
        cout << "File not opened!" << endl;
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
