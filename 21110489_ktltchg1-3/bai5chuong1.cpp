/*5. Viết chương trình khai báo kiểu dữ liệu thể hiện một số phức. Sử dụng kiểu này để
viết hàm tính tổng, hiệu, tích của hai số phức. */
#include<iostream>
#include<math.h>

using namespace std;

struct SOPHUC {
	int thuc, ao;
};

void nhap(SOPHUC& x);
void inPut(SOPHUC& x, SOPHUC& y);
void xuat(SOPHUC x);
void outPut (SOPHUC x, SOPHUC y);
void tong (SOPHUC x, SOPHUC y);
void hieu (SOPHUC x, SOPHUC y);
void tich(SOPHUC x, SOPHUC y);

int main () {
	SOPHUC x, y;
    nhap(x);
    nhap(y);
    cout<<"hai so vua nhap: \n";
    xuat(x);
    xuat(y);
    cout<<"==============================================\n";
	tong (x, y);
	hieu(x, y);
	tong(x, y);
	return 0;
}

void nhap(SOPHUC& x) {
    cout<<"nhap so phuc: ";
	cin >> x.thuc >> x.ao;
}


void xuat(SOPHUC x) {
	if (x.ao > 0) {
		cout << x.thuc << " + " << x.ao << "i" << endl;	
	}
	else {
		cout << x.thuc << " - "<< abs(x.ao) << "i" << endl;
	}

}
void tong (SOPHUC x, SOPHUC y) {
	SOPHUC tong;
	tong.thuc = x.thuc + y.thuc;
	tong.ao = x.ao + y.ao;
	xuat(tong);
}

void hieu (SOPHUC x, SOPHUC y) {
	SOPHUC hieu;
	hieu.thuc = x.thuc - y.thuc;
	hieu.ao = x.ao - y.ao;
	xuat(hieu);
}

void tich(SOPHUC x, SOPHUC y) {
	SOPHUC tich;
	tich.thuc = x.thuc*y.thuc - x.ao*y.ao;
	tich.ao = x.thuc*y.ao + x.ao*y.thuc;
	xuat(tich);
}