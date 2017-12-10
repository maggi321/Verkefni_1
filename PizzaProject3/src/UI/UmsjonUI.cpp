#include "UmsjonUI.h"

UmsjonUI::UmsjonUI() {
    //ctor
}

void UmsjonUI::displayUmsjonUI() {
    system("cls");
    char selection = '\0';

    while(selection != 'q') {
        cout << "--------Umsjon--------" << endl;
        cout << "======================" << endl;

        cout << "1: skra pizzu steard" << endl; ///(stærð/botn) stærð komið(hafa botn líka ?).
        cout << "2: Skra aleggstegundir"  << endl; ///áleggstegundir komið.
        cout << "3: Skra matsedil" << endl;
        cout << "4: Skra medlaeti" << endl;
        cout << "5: Skra gos" << endl;
        cout << "6: Skra afhendingarstadi" << endl;
        cout << "q: Til baka" << endl;

        cin >> selection;
        cout << endl;
        char select = 'y';

        if(selection == '1') {
            system("CLS");
            cout << "Pizzu staerdir og verd i kerfinu" << endl;
            vector<PizzaSize> pizza_size = pizza_size_service.load_pizza_size();
            for (unsigned int i = 0; i < pizza_size.size(); i++){
                int tommur = pizza_size[i].get_tommur();
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
            system("cls");
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
        else if(selection == '3') {

        }
        else if(selection == '4') {

        }
        else if(selection == '5') {

        }
        else if(selection == '6') {

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
    int tommur;
    int price;

    cout << "Staerd i tommum: ";
    cin >> tommur;
    cout << "Verd: ";
    cin >> price;

    PizzaSize pizza_size(tommur, price);
    return pizza_size;
}
