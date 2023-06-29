//Đổi tất cả các số thập phân từ 1 đến n sang hệ nhị phân.
#include<stdio.h>
#include<iostream>
using namespace std;

void NP(int n)
{	int a=1;
	int c=0;
	while(n>0)
	{
		int b;
		b=n%2;
		n=n/2;
		c=b*a+c;
		a*=10;
	}
	cout<<c<<endl;
}

int main()
{
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cout<<i<<"--->>";
		NP(i);
	}
	
	return 0;
}