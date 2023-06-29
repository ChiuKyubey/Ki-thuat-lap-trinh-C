/*Cho một lớp học gồm n học sinh (n≤50). Thông tin của một học sinh được định
nghĩa theo kiểu dữ liệu của học sinh HOCSINH gồm:
• Mã số học sinh (MSHS): chuỗi có tối đa 5 ký tự.
• Họ tên (hoten): chuỗi có tối đa 30 ký tự.
• Ngày tháng năm sinh (ngaysinh): kiểu DATE.
• Địa chỉ (diachi): chuỗi có tối đa 50 ký tự.
• Giới tính (phai): chuỗi có tối đa 3 ký tự.
• Điểm trung bình (diemtb): số thực.
Hãy viết chương trình nhập và xuất danh sách học sinh sau đó đếm xem có
bao nhiêu học sinh được lên lớp (Điều kiện được lên lớp là điểm trung bình ≥
5.0). */
#include<iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define SIZE 50
using namespace std;

struct DATE
{
	int ngay, thang, nam;
};

struct HOCSINH
{
	char MSSV[6];
	char hoten[31];
	DATE ngaysinh;
	char diachi[51];
	char phai[4];
	float diemtb;
};

void nhap(HOCSINH a[], int &n)
{
	cout<<"nhap so sv:";
	cin >> n;
	for(int i=1; i<=n ;i++)
	{
        cout << "Nhap thong tin hoc sinh thu " << i << endl;
		fflush(stdin);
		cout << "Nhap MSSV: ";
	    cin.getline(a[i].MSSV, 6);
		fflush(stdin);
        cout << "Nhap Ho va Ten: ";
	    cin.getline(a[i].hoten, 31);	
        cout << "Nhap ngay sinh: ";
	    cin >> a[i].ngaysinh.ngay >> a[i].ngaysinh.thang >> a[i].ngaysinh.nam;
		fflush(stdin);
        cout << "Nhap dia chi: ";
	    cin.getline(a[i].diachi, 51);
		fflush(stdin);
        cout << "Nhap gioi tinh: ";
	    cin.getline(a[i].phai, 4);	
        cout << "Nhap diem tb: ";
	    cin >> a[i].diemtb;
	}
}

void len_lop(HOCSINH a[],int n)	
{
	int b=0;
	for(int i=1;i<=n;i++)
	{
        cout<<"MSSV: "<<a[i].MSSV<<"\t"<<a[i].hoten<<endl;
        cout<<"ngay sinh:"<< a[i].ngaysinh.ngay <<"/"<< a[i].ngaysinh.thang<<"/"<< a[i].ngaysinh.nam<<endl;
        cout<<"dia chi: "<<a[i].diachi<<endl;
        cout<<"gioi tinh: "<<a[i].phai<<endl;
        cout<<"diem tb: "<<a[i].diemtb<<endl;
        if(a[i].diemtb >= 5.0){ 
            b++;
        }
	}
    cout<<"================================================================\n";
    cout << "So hoc sinh len lop: "<<b;
}

int main()
{
	HOCSINH a[51];
	int n;
	nhap(a,n);
    cout<<"================================================================\n";
	len_lop(a,n);
	return 0;
}
