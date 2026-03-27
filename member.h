#pragma once
#include "person.h"
#include <iomanip>

class member : public person {
private:
    float weight;
    float height;

public:
    member();
    void nhap();
    void xuat();
    float tinhBMI();
    string xepLoaiBMI();

    static void nhapdanhsach(member ds[], int& n);
    static void xuatdanhsach(member ds[], int n);
    static void timkiem(member ds[], int n, string id);
};
