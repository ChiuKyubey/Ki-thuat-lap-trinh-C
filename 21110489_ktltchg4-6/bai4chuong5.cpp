//Viết hàm thực hiện các thao tác trên bit (bật, tắt, lấy giá trị bit thứ i của biến n)
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

void on(int x)
{
	int i;
	cout<<"\nBat bit thu i: ";
	cin>>i;
	x= x | (0x01<<(i-1));
	for(int j=15;j>=0;j--)
	{	
        printf("%d", (x >> j) & 0x01);	
    }
}

void off(int x)
{
	int i;
	cout<<"\nTat bit thu i: ";
	cin>>i;
	x= x&(~(0x1<<(i-1)));
	for(int j=15;j>=0;j--)
	{	
        printf("%d", (x >> j) & 0x01);	
    }
}

void take(int x)
{
	int i;
	cout<<"\nNhap vi tri can lay: ";
	cin>>i;
	printf("%d", (x>>(i-1)) & 0x01);
}

int main()
{
	int x;
	cin>>x;
	for(int j=15;j>=0;j--)
	{	
        printf("%d", (x >> j) & 0x01);
    }
	off(x);
	on(x);
	take(x);
	return 0;
}
