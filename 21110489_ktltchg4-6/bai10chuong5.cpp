//10.Sinh tất cả các dãy nhị phân có độ dài n
#include <iostream>
#define size 50
using namespace std;
int TimSo0DauTien(int A[], int n)
{
	int i=n-1;
	while (i>=0 && A[i]==1)
		i--;
	return i;
}
void Xuat(int A[], int n)
{
	for(int i=0;i<n;i++)
		cout <<A[i]<<" ";
	cout << endl;
}
void SinhNhiPhan(int n)
{
	int A[size] = {0};
	int k = n-1;
	do
	{
		Xuat(A,n);
		A[k]=1;
		for(int i=k+1;i<n;i++)
			A[i]=0;
		k=TimSo0DauTien(A,n);
	}while(k!=-1);
	Xuat(A,n);
}


int main()
{
	int n; cin >> n;
	SinhNhiPhan(n);
}














