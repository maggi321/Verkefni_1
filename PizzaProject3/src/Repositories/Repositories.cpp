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
