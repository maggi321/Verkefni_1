#include "UmsjonUI.h"

UmsjonUI::UmsjonUI() {
    //ctor
}

void UmsjonUI::displayUmsjonUI() {
    system("cls");
    char selection = '\0';

    while(selection != 'q') {
        cout << "-------Umsjon-------" << endl;
        cout << "=======================" << endl;

        cout << "1: fletta upp alegg" << endl;
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

        }
        else if (selection == '2') {

        }
        else if(selection == '3') {
            system("cls");
            cout << "Aleggstegund og verd i kerfi: " << endl;
            vector<Topping> test = topping_service.load_topping();
            for (unsigned int i = 0; i < test.size(); i++){
                string name = test[i].get_name();
                int price = test[i].get_price();
                cout << "[" << i+1 << "] " << name << ", " << price << endl;
            }
            char select = 'y';
            while(select == 'y') {
                cout << endl;
                cout << "Baeta vid aleggstegund i kerfi (y/n) ? ";
                cin >> select;
                if(selection == 'y') {
                    topping_service.add_topping(create_topping());
                }
            }
        }
        else if(selection == '4') {

        }
        else if(selection == '5') {

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
Topping UmsjonUI::create_topping() {
    string name;
    int price;

    cout << "Name: ";
    cin >> name;
    cout << "Price: ";
    cin >> price;

    Topping topping(name, price);
    return topping;
}
