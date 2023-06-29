//.Nhập vào d, m, y, kiểm tra (d,m,y) có lập thành một ngày tháng năm hay không, nếu có xuất ra ngày tiếp theo.
#include <iostream>
#include <math.h>
#include <stdbool.h>
using namespace std;

struct tg {
	int d;
	int m;
	int y;
};
void nhap(tg& a);
void xuat(tg a);
void khoangCach(tg a, tg b);
int namNhuan(int i);
int demNgay(tg a);
int ngayThang(int i, int d);
bool checkNgayThang(tg a);

void nhap(tg& a)
{
	cout << "nhap d m y: ";
	cin >> a.d >> a.m >> a.y;
}



int namNhuan(int i)
{
	if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		return 1;
	return 0;
}

void ngayTT(tg &a)
{
	a.d++;
    if (a.d > ngayThang(a.m, a.d)){
        a.d=1;
        a.m++;
        if(a.m>12){
            a.m=1;
            a.y++;
        }
    }
}
int ngayThang(int i, int d)
{
	if (i == 2)
	{
		if (namNhuan(d))
			return 29;
		else
			return 28;
	}
	else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		return 31;
	else
		return 30;
}
bool checkNgayThang(tg a) {
	if ((a.d > ngayThang(a.m, a.d))|| a.d<=0) {
		return false;
	}
	if (a.m < 0 || a.m > 12) {
		return false;
	}
	if (a.y < 0) {
		return false;
	}
	return true;
}
void xuat(tg a)
{
    if (checkNgayThang(a)==true){
    cout<<"ngay tiep theo: \n";
    ngayTT(a);
	cout<<"ngay "<< a.d<<" thang " << a.m<<" nam " << a.y;
    cout<<endl;
    }
    else {
        cout<<"nhap khong hop le";
        exit(0);
    }
}
int main()
{
	tg a;
	tg b;
	nhap(a);
	cout<<"=======================================================\n";
	xuat(a);
    return 0;
}
