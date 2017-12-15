#include "AfhendingUI.h"
#include <iostream>
using namespace std;

AfhendingUI::AfhendingUI() {
    //ctor
}

void AfhendingUI::displayAfhendingUI() {
system("CLS");
    bool loop = false;

    while(!loop) {
        cout << "--------Afhending--------" << endl;
        cout << "=======================" << endl;

        vector<Afhendingarstadir> afhendingarstadir = service.load_afhendingarstadir();
        for (unsigned int i = 0; i < afhendingarstadir.size(); i++){
            string name = afhendingarstadir[i].get_name();
            int number = afhendingarstadir[i].get_number();
            cout << i+1 << ": " << name << " " << number << endl;
        }
        unsigned int temp = (afhendingarstadir.size()+1);
        cout << temp << ": til ad fara til baka" << endl;
        cout << "Veldu thinn afhendingarstad: ";
        unsigned int x;
        cin >> x;
        if(x == temp) {
            loop = true;
            system("CLS");
        }
        else {
            for (unsigned int i = 0; i < afhendingarstadir.size(); i++){
                if(x-1 == i) {
                    stadur = afhendingarstadir[i].get_name();
                    number = afhendingarstadir[i].get_number();
                }
            }
            system("CLS");
            cout <<  stadur << endl;
            cout << "=======================" << endl;
            select = eftir_val();
            if(select == '1') {
                vector<Order> test = service.find_order(stadur);
                for (unsigned int i = 0; i < test.size(); i++){
                    string name = test[i].get_name();
                    string tommur = test[i].get_tommur();
                    string botn = test[i].get_botn();
                    string alegg = test[i].get_alegg();
                    string medlaeti = test[i].get_medlaeti();
                    string gos = test[i].get_gos();
                    string verd = test[i].get_verd();
                    string greitt = test[i].get_greitt();
                    string nafn = test[i].get_nafn();
                    //string merking = test[i].get_merking();
                    cout << "Stadur : " << name << endl;
                    cout << "Pizzan: " << tommur << " tommu " << botn << " botn med " <<  alegg << endl;
                    cout << "Medlaeti & gos: " << medlaeti << " og " << gos << endl;
                    cout << "Heildarverd: " << verd << endl;
                    cout << "greitt eda ogreitt: " << greitt << endl;
                    cout << "Nafn a pontun: " << nafn << endl << endl;
                    }
            }
            else if(select == '2') {
                vector<Order> test = service.find_tilbuinn(stadur);
                    for (unsigned int i = 0; i < test.size(); i++){
                        string name = test[i].get_name();
                        string tommur = test[i].get_tommur();
                        string botn = test[i].get_botn();
                        string alegg = test[i].get_alegg();
                        string medlaeti = test[i].get_medlaeti();
                        string gos = test[i].get_gos();
                        string verd = test[i].get_verd();
                        string greitt = test[i].get_greitt();
                        string nafn = test[i].get_nafn();
                        string breyta = test[i].get_breyta();
                        cout << "Stadur : " << name << endl;
                        cout << "Pizzan: " << tommur << " tommu " << botn << " botn med " <<  alegg << endl;
                        cout << "Medlaeti & gos: " << medlaeti << " og " << gos << endl;
                        cout << "Heildarverd: " << verd << endl;
                        cout << "greitt eda ogreitt: " << greitt << endl;
                        cout << "Nafn a pontun: " << nafn << endl;
                        cout << "Stada: " << breyta << endl;
                    }
                }
            else if(select == '3') {
                system("CLS");
                string nafn;
                cout << "Skrifadu nafn sem a pontun: ";
                cin >> nafn;
                vector<Order> test = service.find_tilbuinn_name(nafn, stadur);
                    for (unsigned int i = 0; i < test.size(); i++){
                        string name = test[i].get_name();
                        string tommur = test[i].get_tommur();
                        string botn = test[i].get_botn();
                        string alegg = test[i].get_alegg();
                        string medlaeti = test[i].get_medlaeti();
                        string gos = test[i].get_gos();
                        string verd = test[i].get_verd();
                        string greitt = test[i].get_greitt();
                        string nafn = test[i].get_nafn();
                        //string merking = test[i].get_merking();
                        cout << "Stadur : " << name << endl;
                        cout << "Pizzan: " << tommur << " tommu " << botn << " botn med " <<  alegg << endl;
                        cout << "Medlaeti & gos: " << medlaeti << " og " << gos << endl;
                        cout << "Heildarverd: " << verd << endl;
                        cout << "greitt eda ogreitt: " << greitt << endl;
                        cout << "Nafn a pontun: " << nafn << endl << endl;
                        if(greitt == "Ogreitt") {
                        cout << "Merkja pontun greitt (y/n) ? ";
                        cin >> select;
                        if(select == 'y') {
                            greitt = "Greitt";
                            cout << "Stadur : " << name << endl;
                            cout << "Pizzan: " << tommur << " tommu " << botn << " botn med " <<  alegg << endl;
                            cout << "Medlaeti & gos: " << medlaeti << " og " << gos << endl;
                            cout << "Heildarverd: " << verd << endl;
                            cout << "greitt eda ogreitt: " << greitt << endl;
                            cout << "Nafn a pontun: " << nafn << endl << endl;
                        }
                        else if(select == 'n') {

                        }
                        cout << "Merkja pontun afhent (y/n) ? ";
                        cin >> select;
                        if(select == 'y') {
                            breyta = "Afhent";
                            cout << "Stadur : " << name << endl;
                            cout << "Pizzan: " << tommur << " tommu " << botn << " botn med " <<  alegg << endl;
                            cout << "Medlaeti & gos: " << medlaeti << " og " << gos << endl;
                            cout << "Heildarverd: " << verd << endl;
                            cout << "greitt eda ogreitt: " << greitt << endl;
                            cout << "Nafn a pontun: " << nafn << endl;
                            cout << "Stada: " << breyta << endl << endl;
                        }
                        else if(select == 'n') {

                        }
                    }
                }
            }
            else if(select == 'q') {
                system("CLS");
            }
        }
    }
}
char AfhendingUI::eftir_val() {
    char selection = '\0';
    cout << "1: Fa lista af pontudum pizzum" << endl;
    cout << "2: Fa lista af tilbunum pontunum" << endl;
    cout << "3. Fa upp akvedna pontun" << endl;
    cout << "q: Til baka" << endl;

    cin >> selection;
    cout << endl;
    return selection;
}
