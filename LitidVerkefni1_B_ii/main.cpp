#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Superhero {

 private:
    char name[25];
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
    int getMany() {
        cout << "How many superheros are in the Superteam ? ";
        int input;
        cin >> input;

        return input;
    }

};

int main()
{
    Superhero hero1;

    int howmany = hero1.getMany();

    ofstream fout;
    fout.open("SuperHeros.dat", ios::binary);

    for(int i = 0; i < howmany; i++) {
        cin >> hero1;
        cout << endl;

        fout.write((char*)(&hero1), sizeof(Superhero));
    }

    fout.close();

    Superhero hero2;

    ifstream fin;
    fin.open("SuperHeros.dat", ios::binary);

    if(fin.is_open()) {
        fin.seekg(0, fin.end);
        int records = fin.tellg() / sizeof(Superhero);
        fin.seekg(0, fin.beg);

        Superhero *hero = new Superhero[records];
        fin.read((char*)hero, sizeof(Superhero) * records);
        fin.close();

        for(int i = 0; i < records; i++) {
            hero[i].setVerbose(true);
            cout << hero[i];
        }
    }
    else {
        cout << "Could not open file!" << endl;
    }
    fin.close();

    return 0;
}
