
#include<iostream>
#include<math.h>

using namespace std;

void Nhap(int& x, int& p);
void Xuat(int x, int p);

int main() {
    int x, p;
    Nhap(x, p);
    Xuat(x, p);
    return 0;
}

void Nhap(int& x, int& p) {
    cin >> x >> p;
}

void Xuat(int x, int p) {
    cout << pow(x, p);
}