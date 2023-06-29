/*4. Viết chương trình nhập vào 2 struct DATE (gồm ngày, tháng, năm), kiểm tra ngày
nhập vào có hợp lệ hay không, nếu có thì xuất ra khoảng cách giữa 2 ngày. */
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

int main()
{
	tg a;
	tg b;
	nhap(a);
	nhap(b);
	cout<<"=======================================================\n";
	xuat(a);
	xuat(b);
	khoangCach(a, b);
    return 0;
}

void nhap(tg& a)
{
	cout << "nhap ngay thang nam: ";
	cin >> a.d >> a.m >> a.y;
}

void xuat(tg a)
{
    if (checkNgayThang(a)==true){
	cout<<"ngay "<< a.d<<" thang " << a.m<<" nam " << a.y;
    cout<<endl;
    }
    else {
        cout<<"nhap khong hop le";
        exit(0);
    }
}
void khoangCach(tg a, tg b)
{
	int kc1 = demNgay(a);
	int kc2 = demNgay(b);
	int kc = abs(kc1 - kc2);
	cout<<"khoang cach giua 2 thoi gian vua nhap: "<< kc;

}
int namNhuan(int i)
{
	if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		return 1;
	return 0;
}

int demNgay(tg a)
{
	int kc = 0;
	for (int i = 1; i < a.y; i++)
	{
		if (namNhuan(i))
			kc = kc + 366;
		else
			kc = kc + 365;
	}
	for (int i = 1; i < a.m; i++)
	{
		kc = kc + ngayThang(i,a.y);
	}
	kc = kc + a.d;
	return kc;
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
