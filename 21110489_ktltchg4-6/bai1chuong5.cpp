//Đổi tất cả các số thập phân từ 1 đến n sang hệ nhị phân
//Đổi tất cả các số thập phân từ 1 đến n sang hệ nhị phân
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<iostream> 
using namespace std;

void nhap(int &n)
{
	cin>>n;
}
void test(int n)
{
	int a,c;
	int temp;
	int b;
	int i=1;
	while(i<=n)
	{
		c=i;
		temp=0;
		b=1;
		cout<< i<<"----->>" ;
		while(i>0)
		{
			a=i%2;
			temp=temp+a*b;
			b*=10;
			i=i/2;
		}
		cout<<temp<<endl;
		i=c+1;
	}
}

int main()
{
	int n;
	nhap(n);
	test(n);
	return 0;
}