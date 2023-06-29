// Viết chương trình xuất ra n phần tử đầu tiên của dãy Fibonacii
#include<stdio.h>
#include<iostream>
using namespace std;

int fibonacii(int i)
{
	if(i==1 || i ==2) return 1;
	else return fibonacii(i-1) + fibonacii(i-2);
}

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int c=fibonacii(i);
		cout<<c<<endl;
	}
	return 0;
}

