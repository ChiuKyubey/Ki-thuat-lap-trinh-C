//Tìm giá trị nhỏ nhất của các phần tử trong một mảng một chiều.
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

int min(int a[],int n)
{
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	return min;
}

int main()
{
	int a[100];
	int n;
	nhap(a,n);
    cout<<min(a,n);
	return 0;
}
