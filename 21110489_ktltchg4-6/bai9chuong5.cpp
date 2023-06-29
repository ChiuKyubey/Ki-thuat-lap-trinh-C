//Viết chương trình nhập vào ma trận A[M][N], hãy xuất ra màn hình các phần tử
//A[i][j] sao cho A[i][j] là phần tử có giá trị lớn nhất dòng i và nhỏ nhất cột j.
#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int check(int A[105][105],int m,int n,int so,int hang,int cot)
{
    for(int i=0;i<n;i++)
    {
        if(A[hang][i]>so)
        {
            return 0;
        }
    }
    for(int j=0;j<m;j++)
    {
        if(A[j][cot]<so)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
   int n,m;
   int SGT=0;
   int X[10005];
   int Y[10005];
   cin>>m>>n;
   int A[105][105];
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
            cin>>A[i][j];
       }
   }
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           int so=A[i][j];
           if(check(A,m,n,so,i,j)==1)
           {
               X[SGT]=i;
               Y[SGT]=j;
               SGT++;
           }
       }   
   }
   cout<<SGT<<endl;
   for(int i=1;i<=SGT;i++)
   {
       cout << "vi tri: ("<<X[i]<<","<<Y[i]<< ")" << endl;
   }
}
