#include "../include/Sala.h"
#include "../include/Toppings.h"

Sala::Sala()
{
    //ctor
}

Sala::~Sala()
{
    //dtor
}

void Sala::displaySala()
{
    char selection = '\0';

    while(selection != 'q') {
        cout << "-------Sala-------" << endl;
        cout << "=======================" << endl;

        cout << "1: Skra pontun"  << endl;
        cout << "2: Baeta vid pontun" << endl;
        cout << "3: Sja heildarverd pontunar" << endl;
        cout << "4: Skra sent eda sott" << endl;
        cout << "5: Merkja pontun greidda" << endl;
        cout << "6: Merkja pizzu a afhendingarstad" << endl;
        cout << "7: Skra athugasemdir" << endl;
        cout << "q: Til baka" << endl;

        cin >> selection;
        cout << endl;

        if (selection == '1')
        {
            getOrder();
        }
    }
}

void Sala::getOrder()
{
    cout << "Aleggstegundir og verd: " << endl;
    string str;
    ifstream fin;

    fin.open("aleggstegundir.txt");
    if (fin.is_open())
    {
        while (!fin.eof())
        {
            getline(fin, str);
            cout << str << endl;
        }
    }
    fin.close();

}
