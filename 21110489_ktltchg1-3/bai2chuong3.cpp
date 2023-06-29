#include<iostream>

using namespace std;

void Nhap(long long& n);
long long Xuat(long long n);

int main() {
    long long n;
    Nhap(n);
    cout << Xuat(n) << endl;
    return 0;
}

void Nhap(long long& n) {
    cin >> n;
}

long long Xuat(long long n) {
    return (n * (n + 1) * (n + 2)) / 6;
}