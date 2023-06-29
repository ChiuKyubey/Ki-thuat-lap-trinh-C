//Tìm UCLN của tất cả các phần tử trong mảng.
#include <iostream>
using namespace std;
int UCLN(int a, int b);
int UCLN(int a[], int k);
int main()
{
	int k;
	cin>>k;
	int a[100];
	for(int i=0;i<k;i++)
	{
		cin>>a[i];
	}
	cout<<UCLN(a,k);
	return 0;
}
int UCLN(int a, int b)
{
	if(b==0) return a;
	else return UCLN(b,a%b);
}
int UCLN(int a[], int k)
{
	int kq=a[0];
	for(int i=1;i<k;i++)
	{
		kq=UCLN(kq,a[i]);
	}
	return kq;
}