#include<iostream>
#include<stdio.h>
#include<math.h>
#define SIZE 50;
using namespace std;

struct SOPHUC
{
	double thuc;
	double ao;
};

void nhap(SOPHUC a[],int &n)
{
	cout<<"nhap so phan tu:";
	cin>>n;
	for(int i=0 ; i<n; i++)
    {
        cout<<"nhap so phuc: ";
        cin >> a[i].thuc >> a[i].ao; 
	}
}
void tinh(SOPHUC a[],int n)
{
	//Tong
	SOPHUC c;
	c.ao=a[0].ao;
	c.thuc=a[0].thuc;
	for(int i=1;i<n;i++)
	{
		c.thuc+=a[i].thuc;
		c.ao+=a[i].ao;
		
	}
    cout<<"tong: "<<c.thuc<<" "<<c.ao<<"i";
    cout<<endl;
	//Hieu
	SOPHUC d;
	d.ao=a[0].ao;
	d.thuc=a[0].thuc;
	for(int i=1;i<n;i++)
	{
		d.thuc-=a[i].thuc;
		d.ao-=a[i].ao;
        
	}	
    cout<<"hieu: "<<d.thuc<<" "<<d.ao<<"i";
    cout<<endl;
	//tich
    double e,f;
	SOPHUC h;
    h.thuc=a[0].thuc;
    h.ao=a[0].ao;
	for(int i=1;i<n;i++)
	{
        //z . z' = (a + bi)(a' + b'i) = aa' + ab'i + a'bi + bb'i2 = aa' + ab'i + a'bi + bb'(-1) = aa' - bb' + (ab' + a'b)i
        e=h.thuc;
        f=h.ao;
		h.thuc=e*a[i].thuc-f*a[i].ao;
		h.ao=e*a[i].ao+f*a[i].thuc;
	}	
    cout<<"tich: "<<h.thuc<<" "<<h.ao<<"i";
}
int main()
{	
	SOPHUC a[51];
	int n;
	nhap(a,n);
	cout<<"==========================================\n";
	tinh(a,n);
	return 0;
}
