//Tính n!
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int b=1;
	for(int i=n;i>1;i--)
	{b*=i;};
	cout<<b;
	return 0;
}
