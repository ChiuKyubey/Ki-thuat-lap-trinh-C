/*Có N chi tiết được đánh số từ 0 đến N-1 cần được gia công. Các chi tiết có thể hoàn
thành trên một máy A hoặc trên một máy B. Các máy này có thể hoạt động độc lập
và làm việc đồng thời. Biết rằng thời gian gia công chi tiết i trên máy A là A[i] và
trên máy B là B[i]. Hãy tìm một phương án phân công cho các máy để thời gian
hoàn thành cả N chi tiết là sớm nhất.*/
#include <iostream>
using namespace std;
#define SIZE 200

int cptoiuu = INT_MAX;
int H[SIZE];
int A[SIZE],B[SIZE]={0}, n;
int C[SIZE][SIZE];

void tinh()
{
	int cp=0;
	for(int i=0;i<n-1;i++)
	{
		cp=cp+C[A[i]][A[i+1]];
	}
	cp=cp+C[A[n-1]][A[0]];
	if(cp<cptoiuu)
	{
		cptoiuu=cp;
		for(int j=0;j<n;j++)
			H[j]=A[j];
	}
}
void nhap()
{
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>C[i][j];
}
void lietkeHV(int k)
{
	if(k==n)
		tinh();
	else
	{
		for(int i=0;i<n;i++)
			if(B[i]==0)
			{
				A[k]=i;
				B[i]=1;
				lietkeHV(k+1);
				B[i]=0;
			}
	}
}
void xuat()
{
	for(int i=0;i<n;i++)
		cout<<H[i]<<" ";
	cout<<endl;
}
int main()
{
	nhap();
	cout<<"=============================================================="<<endl;
	lietkeHV(0);
	xuat();
	cout<<cptoiuu;
	return 0;
}
