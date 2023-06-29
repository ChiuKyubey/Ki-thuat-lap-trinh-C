/*Có N thành phố, được đánh số từ 0 đến N-1. Một người du lịch xuất phát từ một
thành phố muốn đi thăm các thành phố khác, mỗi thành phố đúng một lần rồi quay
về nơi xuất phát. Chi phí đi từ thành phố i đến thành phố j là A[i][j], (0 ≤ i,j < N).
Hãy tìm một hành trình cho người du lịch để tổng chi phí theo hành trình này là ít
nhất.*/
#include<iostream>
using namespace std;
int a[20]={0};
int b[20]={0};
int n;
int dem;
int c[20][20];
int chiphitot = 1000000;
int hc[20];
void nhap()
{
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>c[i][j];
}
void tinh()
{
	int chiphi=0;
	for(int i=0;i<=n-2;i++)
		chiphi=chiphi+c[a[i]][a[i+1]];
	chiphi=chiphi+c[a[n-1]][a[0]];
	if(chiphi<chiphitot)
	{
		chiphitot=chiphi;
		for(int j=0;j<=n-1;j++)
			hc[j]=a[j];
	}
}
void hv(int k)
{
	if(k==n)
		tinh();
	else
	{
		for(int i=0;i<n;i++)
			if(b[i]==0)
			{
				a[k]=i;
				b[i]=1;
				hv(k+1);
				b[i]=0;
			}
	}
}
void xuat()
{
	for(int i=0;i<n;i++)
		cout<<hc[i]<<" ";
	cout<<endl;
}
int main()
{
	nhap();
	dem=0;
	hv(0);
	xuat();
	cout<<chiphitot;
	return 0;
}
