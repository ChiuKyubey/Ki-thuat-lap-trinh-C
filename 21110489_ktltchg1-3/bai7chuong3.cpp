#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if (n == 0){
        cout << "0";
        exit(0);
    }
    if (n == 1 || n == 2){
        cout << "1";
        exit(0);
    }
    int f1 = 1, f2 = 1;
    for (int i = 2; i < n; i++){
        int temp = f2;
        f2 += f1;
        f1 = temp; 
    }
    cout << f2;
    return 0;
}