//Nhập vào một số dạng thập phân, chuyển sang dạng nhị phân, bát phân, thập lục phân.
#include<iostream>
#include<string>

using namespace std;

string bin (int n){
    string s = "";
    while(n!= 0)
    {
        s = to_string(n%2) + s;
        n /= 2;
    }
    return s;
}

string oct(int n){
    string s = "";
    while (n!= 0){
        s = to_string(n%8) + s;
        n /= 8;
    }
    return s;
}

string hex(int n){
    string s = "";
    while (n!= 0){
        int k = n % 16;
        if (k > 9)
            s = (char)(k + 55) + s;
        else 
            s = to_string(k) + s;
        n /= 16;
    }
    return s;
}

int main(){
    int n;
    cin >> n;
    cout << "Nhi phan: " << bin(n) << endl;
    cout << "Bat phan: " << oct(n) << endl;
    cout << "Thap luc phan: " << hex(n) << endl;
    return 0;
}