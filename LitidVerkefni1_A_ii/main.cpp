#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string str;
    ofstream fout;
    char input = 0;

    fout.open("Text.txt", ios::app);

    if(fout.is_open()) {
        while(input != '\\') {
            getline(cin, str);

            for(int i = 0; i < 1; i++) {
                input = str.at(0);
            }
            if(input != '\\') {
                fout << str << endl;
            }
        }
        fout.close();
    }
    else {
        cout << "Unable to read from file!" << endl;
    }

    return 0;
}
