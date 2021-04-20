/**
 * AUTHOR: <Itay Aharoni>
 * 
 * Date: 2021-04-20 14:29:04
 */

#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>
using namespace ariel;
using namespace std;

TEST_CASE("Testing arithmetic operators and boolean operators:") {
    ifstream units_file{"units.txt"};
    NumberWithUnits::read_units(units_file);
    NumberWithUnits a{2, "km"};
    NumberWithUnits b{4, "km"};
    CHECK(a+b==NumberWithUnits{6,"km"});
    CHECK(a-b==NumberWithUnits{-2,"km"});
    CHECK(b-a==NumberWithUnits{2,"km"});
    CHECK(-a==NumberWithUnits{-2,"km"});
    CHECK(-b==NumberWithUnits{-4,"km"});
    CHECK(+b==b);
    CHECK(+a==a);
    CHECK(a!=-a);
    CHECK(b>a);
    CHECK(b-a>=a);
    CHECK(b<=(a+=b+a));
    CHECK((b-=a)+b!=a);
    CHECK(b<a);
    CHECK(b<=a);
    CHECK(b++==b);
    CHECK(++b==a);
    CHECK(a!=--a);
    CHECK(--b==a);
    CHECK(--b!=a);
    CHECK(b+a==a);
    CHECK((a+=b)==b);
    CHECK(b<=b);
    CHECK(b>=b);
}

