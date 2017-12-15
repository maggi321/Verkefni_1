#include "BaksturUI.h"
#include <iostream>
using namespace std;

BaksturUI::BaksturUI() {
    //ctor
}

void BaksturUI::displayBaksturUI() {
    system("CLS");
    bool loop = false;

    while(!loop) {
        cout << "--------Bakstur--------" << endl;
        cout << "=======================" << endl;

        vector<Afhendingarstadir> afhendingarstadir = afhendingarstadir_service.load_afhendingarstadir();
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
                    name = afhendingarstadir[i].get_name();
                    number = afhendingarstadir[i].get_number();
                }
            }
            system("CLS");
            cout <<  name << endl;
            cout << "=======================" << endl;
            select = eftir_val();
            if(select == '1') {
                vector<Order> test = afhendingarstadir_service.find_order(name);
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
                    string merking = test[i].get_merking();
                    cout << "Stadur : " << name << endl;
                    cout << "Pizzan: " << tommur << " tommu " << botn << " botn med " <<  alegg << endl;
                    cout << "Medlaeti & gos: " << medlaeti << " og " << gos << endl;
                    cout << "Heildarverd: " << verd << endl;
                    cout << "greitt eda ogreitt: " << greitt << endl;
                    cout << "Nafn a pontun: " << nafn << endl << endl;
                    //cout << "Merking: " << merking << endl << endl;
                    }
            }
            else if(select == '2') {
                string temp;
                cout << "skrifadu nafn sem a pontun: ";
                cin >> temp;
                vector<Order> test = afhendingarstadir_service.find_order_name(temp);
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
                        string merking = test[i].get_merking();
                        cout << "Stadur : " << name << endl;
                        cout << "Pizzan: " << tommur << " tommu " << botn << " botn med " <<  alegg << endl;
                        cout << "Medlaeti & gos: " << medlaeti << " og " << gos << endl;
                        cout << "Heildarverd: " << verd << endl;
                        cout << "greitt eda ogreitt: " << greitt << endl;
                        cout << "Nafn a pontun: " << nafn << endl << endl;
                    }
                    cout << "merkja pontun (y/n) ? ";
                    cin >> select;
                    if(select == 'y') {
                        cout << "1: merkja i vinnslu" << endl;
                        cout << "2: merkja tilbuin" << endl;
                        cin >> select;
                        if(select == '1') {
                            string breyta = "vinnslu";
                            vector<Order> test = afhendingarstadir_service.change_merking(temp, breyta);
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
                                string merking = test[i].get_merking();

                                cout << "nafn: " << nafn << endl;
                                cout << "merking: " << merking << endl << endl;

                                cout << "Stadur : " << name << endl;
                                cout << "Pizzan: " << tommur << " tommu " << botn << " botn med " <<  alegg << endl;
                                cout << "Medlaeti & gos: " << medlaeti << " og " << gos << endl;
                                cout << "Heildarverd: " << verd << endl;
                                cout << "greitt eda ogreitt: " << greitt << endl;
                                cout << "Nafn a pontun: " << nafn << endl << endl;
                            }
                        }
                        else if(select == '2') {
                            string merking = "tilbuin";
                            afhendingarstadir_service.change_merking(temp, merking);
                        }
                    }
                    else if(select == 'n') {

                    }
            }
            else if(select == 'q') {
            system("CLS");
            }
        }
    }
}
char BaksturUI::eftir_val() {
    char selection = '\0';
    cout << "1: Fa lista af pontudum pizzum" << endl;
    cout << "2: Fa upp pantada pizzu" << endl;
    cout << "q: Til baka" << endl;

    cin >> selection;
    cout << endl;
    return selection;
}
