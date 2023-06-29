//Viết chương trình tìm số lẻ nhỏ nhất nhưng lớn hơn mọi số chẵn trong mảng.
#include <iostream>
#define size 100000
using namespace std;
void Nhap(int a[], int &n);
int MaxChan(int a[], int n);
int MinLe(int a[], int n);
int main()
{
	int n;
	int a[size];
	Nhap(a,n);
	cout << MinLe(a,n);
}
void Nhap(int a[], int &n)
{
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int MaxChan(int a[], int n)
{
 	int max = -1;
 	for(int i=0;i<n;i++)
		if((a[i] > max) && (a[i]%2==0))
			max = a[i];
	return max;
}
int MinLe(int a[], int n)
{
	int min = 99999, x = 0;
	int t = MaxChan(a,n);
	for(int i=0;i<n;i++)
		if((a[i] > t) && (a[i]%2==1) && (a[i]<min))
		{
			x++;
			min = a[i];
		}
	if(x==0) return -1;
	else return min;
}
