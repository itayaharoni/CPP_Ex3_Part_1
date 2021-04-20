#include "NumberWithUnits.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdexcept>
using namespace std;
namespace ariel{  
    NumberWithUnits::NumberWithUnits(int x, string str): x{x},str{str}{}
    NumberWithUnits::~NumberWithUnits(){}
    void NumberWithUnits::read_units(ifstream& file){}
    NumberWithUnits NumberWithUnits::operator+(const NumberWithUnits& other) const{
        return other;
        }
    NumberWithUnits& NumberWithUnits::operator+=(const NumberWithUnits& other){
        return *this;
    }
    NumberWithUnits NumberWithUnits::operator+() const{
        NumberWithUnits n{1,"a"};
        return n;        
    }
    NumberWithUnits NumberWithUnits::operator-() const{
        NumberWithUnits n{1,"a"};
        return n;        
    }
    NumberWithUnits NumberWithUnits::operator-(const NumberWithUnits& other) const{
        NumberWithUnits n{1,"a"};
        return n;
    }
    NumberWithUnits& NumberWithUnits::operator-=(const NumberWithUnits& other){
        return *this;
    }
    bool NumberWithUnits::operator==(const NumberWithUnits& other) const{
        return true;
    }
    bool NumberWithUnits::operator>=(const NumberWithUnits& other) const{
        return true;
    }
    bool NumberWithUnits::operator<=(const NumberWithUnits& other) const{
        return true;
    }
    bool NumberWithUnits::operator!=(const NumberWithUnits& other) const{
        return true;
    }
    bool NumberWithUnits::operator<(const NumberWithUnits& other) const{
        return true;
    }
    bool NumberWithUnits::operator>(const NumberWithUnits& other) const{
        return true;
    }
    ostream& operator<< (std::ostream& output, const NumberWithUnits& n){
        return output;
    }
    istream& operator>> (std::istream& input , NumberWithUnits& n){
        return input;
    }
    NumberWithUnits& NumberWithUnits::operator++(){
        return *this;
    }
    NumberWithUnits NumberWithUnits::operator++(int dummy_flag_for_postfix_increment){
        NumberWithUnits n{1,"a"};
        return n;
    }
    NumberWithUnits& NumberWithUnits::operator--(){
        return *this;
    }
    NumberWithUnits NumberWithUnits::operator--(int dummy_flag_for_postfix_increment){
        NumberWithUnits n{1,"a"};
        return n;
    }
    const NumberWithUnits operator*(double r, const NumberWithUnits& n){
        return n;
    }
};