#ifndef AFHENDINGARSTADIR_H
#define AFHENDINGARSTADIR_H
#include<iostream>
using namespace std;

class Afhendingarstadir {
    public:
        Afhendingarstadir();
        Afhendingarstadir(string name, int number);
        string get_name() const;
        int get_number() const;
        void set_name(string name);
        void set_number(int number);

        friend ostream& operator<< (ostream& out, const Afhendingarstadir& afhendingarstadur);
        friend istream& operator >>(istream& in, Afhendingarstadir afhendingarstadur);

    private:
        string name;
        int number;
};

#endif // AFHENDINGARSTADIR_H
