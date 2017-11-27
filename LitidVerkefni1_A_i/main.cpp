#include <iostream>
#include <fstream>
using namespace std;

char get_input();

int main()
{
    ifstream fin;
    fin.open("Texti.txt");
    string line;
    char input = 0;

    do {
    if (fin.is_open()) {
        for(int i = 0; i < 10; i++) {
            getline(fin, line);
            cout << line << endl;
        }
        input = get_input();
    }
    else {
        cout << "File could not be opened!" << endl;
        }
    }
    while (input == 'y');
    fin.close();

    return 0;
}

char get_input() {
    char input = 0;
    while(!(input == 'y' || input == 'n')) {
    cout << "Do you wish to continue (y/n)? ";
    cin >> input;
    }
    return input;
}
