//Tính tổng các phần tử trong mảng một chiều.
#include<stdio.h>
#include<iostream>
using namespace std;

void nhap(int a[],int &n)
{
	cout<<"Nhap so phan tu: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void xuat(int b)
{cout<<b;}

int sum(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{sum+=a[i];}
	return sum;
}

int main()
{
	int a[100];
	int n;
	nhap(a,n);
	int b=sum(a,n);
	xuat(b);
	return 0;
}