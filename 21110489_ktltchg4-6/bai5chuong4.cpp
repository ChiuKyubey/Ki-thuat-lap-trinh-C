//Tính C
#include<iostream> 
using namespace std;
int tinh (int n){
    int i,s;
    s=1;
    for (i=1; i<=n;i++){ 
        s*=i; 
    }
    return s;
}
int main(){
    int n,k;
    cin >> n >> k;

    int c= tinh(n)/(tinh(k)*tinh(n-k));
    cout<<c;
    return 0;
}