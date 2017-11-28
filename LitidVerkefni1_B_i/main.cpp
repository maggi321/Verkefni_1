#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Superhero {

 private:
    string name;
    int age;
    char superpower;

    bool verbose;

 public:
    Superhero() {
        name = "";
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

    hero1.setVerbose(true);

    cin >> hero1;

    ofstream fout;
    fout.open("SuperHeros.txt", ios::app);

    hero1.setVerbose(false);
    fout << hero1 << endl;
    fout.close();

    Superhero hero2;

    ifstream fin;
    fin.open("SuperHeros.txt");

    hero2.setVerbose(false);
    if(fin.is_open()) {
        while(!fin.eof()) {
        hero2.setVerbose(false);
        fin >> hero2;
        hero2.setVerbose(true);
        if(!fin.eof()) {
            cout << hero2;
            }
        }
    }
    else {
        cout << "Could not open file!" << endl;
    }
    fin.close();

    return 0;
}
