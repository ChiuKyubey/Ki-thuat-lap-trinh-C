//14.Cài đặt bài mã đi tuần
#include<iostream>
using namespace std;
int kiemtra(int x1,int y1,int x2, int y2);
int main() 
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int kq=kiemtra(x1,y1,x2,y2);
    cout<<kq;
}
int kiemtra(int x1,int y1,int x2, int y2)
{
    int X[9]={0,-2,-2,-1, 1, 2, 2, 1,-1};
	int Y[9]={0, 1,-1,-2,-2,-1, 1, 2, 2};
	for (int i=1;i<=8;i++)
		if (x1+X[i]==x2 && y1+Y[i]==y2)
			return i;
	return 0;
}
