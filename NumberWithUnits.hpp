#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdexcept>
using namespace std;
namespace ariel{
class NumberWithUnits{
    int x;
    string str;
    public:
    NumberWithUnits(int x, string str);
    ~NumberWithUnits();
    static void read_units(ifstream& file);
    NumberWithUnits operator+(const NumberWithUnits& other) const;
    NumberWithUnits& operator+=(const NumberWithUnits& other);
    NumberWithUnits operator+() const;
    NumberWithUnits operator-() const;
    NumberWithUnits operator-(const NumberWithUnits& other) const;
    NumberWithUnits& operator-=(const NumberWithUnits& other);
    bool operator==(const NumberWithUnits& other) const;
    bool operator>=(const NumberWithUnits& other) const;
    bool operator<=(const NumberWithUnits& other) const;
    bool operator!=(const NumberWithUnits& other) const;
    bool operator<(const NumberWithUnits& other) const;
    bool operator>(const NumberWithUnits& other) const;
    friend std::ostream& operator<< (std::ostream& output, const NumberWithUnits& n);
    friend std::istream& operator>> (std::istream& input , NumberWithUnits& n);
    NumberWithUnits& operator++();
    NumberWithUnits operator++(int dummy_flag_for_postfix_increment);
    NumberWithUnits& operator--();
    NumberWithUnits operator--(int dummy_flag_for_postfix_increment);
    friend const NumberWithUnits operator*(double r, const NumberWithUnits& n);

};
};