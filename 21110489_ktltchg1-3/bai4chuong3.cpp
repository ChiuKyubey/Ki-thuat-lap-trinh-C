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
    long long s = 0;
    long long t = 1;
    for (int i = 1; i <= n; i++) {
        t *= i;
        s += t;
    }
    return s;
}
