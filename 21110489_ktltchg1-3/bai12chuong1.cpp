/*Tổ chức dữ liệu quản lí danh mục các bộ phim VIDEO, các thông tin liên quan 
đến bộ phim này như sau: 
- Tên phim (tựa phim).
- Thể loại (3 loại : hình sự, tình cảm, hài). 
- Tên đạo diễn.
- Tên điễn viên nam chính. 
- Tên diễn viên nữ chính. 
- Năm sản xuất. 
- Hãng sản xuất 
Viết chương trình thực hiện những công việc sau : 
a) Nhập vào bộ phim mới cùng với các thông tin liên quan đến bộ phim
này. 
b) Nhập một thể loại: In ra danh sách các bộ phim thuộc thể loại này. 
c) Nhập một tên nam diễn viên. In ra các bộ phim có diễn viên này đóng. 
d) Nhập tên đạo diễn. In ra danh sách các bộ phim do đạo diễn này dàn 
dựng.*/

#include <iostream>
#include<cstring>
#include <string.h>
#include <math.h>
#define SIZE 500
using namespace std;

struct VIDEO
{
    char tenPhim[30];
    char theLoai[10];
    char tenDaoDien[20];
    char tenNam[20];
    char tenNu[20];
    int namSX;
    char hangSX[20];
};
void nhapPhim(VIDEO arr[],int &n);
void nhapCanTim( VIDEO arr[],int n, VIDEO &temp);
void tenPhim(VIDEO arr[], int n, VIDEO temp);
void theLoai(VIDEO arr[], int n, VIDEO temp);
void tenNam(VIDEO arr[], int n, VIDEO temp);
void tenDaoDien(VIDEO arr[], int n, VIDEO temp);

void nhapPhim(VIDEO arr[],int &n)
{
    cout<<"nhap so phim: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<"nhap phim thu "<< i<<endl;
        fflush(stdin);
        cout << "Nhap ten phim: ";
        cin.getline( arr[i].tenPhim, 30);
        fflush(stdin);
        cout << "Nhap the loai (hinh su, tinh cam, hai) : ";
        cin.getline(arr[i].theLoai,10);
        fflush(stdin);
        cout << "Ten dao dien: ";
        cin.getline(arr[i].tenDaoDien,20);
        fflush(stdin);
        cout << "Ten dv nam chinh: ";
        cin.getline( arr[i].tenNam,20);
        fflush(stdin);
        cout << "Ten dv nu chinh: ";
        cin.getline( arr[i].tenNu,20);
        fflush(stdin);
        cout << "Nam san xuat: ";
        cin >> arr[i].namSX;
        fflush(stdin);
        cout << "Nhap hang san xuat: ";
        cin.getline( arr[i].hangSX,20);
        cout << "===========================================\n";
    }
}
void nhapCanTim( VIDEO arr[],int n, VIDEO &temp){ 
    cout<<"nhap ten phim: "<<endl;
	cin.getline( temp.tenPhim,30);
    tenPhim(arr,n,temp);
    cout<<"\n\n";

	cout << "Nhap the loai can tim: ";
	cin.getline(temp.theLoai, 10);
    theLoai(arr,n,temp);
    cout<<"\n \n";

	cout << "Nhap ten dien vien nam can tim: ";
	cin.getline(temp.tenNam,20);
    tenNam(arr,n,temp);
    cout<<"\n\n";

	cout << "Nhap ten mot dao dien: ";
	cin.getline( temp.tenDaoDien,20);
    tenDaoDien(arr,n,temp);
    cout<<"\n\n";
   
	
}
void tenPhim(VIDEO arr[], int n,VIDEO temp) {
    
	cout << endl;
	cout << "thong tin phim: " << endl;
    int a=0;
	for (int i = 1; i <= n; i++) {
		if (strcmp(arr[i].tenPhim, temp.tenPhim) == 0) {
			cout << arr[i].tenPhim << endl;
            cout << arr[i].theLoai << endl;
            cout << arr[i].tenNam << endl;
            cout << arr[i].tenDaoDien << endl;
            cout << arr[i].namSX << endl;
            cout << arr[i].hangSX << endl;
            a++;
            break;
		}

	}
    if(a == 0) {cout<<"khong tim thay";}
}

void theLoai(VIDEO arr[], int n,VIDEO temp) {
	cout << endl;
	cout << "Danh sach phim co cung the loai: " << endl;
    int a =0;
	for (int i = 1; i <= n; i++) {
		if (strcmp(arr[i].theLoai, temp.theLoai) == 0) {
			cout << arr[i].tenPhim << endl;
            a++;
		}
        
	}
    if(a == 0) {cout<<"khong tim thay";}

}


void tenNam(VIDEO arr[], int n,VIDEO temp) {
	cout << endl;
    int a =0;
	cout << "Danh sach phim dien vien nam nay dong: " << endl;
	for (int i = 1; i <= n; i++) {
		if (strcmp(arr[i].tenNam, temp.tenNam) == 0) {
			cout << arr[i].tenPhim << endl;
            a++;
		}
	}
    if(a == 0) {cout<<"khong tim thay";}
}

void tenDaoDien(VIDEO arr[], int n,VIDEO temp) {
	cout << endl;
    int a=0;
	cout << "Danh sach cac bo phim dao dien nay dan dung: " << endl;
	for (int i = 1; i <=n; i++) {
		if (strcmp(arr[i].tenDaoDien, temp.tenDaoDien) == 0) {
			cout << arr[i].tenPhim << endl;
            a++;
		}
	}
    if(a==0)cout<<"khong tim thay";
}



int main(){
    VIDEO arr[SIZE];
    VIDEO temp;
    int n;
    nhapPhim(arr,n);
    nhapCanTim(arr,n,temp);
    return 0;
}
