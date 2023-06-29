//Liệt kê tất cả hoán vị của tập n phần tử
#include <iostream>
#include <math.h>
using namespace std;
void xuat(int a[],int n);
void lat(int a[],int x,int y);


void lat(int a[],int x,int y)
{
	while(x<y)
	{
		swap(a[x],a[y]);
		x++;
		y--;
	}
}
void xuat(int a[],int n)
{
	for (int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}


int main()
{
	int a[200];
	int n,dem;
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap phan tu cua tap n:\n ";
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	xuat(a,n);
	dem=1;
	while(true)
	{
		int i,j;
		for (i=n-2;i>=0;i--)
		{
			if (a[i]<a[i+1]) 
			break;
		}
		if (i<0) 
		break;
		for (j=n-1;j>=0;j--)
		{
			if (a[i]<a[j]) 
			break;
		}
		swap(a[i],a[j]);
		lat(a,i+1,n-1);
		xuat(a,n);
		dem++;
	}
	cout<<dem;
	return 0;
}
