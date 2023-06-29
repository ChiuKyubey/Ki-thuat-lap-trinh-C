#include<iostream>

using namespace std;

int main(){
    int A;
    cin >> A;
    int n = 0;
    double s = 0;
    while (A > s){
        n++;
        s += 1.0/n;
    }
    cout << n;
    return 0;
}