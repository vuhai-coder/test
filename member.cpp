#include<iostream>
#include "member.h"

member::member() : person() {
    weight = 0;
    height = 0;
}

void member::nhap() {
    person::nhap();

    cout << "Nhap can nang:";
    cin >> weight;
    while (weight <= 0) {
        cout << "Nhap lai:";
        cin >> weight;
    }

    cout << "Nhap chieu cao:";
    cin >> height;
    while (height <= 0) {
        cout << "Nhap lai:";
        cin >> height;
    }
}

float member::tinhBMI() {
    return weight / (height * height);
}

string member::xepLoaiBMI() {
    float bmi = tinhBMI();
    if (bmi < 18.5) return "Gay";
    else if (bmi < 25) return "Binh thuong";
    else return "Thua can";
}

void member::xuat() {
    person::xuat();
    cout << "Can nang: " << weight << endl;
    cout << "Chieu cao: " << height << endl;
    cout << "BMI: " << fixed << setprecision(2) << tinhBMI() << endl;
    cout << "Xep loai: " << xepLoaiBMI() << endl;
}


void member::nhapdanhsach(member ds[], int& n) {
    cout << "Nhap so luong:";
    cin >> n;

    while (n <= 0 || n > 100) {
        cout << "Nhap lai:";
        cin >> n;
    }

    for (int i = 0; i < n; i++) {
        cout << "Member " << i + 1 << endl;
        ds[i].nhap();
    }
}

void member::xuatdanhsach(member ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Member " << i + 1 << endl;
        ds[i].xuat();
    }
}

void member::timkiem(member ds[], int n, string id) {
    for (int i = 0; i < n; i++) {
        if (ds[i].getID() == id) {
            ds[i].xuat();
            return;
        }
    }
    cout << "Khong tim thay!" << endl;
}
