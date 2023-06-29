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
    float s = 0;
    long long t = 0;
    for (int i = 1; i <= n; i++) {
        t += i;
        s += 1.0 / t;
    }
    return s;
}
