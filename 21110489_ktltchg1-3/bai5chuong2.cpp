//Viết hàm chuyển một mảng một chiều có MxN phần tử sang một mảng 2 chiều kích thước MxN
#include<iostream>
#include<math.h>
using namespace std;

void nhap(int a[], int &n,int &m)
{
 cout<<"nhap so dong:";
 cin>>m;
 cout<<"nhap so cot:";
 cin>>n;
 for(int i=0;i<n*m;i++)
    {
      cin>>a[i];
    }
}
void Bien1ChieuThanh2Chieu(int a[],int n,int m)
{
 	int b[50][50], k=0;
 	for(int i=0;i<m;i++)
  	{
     	for(int j=0;j<n;j++)
        	b[i][j]=a[k++];
  	}
	for(int i=0;i<m;i++)
  	{
     	for(int j=0;j<n;j++)
			{
                cout<<b[i][j];
            }
		cout<<"\n";
 	}
 
}

int main()
{
 int a[100],n,m;
 nhap(a,n,m);
 Bien1ChieuThanh2Chieu(a,n,m);
 return 0;
}
