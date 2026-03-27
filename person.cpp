#include<iostream>
#include "person.h"

person::person() {
    id = "";
    name = "";
    age = 0;
}

void person::nhap() {
    cin.ignore();
    cout << "Nhap id:";
    getline(cin, id);

    cout << "Nhap ten:";
    getline(cin, name);
    while (name.empty()) {
        cout << "Nhap lai:";
        getline(cin, name);
    }

    cout << "Nhap tuoi:";
    cin >> age;
    while (age <= 0) {
        cout << "Nhap lai:";
        cin >> age;
    }
}

void person::xuat() {
    cout << "ID: " << id << endl;
    cout << "Ten: " << name << endl;
    cout << "Tuoi: " << age << endl;
}

string person::getID() {
    return id;
}
