#include<iostream>

using namespace std;

void Nhap(long long& n);
float Xuat(long long n);

int main() {
    long long n;
    Nhap(n);
    cout << Xuat(n) << endl;
    return 0;
}

void Nhap(long long& n) {
    cin >> n;
}

float Xuat(long long n) {
    float s = 1;
    long long t = 1;
    for (int i = 2; i <= n; i++) {
        t *= i;
        s += 1.0 / t;
    }
    return s;
}