#include<iostream>
#include<math.h>

using namespace std;

void Nhap(long long& x, long long& y);
float Xuat(long long x, long long y);

int main() {
    long long x, y;
    Nhap(x, y);
    cout << Xuat(x, y) << endl;
    return 0;
}

void Nhap(long long& x, long long& y) {
    cin >> x >> y;
}

float Xuat(long long x, long long y) {
    float s = 1;
    long long t = 0;
    long long p = 1;
    for (int i = 1; i <= y; i++) {
        t = pow(x, i);
        p *= i;
        s += t / (float)p;
    }
    return s;
}