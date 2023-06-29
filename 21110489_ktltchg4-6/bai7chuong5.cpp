//Viết chương trình xuất ra tất cả các số nguyên tố nhỏ hơn n theo thuật toán sàng Eratosthène
#include<stdio.h>
#include<iostream>
using namespace std;


void ktra(int n)
{
	int a[100];
	if(n==1 || n==0) 
	{	printf("0");  }
	int i=2;
	for(int j=0;j<n-1;j++)
	{
		a[j]=i;
		i++;
	}
	for (int i = 0; i < n-1; i++) {
    	if (a[i] !=0) {
      for (int j =i+1; j<n-1; j++) {
        if(a[j]%a[i]==0)
        a[j]=0;
      }
    }
  }
	
	
	for(int j=0;j<n-1;j++)
	{
		if(a[j]!=0)
		cout<<a[j]<<"    ";
	}
}

int main()
{
	int n;
	cin>>n;
	ktra(n);
	return 0;
}
