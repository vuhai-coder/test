#include<iostream>
#include "member.h"
#include<string>
using namespace std;
int main() {
    member ds[100];
    int n;
    string id;

    member::nhapdanhsach(ds, n);
    member::xuatdanhsach(ds, n);

    cout << "Nhap ID can tim:";
    cin >> id;

    member::timkiem(ds, n, id);

    return 0;
}
