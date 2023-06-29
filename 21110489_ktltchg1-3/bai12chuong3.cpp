#include<iostream>

using namespace std;

long long sum (long long n){
    long long s = 0;
    for (long long i = 1; i <= n; i++)
        s += i;
    return s;
}

int main(){
    long long n;
    cin >> n; 
    long long result = 0;
    for (long long i = 1; i <= n; i++)
        result += sum(i);
    cout << result;
    return 0;
}