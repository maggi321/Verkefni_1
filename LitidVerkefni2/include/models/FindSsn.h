#ifndef FINDSSN_H
#define FINDSSN_H

#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class FindSsn
{
    public:
        FindSsn();

    private:
        string salary(int salary);
        string month(int month);
        string year(int year);
};

#endif // FINDSSN_H
