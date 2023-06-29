//Tính giá trị phần tử thứ n của dãy Fibonacci (không dùng mảng)
#include <stdio.h>
#include<iostream>
using namespace std;
#include <conio.h>
int Fibonacci(int n)
{
    if(n==1 || n==2)
        return 1;
    return Fibonacci(n-1)+Fibonacci(n-2);
}
int main()
{
    int n;
    cout<<"nhap n:" ;
    cin>>n;
    cout<<"So Fibonacci la:"<< Fibonacci(n);
    return 0;
}