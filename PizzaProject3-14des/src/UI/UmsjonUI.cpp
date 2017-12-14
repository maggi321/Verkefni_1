#include "UmsjonUI.h"

UmsjonUI::UmsjonUI() {}

void UmsjonUI::displayUmsjonUI() {
    system("cls");
    char selection = '\0';

    while(selection != 'q') {
        cout << "--------Umsjon--------" << endl;
        cout << "======================" << endl;

        cout << "1: Skra pizzu staerd" << endl; ///(st�r�/botn) st�r� komi�(hafa botn l�ka ?).
        cout << "2. Skra pizza botn" << endl;///botn komi�.
        cout << "3: Skra aleggstegundir"  << endl; ///�leggstegundir komi�.
        cout << "4: Skra matsedil" << endl;
        cout << "5: Skra medlaeti" << endl; ///Me�l�ti komi�.
        cout << "6: Skra gos" << endl; ///Gos komi�.
        cout << "7: Skra afhendingarstadi" << endl; ///Afhendingarsta�ir komnir
        cout << "q: Til baka" << endl;

        cin >> selection;
        cout << endl;
        char select = 'y';

        if(selection == '1') {
            system("CLS");
            cout << "Pizzu staerdir og verd i kerfinu: " << endl;
            vector<PizzaSize> pizza_size = pizza_size_service.load_pizza_size();
            for (unsigned int i = 0; i < pizza_size.size(); i++){
                string tommur = pizza_size[i].get_tommur();
                int price = pizza_size[i].get_price();
                cout << "[" << i+1 << "] " << tommur << ", " << price << endl;
            }
            while(select == 'y') {
                cout << endl;
                cout << "Baeta vid pizzu staerd i kerfi (y/n) ? ";
                cin >> select;
                if(select == 'y') {
                    pizza_size_service.add_pizza_size(create_pizza_size());
                }
            }
        }

        else if (selection == '2') {
            system("CLS");
            cout << "Pizza botnar og verd i kerfi: " << endl;
            vector<PizzaBotn> pizzabotn = pizzabotn_service.load_pizzabotn();
            for (unsigned int i = 0; i < pizzabotn.size(); i++){
                string name = pizzabotn[i].get_name();
                int price = pizzabotn[i].get_price();
                cout << "[" << i+1 << "] " << name << ", " << price << endl;
            }
            while(select == 'y') {
                cout << endl;
                cout << "Baeta vid botn i kerfi (y/n) ? ";
                cin >> select;
                if(select == 'y') {
                    pizzabotn_service.add_pizzabotn(create_pizzabotn());
                }
            }
        }

        else if (selection == '3') {
            system("CLS");
            cout << "Aleggstegund og verd i kerfi: " << endl;
            vector<Topping> topping = topping_service.load_topping();
            for (unsigned int i = 0; i < topping.size(); i++){
                string name = topping[i].get_name();
                int price = topping[i].get_price();
                cout << "[" << i+1 << "] " << name << ", " << price << endl;
            }
            while(select == 'y') {
                cout << endl;
                cout << "Baeta vid aleggstegund i kerfi (y/n) ? ";
                cin >> select;
                if(select == 'y') {
                    topping_service.add_topping(create_topping());
                }
            }
        }

        else if(selection == '5') {
            system("CLS");
            cout << "Medlaeti og verd i kerfinu: " << endl;
            vector<Medlaeti> medlaeti = medlaeti_service.load_medlaeti();
            for (unsigned int i = 0; i < medlaeti.size(); i++){
                string name = medlaeti[i].get_name();
                int price = medlaeti[i].get_price();
                cout << "[" << i+1 << "] " << name << ", " << price << endl;
            }
            while(select == 'y') {
                cout << endl;
                cout << "Baeta vid medlaeti i kerfi (y/n) ? ";
                cin >> select;
                if(select == 'y') {
                    medlaeti_service.add_medlaeti(create_medlaeti());
                }
            }
        }
        else if(selection == '6') {
            system("CLS");
            cout << "Gos og verd i kerfi: " << endl;
            vector<Gos> gos = gos_service.load_gos();
            for (unsigned int i = 0; i < gos.size(); i++){
                string name = gos[i].get_name();
                int price = gos[i].get_price();
                cout << "[" << i+1 << "] " << name << ", " << price << endl;
            }
            while(select == 'y') {
                cout << endl;
                cout << "Baeta vid aleggstegund i kerfi (y/n) ? ";
                cin >> select;
                if(select == 'y') {
                    gos_service.add_gos(create_gos());
                }
            }
        }
        else if(selection == '7') {
            system("CLS");
            cout << "Afhendingarstadir i kerfi: " << endl;
            vector<Afhendingarstadir> afhendingarstadir = afhendingarstadir_service.load_afhendingarstadir();
            for (unsigned int i = 0; i < afhendingarstadir.size(); i++){
                string name = afhendingarstadir[i].get_name();
                int number = afhendingarstadir[i].get_number();
                cout << "[" << i+1 << "] " << name << ", " << number << endl;
            }
            while(select == 'y') {
                cout << endl;
                cout << "Baeta vid afhendingarstad (y/n) ? ";
                cin >> select;
                if(select == 'y') {
                    afhendingarstadir_service.add_afhendingarstadir(create_afhendingarstadir());
                }
            }

        }
        else if(selection == 'q') {
            system("cls");
        }
    }
}
Topping UmsjonUI::create_topping() {
    string name;
    int price;

    cout << "Nafn: ";
    cin >> name;
    cout << "Verd: ";
    cin >> price;

    Topping topping(name, price);
    return topping;
}
PizzaSize UmsjonUI::create_pizza_size() {
    string tommur;
    int price;

    cout << "Staerd i tommum: ";
    cin >> tommur;
    cout << "Verd: ";
    cin >> price;

    PizzaSize pizza_size(tommur, price);
    return pizza_size;
}
Medlaeti UmsjonUI::create_medlaeti() {
    string name;
    int price;

    cout << "Nafn: ";
    cin >> name;
    cout << "Verd: ";
    cin >> price;

    Medlaeti medlaeti(name, price);
    return medlaeti;
}
Gos UmsjonUI::create_gos() {
    string name;
    int price;

    cout << "Nafn: ";
    cin >> name;
    cout << "Verd: ";
    cin >> price;

    Gos gos(name, price);
    return gos;
}
Afhendingarstadir UmsjonUI::create_afhendingarstadir() {
    string name;
    int number;

    cout << "Gotuheiti: ";
    cin >> name;
    cout << "Numer: ";
    cin >> number;

    Afhendingarstadir afhendingarstadir(name, number);
    return afhendingarstadir;
}
PizzaBotn UmsjonUI::create_pizzabotn() {
    string name;
    int price;

    cout << "Tegund a botni: ";
    cin >> name;
    cout << "Verd: ";
    cin >> price;

    PizzaBotn pizzabotn(name, price);
    return pizzabotn;
}
