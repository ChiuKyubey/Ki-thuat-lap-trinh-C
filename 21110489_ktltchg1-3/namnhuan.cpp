#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap nam : ";
    cin>>n;
    switch(n%4){
        case 0:
            switch(n%400){
                case 0:
                    cout<<"nam nhuan\n";
                    break;
                default:
                    switch(n%100){
                        case 0:
                            cout<<"khong nhuan\n";
                            break;
                        default:
                            cout<<"nam nhuan\n";
                            break;
                    }
                    break;
            }
            break;
        default:
            cout<<"khong nhuan\n";
            break;
    }
    return 0;
} 
