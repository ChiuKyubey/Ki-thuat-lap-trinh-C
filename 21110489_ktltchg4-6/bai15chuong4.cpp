//.Cài đặt bài Tháp Hà Nội

#include<iostream>
using namespace std;
void thap(int n , char a, char b, char c ){
    if(n==1){
        cout<<"\t"<<a<<"------->>"<<c<<endl;
        return;
    }
    thap(n-1,a,c,b);
    thap(1,a,b,c);
    thap(n-1,b,a,c);
    }
int main(){
    char a='A', b='B', c='C';
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    thap(n,a,b,c);
}