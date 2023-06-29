/*2. Cho một mảng các phân số (PHANSO) gồm n phần tử (n≤50). Hãy viết chương
trình nhập và xuất danh sách các phân số sau đó tìm phân số có giá trị lớn nhất,
tổng và tích các phân số và nghịch đảo giá trị các phân số trong mảng.*/ 
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define SIZE 50
using namespace std;

struct PHANSO
{
	int tu;
	int mau;
};

void nhap(PHANSO a[],int &n)
{
	printf("so phan tu phan so: ");
	cin>>n;
	for(int i=0; i<n; i++)
	{
		printf("nhap tu so thu %d: ",i+1);
		cin>>a[i].tu;
		printf("nhap mau so thu %d: ",i+1);
		cin>>a[i].mau;
		if(a[i].mau == 0){
			cout<<"nhap sai ";
			exit(0);
		}
	}
}

int UCLN(int a,int b)
{
	if (a == 0 ||b == 0)
        return a + b;
    while (a != b)
	{
        if (a > b)
		{
            a -= b; 
        }
		else
		{
            b -= a;
        }
    }
    return a;
}	
void RutGon(PHANSO& x) {
	int uc = UCLN(x.tu, x.mau);
	x.tu = x.tu / uc;
	x.mau = x.mau / uc;
}
void Max(PHANSO a[],int n)
{
	int b,d;
	PHANSO max;
	max.tu=a[0].tu;
	max.mau=a[0].mau;
	for(int i=1; i<n; i++)
	{
		//ucln
		int c= UCLN(max.mau,a[i].mau);
		
		//tim so lon nhat
		if( max.mau == a[i].mau)
		{
			if(max.tu >= a[i].tu)
			{
				max.tu= max.tu;
				max.mau=max.mau;
			}
			else if(max.tu < a[i].tu)
			{
				max.tu=a[i].tu;
				max.mau=a[i].mau;
			}
		}
		else if( max.mau != a[i].mau)
		{
			b=a[i].tu*c;
			d=max.tu*c;
			if( d>=b )
			{
				max.tu=max.tu;
				max.mau=max.mau;
			}
			else if (d<b)
			{
				max.tu=a[i].tu;
				max.mau=a[i].mau;
			}
		}
	}
    RutGon(max);
	printf("phan so lon nhat: %d/%d \n",max.tu, max.mau);
}
void Tong(PHANSO a[], int n)
{
	PHANSO b;
	b.mau=a[0].mau;
	b.tu=a[0].tu;
		//tinh tong
	for(int i=1; i<n; i++)
	{
			b.tu=b.tu*a[i].mau+a[i].tu*b.mau;
			b.mau=a[i].mau*b.mau;
	
	}
	int c=UCLN(b.tu,b.mau);
	b.tu=b.tu/c;
	b.mau=b.mau/c;
    RutGon(b);
	printf("tong cac phan so: %d/%d\n",b.tu,b.mau);
}

void Tich(PHANSO a[],int n)
{
	PHANSO b;
	b.tu=a[0].tu;
	b.mau=a[0].mau;
	for(int i=1;i<n;i++)
	{
		b.tu=b.tu*a[i].tu;
		b.mau=b.mau*a[i].mau;
	}
	int c=UCLN(b.tu,b.mau);
	b.mau=b.mau/c;
	b.tu=b.tu/c;
    RutGon(b);
	printf("tich cac phan so: %d/%d\n",b.tu,b.mau);
}
void NgichDao(PHANSO a[],int n)
{
	PHANSO b[51];
	for(int i=0;i<n;i++)
	{
        if (a[i].tu==0) {
            cout<<"khong nghich dao duoc";
            exit(0);}
		b[i].tu=a[i].mau;
		b[i].mau=a[i].tu;
        RutGon(b[i]);
		printf("nghich dao phan so thu %d: %d/%d\n",i+1,b[i].tu,b[i].mau);
	}
	
}
int main()
{
	PHANSO a[51];
	int n;
	nhap(a,n);
    printf("===============================================================\n");
	Max(a,n);
    Tong(a,n);
	Tich(a,n);
	NgichDao(a,n);
	return 0;
}