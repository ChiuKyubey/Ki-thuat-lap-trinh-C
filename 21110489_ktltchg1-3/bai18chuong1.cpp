/* Viết chương trình tạo một file chứa 10000 số nguyên ngẫu nhiên đôi một khác 
nhau trong phạm vi từ 1 đến 32767 và đặt tên là “SONGUYEN.INP”*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#define SIZE 32767
using namespace std;

bool x_chua_xh(int *arr, int n, int x) {
	for(int i = 0; i < n; i++) {
		if(arr[i] == x) {
			return false;
		}
	}
	return true;
}

void nhap(int *arr, int *n){ 
	*n = 10000;
	
	int i=0;
	srand((int) time(0));
	while(i < *n){
		int x = rand();
		if(x_chua_xh(arr, i, x)){
			arr[i++] = x;
		}
	}
}

void xuat(int *arr, int n){
	FILE *fo;
	fo = fopen("SONGUYEN.INP","wt");
	if(fo == NULL){
		cout<<"KHONG GHI DUOC FILE";
		exit(0);
	}
	if(fo == NULL){
		cout<<"KHONG GHI DUOC FILE";
		exit(0);
	}
	
	for(int i=0; i<n; i++){
		fprintf(fo, "%d ", arr[i]);	
	}
	fclose(fo);
}

int main() {
	int n;
	int arr[SIZE];
	nhap(arr, &n);
	xuat(arr, n);
return 0;
}
