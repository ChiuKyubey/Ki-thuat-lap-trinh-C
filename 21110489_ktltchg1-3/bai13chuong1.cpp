/*Một thư viện cần quản lý thông tin về các đầu sách. Mỗi đầu sách bao gồm các 
thông tin sau : MaSSach (mã số sách), TenSach (tên sách), TacGia (tác giả), SL (số
lượng các cuốn sách của đầu sách). Viết chương trình thực hiện các chức năng sau: 
a) Nhập vào một danh sách các đầu sách (tối đa là 100 đầu sách) 
b) Nhập vào tên của quyển sách. In ra thông tin đầy đủ về các sách có tên 
đó, nếu không có thì tên của quyển sách đó thì báo là: Không Tìm Thấy
c) Tính tổng số sách có trong thư viện.*/
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
struct SACH
{
    string maSach, tenSach, tacGia;
    int SL;
};
void nhapDS(SACH s[], int n) ;
void nhap(SACH &s) ;
void xuat(SACH s);
void tinhtong(SACH s[], int &n);
int tong(SACH s[], int n);

int main()
{
	int n; 
    cout<<"Nhap so sach: ";
    cin >> n;
	SACH s[101];
    cout<<"Nhap danh sach dau sach\n";
	nhapDS(s, n);
	string ten;
    cout<<"==========================================================\n";
    cout << "Tong so sach trong thu vien: "<<tong(s,n);
	cout <<"\n\nTim sach: ";	
	while(iswspace(cin.peek()))
	cin.ignore();
	getline(cin, ten);
    int temp=0;
	for (int i = 0; i < n; i++) {
		if (s[i].tenSach == ten){
            xuat(s[i]);
            temp++;
        }
	}
    if(temp==0)cout<<"Khong tim thay\n";
	return 0;

}
void nhapDS(SACH s[], int n) 
{
	for (int i = 0; i < n; i++) {
		nhap(s[i]);
	}
}
void nhap(SACH &s) 
{
	cout<<"Ma so sach la:";
	cin >> s.maSach;
	cin.ignore();
	cout<<"Nhap ten sach:";
	getline(cin, s.tenSach);
	cout<<"Nhap tac gia:";
	cin >> s.tacGia;
	cout<<"Nhap so luong:";
	cin>> s.SL;
    cout<<endl;
}
void xuat(SACH s)
{
    cout << "\nMa so sach: "<<s.maSach <<"\nTen cua sach: " << s.tenSach <<"\nTac gia: " << s.tacGia <<"\nSo luong sach: "<< s.SL<< endl;
}
int tong(SACH s[], int n){
    int temp=0;
    for(int i=0; i<n; i++){
        temp= s[i].SL + temp;
    }
    return temp;
}