//Viết các thủ tục thêm, xóa, sửa, tìm kiếm một phần tử trong một mảng.
#include<iostream> 
#include<math.h>
using namespace std;
void nhap(int a[],int &n)
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}

int search(int a[],int n)
{
	int x;
	cout<<"nhap phan tu can tim: ";
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if (a[i]==x)
		return i+1;
	}
	return -1;
}
void xuat1(int x)
{
	if(x!=-1)
	{
	cout<<"so can tim nam o vi tri thu "<<x<<endl;
	}
	else
	{	
	cout<<" khong co phan tu trong mang\n";
	}
}
void add(int a[],int n)
{
	int b;
	cout<<"chon vi tri can them: ";	
	cin>>b;
	for(int i=n;i>b-1;i--)
	{
		a[i]=a[i-1];
	}
	cout<<"Phan tu them: ";
	cin>>a[b-1];
}
void xuat2(int a[],int n)
{
	cout<<"mang sau khi them: ";
	for(int i=0; i<=n;i++)
	{
		cout<<a[i];
	}
}
void del(int a[],int n)
{
	int b;
	cout<<"\nnhap vi tri can xoa: ";
	cin>>b;
	for(int i=b-1;i<=n;i++)
	{
		a[i]=a[i+1];
	}
}
void xuat3(int c[],int n)
{
	cout<<"mang sau khi xoa: ";
	for(int i=0;i<n;i++)
	{
		cout<<c[i];
	}
}
void opt(int a[],int n)
{
	int b;
	cout<<"\nNhap vi tri can sua: ";
	cin>>b;
	cout<<"Noi dung chinh sua: ";
	cin>>a[b-1];
}
void xuat4(int a[],int n)
{
	cout<<"Mang sau chinh sua: ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
int main()
{
	int a[100];
	int n;
	nhap(a,n);
	//tim kiem
	int timkiem=search(a,n);
	xuat1(timkiem);
	//them
	add(a,n);
	xuat2(a,n);
	//xoa
	del(a,n);
	xuat3(a,n);
	//sua
	opt(a,n);
	xuat4(a,n);
	return 0;
}
