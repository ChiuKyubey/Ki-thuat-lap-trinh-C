/*11.Tính tổng, hiệu 2 số nguyên lớn.
Hướng dẫn:
- Sử dụng kiểu dữ liệu chuỗi (mảng ký tự) cho từng số nguyên.
- Làm bài tính tổng trước, làm được mới tính hiệu, xử lý từng trường hợp 2 
số có độ dài bằng nhau, độ dài khác nhau…*/
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

void nhap(char a[],char b[])
{
	cout<<"nhap a: ";
	fflush(stdin);
	cin.getline(a,500);
	cout<<"nhap b: ";
	fflush(stdin);
	cin.getline(b,500);
	cout<<"\n";
}
void change(char a[],char b[])
{
	int n,e,f;
	e=strlen(a);
	f=strlen(b);
	n=e-f;
	n=abs(n);
	
	if(e>f)
	{
		for(int i=e-1;i>=0;i--)
		{
			if(i>=n)
			{
				b[i]=b[i-n];
			}
			else
			b[i]='0';
		}
		b[e]='\0';
	}
	else if(e<f)
	{
		for(int i=f-1;i>=0;i--)
		{
			if(i>=n)
			{
				a[i]=a[i-n];
			}
			else
			a[i]='0';
		}
		a[f]='\0';
	}
}
void tong(char a[],char b[])
{
	int d,e,f;
	f=(a[0]-48)+(b[0]-48);
	e=strlen(a);
	char c[100];
	for(int i=0;i<e;i++)
	{
		c[i]='0';
	}
	for(int i=e-1;i>=0;i--)
	{
		d=(a[i]-48)+(b[i]-48);
		if(d>=10)
		{
			c[i]=c[i]+(d-10);
			c[i-1]+=1;
		}
		else
		{
			c[i]=c[i]+d;
		}
		c[e]='\0';
	}
	cout<<"tong la: ";
	if(f>=10)
	{
		cout<<"1";
		puts(c);
	}
	else
	{
	puts(c);
	}
	cout<<"\n";
}
void hieu(char a[],char b[])
{
	int d,e,f,g;
	f=(a[0]-48)-(b[0]-48);
	char c[100];
	e=strlen(a);
	if(f>=0)
	{
		for(int i=0;i<e;i++)
		{
			c[i]='0';
		}
		for(int i=e-1;i>=0;i--)
		{
			d=(a[i]-48)-(b[i]-48);
			if(d>=0)
			{
				c[i]=c[i]+d;
			}
			else
			{	
				c[i]=c[i]+d+10;
				c[i-1]-=1;
			}
		}
		cout<<"hieu la: ";
		puts(c);
	}
	else if(f<0)
	{
		for(int i=0;i<e;i++)
		{
			c[i]='0';
		}
		for(int i=e-1;i>=0;i--)
		{
			d=(b[i]-48)-(a[i]-48);
			if(d>=0)
			{
				c[i]=c[i]+d;
			}
			else
			{	
				c[i]=c[i]+d+10;
				c[i-1]-=1;

			}
		}
		cout<<"hieu la: -";
		puts(c);
	}
	c[e]='\0';

}
int main()
{
	char a[100],b[100];
	nhap(a,b);
	change(a,b);
	//tong
	tong(a,b);
	//hieu
	hieu(a,b);
	return 0;
}