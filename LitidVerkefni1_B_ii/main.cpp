#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Superhero {

 private:
    char name[20];
    int age;
    char superpower;

    bool verbose;

 public:
    Superhero() {
        name[0] = '\0';
        age = 0;
        superpower = ' ';

        verbose = true;
    }

    void setVerbose(bool v) {
        verbose = v;
    }

    friend istream& operator>> (istream& in, Superhero& hero) {
        if(hero.verbose) {
            cout << "Please enter superhero name : ";
        }
        in >> hero.name;

        if(hero.verbose) {
            cout << "Please enter superhero age : ";
        }
        in >> hero.age;

        if(hero.verbose) {
            cout << "Please enter superhero power : ";
        }
        in >> hero.superpower;

    return in;
    }

    friend ostream& operator<< (ostream& out, const Superhero& hero) {

        out << hero.name << " ";
        if(hero.verbose) {
            out << "(";
        }

        out << hero.age;
        if(hero.verbose) {
            out << ") : ";
        }

        if(hero.verbose) {
            if(hero.superpower == 'f') {
            out << "Flying" << endl;
        }
        else if(hero.superpower == 'g') {
            out << "Giant" << endl;
        }
        else if(hero.superpower == 'h') {
            out << "Hacker" << endl;
        }
        else if(hero.superpower == 'n') {
                out << "None" << endl;
        }
        else {
            out << "Weakling" << endl;
            }
        }
        else {
            out << " " << hero.superpower;
        }
    return out;
    }

};

int main()
{
    Superhero hero1;

    cin >> hero1;

    ofstream fout;
    fout.open("SuperHeros.dat", ios::binary|ios::app);

    fout.write((char*)(&hero1), sizeof(Superhero));

    fout.close();

    Superhero hero2;

    ifstream fin;
    fin.open("SuperHeros.dat", ios::binary);

    if(fin.is_open()) {
        fin.seekg(0, fin.end);
        int recordCount = fin.tellg() / sizeof(Superhero);
        fin.seekg(0, fin.beg);

        for(int i = 0; i < recordCount; i++) {
            fin.read((char*)(&hero2), sizeof(Superhero));
            cout << hero2 << endl;
        }
    }
    else {
        cout << "Could not open file!" << endl;
    }
    fin.close();

    return 0;
}
