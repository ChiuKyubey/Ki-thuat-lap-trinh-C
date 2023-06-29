/*3. Viết chương trình nhập vào 2 struct THOIGIAN (gồm giờ, phút, giây). Kiểm tra
thời gian nhập vào có hợp lệ không, nếu hợp lệ thì xuất ra khoảng cách giữa 2 mốc
thời gian trên*/
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
 
typedef struct
{
    int h;
    int m;
    int s;
}TIME, *PTIME;
 
 void xuat(TIME t)
{
    printf("hh:mm:ss = %.2d:%.2d:%.2d\n", t.h, t.m, t.s);
}
 

void nhap(PTIME t)
{
    int h,m,s;
    cout<<"Nhap thoi gian :";
    // Hour
    cout<<"\nGio: ";
	cin >>h;
    if (h < 0 || h > 23)
	{
		cout<<"khong hop le";
		exit(0);
	};
    // Minute
	cout<<"Phut: ";
    cin>>m;
	if (m < 0 || m > 59)
	{
		cout<<"khong hop le";
		exit(0);
	}
    // Sencond
    cout<<"Giay: ";
    cin>>s;
	if (s < 0 || s > 59)
	{
		cout<<"khong hop le";
		exit(0);
	}
 
    //save this time to struct
    t->h = h;
    t->m = m;
    t->s = s; 
}
 
TIME tinh(TIME t1, TIME t2)
{
    int s1 = 0, s2 = 0;
    int s;
    TIME t;
    s1 = 60*60*t1.h + 60*t1.m + t1.s;
    s2 = 60*60*t2.h + 60*t2.m + t2.s;
    s = s1 - s2;
    if(s < 0)
    {
        s = (-1)*s;
    }
    t.m = s/60;
    t.s = s%60;
    t.h = t.m/60;
    t.m = t.m%60;
 
    return t;
}

int main()
{
    TIME t1,t2,t;
    //time1
    nhap(&t1);
    cout<<"(Time 1) ";
    xuat(t1);
	cout<<endl;
    //time2
    nhap(&t2);
    cout<<"(Time 2) ";
    xuat(t2);
	cout<<endl;
    // time = |tim1 - time2|;
	cout<<"===================================================\n";
    cout<<"Khoang cach 2 thoi gian vua nhap ";
    t = tinh(t1, t2);
    xuat(t);
    return 0;
}
