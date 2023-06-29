//Liệt kê tất cả các dãy nhị phân có độ dài n.
#include<iostream>

int arr[200], n;

using namespace std;

void Lietke(int k);
void outPut();

int main() {
    cin >> n;
    Lietke(0);
}

void Lietke(int k) {
    if (k == n) {
        outPut();
    }
    else {
        for (int i = 0; i <= 1; i++) {
            arr[k] = i;
            Lietke(k + 1);
        }
    }
}

void outPut() {
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
