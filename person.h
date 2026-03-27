#pragma once
#include <iostream>
#include <string>
using namespace std;

class person {
private:
    string id;
    string name;
    int age;

public:
    person();
    void nhap();
    void xuat();
    string getID();
};
