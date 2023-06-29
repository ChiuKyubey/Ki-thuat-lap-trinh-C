//Viết hàm xóa các phần tử trùng nhau trong dãy, chỉ giữ lại một phần tử trong đó. 
//Vídụ: 1 2 3 2 1 2 4 -> 1 2 3 4
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
void Nhap(int a[],int N){
   int i;
   for (i=0;i<N;i++){
      cin>>a[i];
   }
}
void Xuat(int a[],int N){
   int i;
   for (i=0;i<N;i++)
      cout<<a[i]<<" ";
   cout<<endl;
}

void Xoatrung(int a[],int *N){
   int i,j,k;
   for (i=0;i<(*N)-1;i++){
    j=i+1;
    while (j<*N)
      if (a[i]==a[j]){
         for (k=j;k<(*N)-1;k++) a[k]=a[k+1];
         *N=(*N)-1;
      }
      else j=j+1;
   }
}
int main(){
   int a[100], N;
   cin>>N;
   Nhap(a,N);
   Xoatrung(a,&N);
   Xuat(a,N);
   return 0;
}