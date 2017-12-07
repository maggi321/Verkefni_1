#include "FindSsn.h"

FindSsn::FindSsn() {
    //ctor
}
string FindSsn::salary(int salary) {
	stringstream slry;
	slry << salary;
	return slry.str();
}
string FindSsn::month(int month) {
    stringstream mth;
	mth << month;
	return mth.str();
}
string FindSsn::year(int year) {
    stringstream yr;
	yr << year;
	return yr.str();
}
