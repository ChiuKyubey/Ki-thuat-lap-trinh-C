//Tính tổng giá trị các số nguyên có trong một chuỗi ký tự.
//Ví dụ: Chuỗi 2AS34ASDF342B có tổng là 2+34+342=378
#include<stdio.h>
#include<string.h>
#include<iostream> 
using namespace std;

int tinh(char a[])
{
	int d=0;
	int b=strlen(a);	
	for(int i=0;i<b;i++)
	{
		if(a[i]>=48 && a[i]<=57)
		{	int c=0;
			c=c+(a[i]-48);
			a[i]-=a[i];
			int j=i+1;
			while(a[j]>=48 && a[j]<=57)
			{
				c=c*10+(a[j]-48);
				a[j]-=a[j];
				j++;
			}
			d+=c;
		}
	}
	return d;
}

int main()
{
	char a[100];
	fflush(stdin);
	cin.getline(a,100);
	int kq=tinh(a);
	cout<<kq;
	return 0;
}
