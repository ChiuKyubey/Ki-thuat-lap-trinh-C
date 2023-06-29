/*11. Tổ chức dữ liệu để quản lí sinh viên bằng cấu trúc mẫu tin trong một mảng N
phần tử, mỗi phần tử có cấu trúc như sau:
- Mã sinh viên.
- Tên.
- Năm sinh.
- Điểm toán, lý, hoá, điểm trung bình.*/
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

struct SV
{
	char MSSV[9];
	char Ten[31];
	int Nam;
	int Toan;
	int Ly;
	int Hoa;
	float TB;
};
void nhap(SV a[],int &n)
{
	cout<<"so sinh vien:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"SV thu "<<i+1<<endl;
		cout<<"nhap MSSV:";
		fflush(stdin);
        cin.getline(a[i].MSSV, 9);
		cout<<"nhap Ten: ";
		fflush(stdin);
        cin.getline(a[i].Ten, 31);
		cout<<"nam sinh:";
		cin>>a[i].Nam;
		cout<<"Nhap diem Toan, Ly, Hoa:";
		cin>>a[i].Toan>>a[i].Ly>>a[i].Hoa;
		a[i].TB=(a[i].Toan+a[i].Ly+a[i].Hoa)/3;
		cout<<"========================================================\n";
    }
}
void xuat(SV a[],int n)
{
	cout<<"Danh sach SV vua nhap la:\n";
	for(int i=0;i<n;i++)
	{
		cout<<"SV thu "<<i+1<< endl;
		cout<<"MSSV: "<<a[i].MSSV<<endl;
		cout<<"Ten SV: "<<a[i].Ten<<endl;
		cout<<"Nam sinh: "<<a[i].Nam<<endl;
		cout<<"Diem Toan: "<<a[i].Toan<<endl;
		cout<<"Diem Ly: "<<a[i].Ly<<endl;
		cout<<"Diem Hoa: "<<a[i].Hoa<<endl;
		cout<<"Diem TB:"<<a[i].TB<<endl;
		cout<<"========================================================\n";
	}
}
int main()
{
	SV a[51];
	int n;
	nhap(a,n);
	xuat(a,n);
	return 0;
}