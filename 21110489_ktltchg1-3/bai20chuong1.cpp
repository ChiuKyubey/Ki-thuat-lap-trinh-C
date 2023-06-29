/*Viết chương trình ghi vào tập tin SOCHAN.DAT các số nguyên chẵn từ 0 đến
100. Viết chương trình đọc tập tin SOCHAN.DAT và xuất ra màn hình, mỗi dòng
30 số.*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100

void wfile(){
	FILE *fw;
	fw = fopen("SOCHAN.DAT", "w+");
	int x = 0;
	for (int i = 0; i <= 50; i++){
		fprintf(fw, "%d ", x);
		x += 2;
	}
	fclose (fw);
}

void rfile(){
	FILE *fw;
	fw = fopen("SOCHAN.DAT", "r+");
	int x;
	int d=0;
	int i = 0;
	while(x<100)	{
		d++; 
		fscanf(fw, "%d", &x);
		printf("%d ", x);
		if(d % 30 == 0)
		printf("\n");
		i++;
	}
	fclose (fw);		
}

int main(){
	wfile();
	rfile();
return 0;	
}