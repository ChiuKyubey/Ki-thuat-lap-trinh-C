#include<stdio.h>

void nhap(int a[],int &n)
{
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{scanf("%d",&a[i]);}
}

int vitri(int a[],int n)
{
	int x;
	printf("\nnhap so can tim: ");
	scanf("%d",&x);
	
	int c=(n-1)/2;
	if(a[c]<x)
	{
		for(int i=c;i>=0;i--)
		{
			if(a[i]==x)
			return i+1;
		}
	}
	else if(a[c]>x)
	{
		for(int i=c;i<n;i++)
		{
			if(a[i]==x)
			return i+1;
		}
	}
	else if(a[c]==x)
	{return c+1;}
	return -1;
}
void xuat(int i)
{
	printf("%d",i);
}
int main()
{
	int a[100];
	int n;
	nhap(a,n);
	int i=vitri(a,n);
	xuat(i);
return 0;}
