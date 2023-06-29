/*. Viết chương trình khai báo kiểu dữ liệu để biểu diễn một điểm trong hệ tọa độ 0xy
. Hãy viết hàm thực hiện các công việc sau:
a) Tìm những điểm đối xứng của nó qua tung độ, hoành độ, toạ độ tâm.
b) Hãy tính tổng, hiệu, tích của hai điểm trong mặt phẳng toạ độ 0xy.
c) Tính khoảng cách giữa hai điểm.*/
#include<iostream>
#include<math.h>
using namespace std;
struct DIEM{
	float x;
	float y;
};

void nhap(DIEM &A, DIEM &B){
	cout<<"\t\tNhap diem thu 1: ";
	cout<<"\nNhap x: ";
	cin>>A.x;
	cout<<"Nhap y: ";
	cin>>A.y;
	
	cout<<"\t\tNhap diem thu 2: ";
	cout<<"\nNhap x: ";
	cin>>B.x;
	cout<<"Nhap y: ";
	cin>>B.y;
}

void xuat(DIEM A, DIEM B){
	cout<<"\n\n\t\tCac diem doi xung diem thu 1: ";
	cout<<"\nQua truc tung: ";
	cout<<-A.x<<" "<< A.y;
	cout<<"\nQua truc hoanh: ";
	cout<< A.x<<" "<< -A.y;
	cout<<"\nQua tam: ";
	cout<< -A.x<<" "<< -A.y;

	cout<<"\n\n\t\tCac diem doi xung diem thu 2: ";
	cout<<"\nQua truc tung: ";
	cout<< -B.x <<" "<< B.y;
	cout<<"\nQua truc hoanh: ";
	cout<< B.x<<" "<< -B.y;
	cout<<"\nQua tam O: ";
	cout<< -B.x<<" " <<-B.y;
}

float khoangCach(DIEM A, DIEM B){
	return sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
}

void tinhToan(DIEM A, DIEM B){
	cout<<"\n\n\t\tTinh toan";
	cout<<"\nToa do tong 2 diem: ";
	cout<<A.x+B.x <<" "<< A.y+B.y;
	
	cout<<"\nToa do hieu 2 diem: ";
	cout<<A.x-B.x <<" "<< A.y-B.y;
	
	cout<<"\nToa do tich 2 diem: ";
	cout<< A.x*B.x <<" "<< A.y*B.y;
	
	double d = khoangCach(A, B);
	cout<<"\nKhoang cach 2 diem: ";
	cout<< d;
}

int main(){
	DIEM A, B;
	nhap(A, B);
	cout<<"=========================================================\n";
	xuat(A, B);
	cout<<"\n=========================================================\n";
	tinhToan(A, B);
return 0;	
}