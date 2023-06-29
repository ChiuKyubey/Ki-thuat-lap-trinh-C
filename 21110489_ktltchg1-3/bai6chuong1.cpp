/*Viết chương trình khai báo kiểu dữ liệu để biểu diễn một phân số. Hãy viết hàm
thực hiện những công việc sau:
a) Tính tổng, hiệu, tích, thương hai phân số.
b) Rút gọn phân số.
c) Qui đồng hai phân số.
d) So sánh hai phân số. */
#include<iostream>
#include<string>

using namespace std;

struct phanSo {
    int tuSo;
    int mauSo;
};

int UCLN (int a, int b){
    while (b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
string rutGon (phanSo x){
    if (x.tuSo >= x.mauSo && x.tuSo % x.mauSo == 0)
        return to_string(x.tuSo/x.mauSo);
    int ucln = UCLN(abs(x.tuSo), x.mauSo);
    x.tuSo /= ucln;
    x.mauSo /= ucln;
    return to_string(x.tuSo) + "/" + to_string(x.mauSo);
}

string tinhTong (phanSo x, phanSo y){
    phanSo psTong;
    psTong.tuSo = x.tuSo*y.mauSo + y.tuSo*x.mauSo;
    psTong.mauSo = x.mauSo*y.mauSo;
    return rutGon(psTong);
}

string tinhHieu (phanSo x, phanSo y){
    phanSo psHieu;
    psHieu.tuSo = abs(x.tuSo*y.mauSo - y.tuSo*x.mauSo);
    psHieu.mauSo = x.mauSo*y.mauSo;\
    return rutGon(psHieu);
}

string tinhTich (phanSo x, phanSo y){
    phanSo psTich;
    psTich.tuSo = x.tuSo*y.tuSo;
    psTich.mauSo = x.mauSo*y.mauSo;
    return rutGon (psTich);
}

string tinhThuong(phanSo x, phanSo y){
    phanSo psThuong;
    psThuong.tuSo = x.tuSo*y.mauSo;
    psThuong.mauSo = x.mauSo*y.tuSo;
    return rutGon(psThuong);
}

string quyDong (phanSo x, phanSo y){
    int bcnn = (x.mauSo*y.mauSo)/UCLN(x.mauSo, y.mauSo);
    phanSo x1;
    phanSo y1;
    x1.tuSo = x.tuSo*(bcnn/x.mauSo);
    x1.mauSo = bcnn;
    y1.tuSo = y.tuSo*(bcnn/y.mauSo);
    y1.mauSo = bcnn;
    return to_string(x1.tuSo) + "/" + to_string(x1.mauSo) +  ", " + to_string(y1.tuSo) + "/" + to_string(y1.mauSo);
}

string soSanh (phanSo x, phanSo y){
    int bcnn = (x.mauSo*y.mauSo)/UCLN(x.mauSo, y.mauSo);
    phanSo x1;
    phanSo y1;
    x1.tuSo = x.tuSo*(bcnn/x.mauSo);
    y1.tuSo = y.tuSo*(bcnn/y.mauSo);
    if (x1.tuSo > y1.tuSo)
        return "x > y";
    else if (x1.tuSo < y1.tuSo)
        return "x < y";
    else return "x = y";
}

int main(){
    phanSo x;
    cout << "Nhap tu so x:";
    cin >> x.tuSo;
    cout << "Nhap mau so x:";
    cin >> x.mauSo;
    if (x.mauSo == 0){
        cout << "Invalid fraction!";
        exit(0);
    }
    if (x.mauSo < 0){
        x.tuSo = -x.tuSo;
        x.mauSo = -x.mauSo;
    }
    phanSo y;
    cout << "Nhap tu so y:";
    cin >> y.tuSo;
    cout << "Nhap mau so y:";
    cin >> y.mauSo;
    if (y.mauSo == 0){
        cout << "Invalid fraction!";
        exit(0);
    }
    if (y.mauSo < 0){
        y.tuSo = -y.tuSo;
        y.mauSo = -y.mauSo;
    }
    cout << "================================================="<< endl;
    //a
    cout << "Tong =" << tinhTong(x, y) << endl;
    cout << "Hieu =" << tinhHieu(x, y) << endl;
    cout << "Tich =" << tinhTich(x, y) << endl;
    cout << "Thuong =" << tinhThuong(x, y) << endl;

    //b
    cout << "x=" << rutGon(x) << endl;
    cout << "y=" << rutGon(y) << endl;

    //c
    cout << "Quy dong x, y =" << quyDong(x, y) << endl;

    //d
    cout << "So sanh x, y:" << soSanh(x, y) << endl;

    return 0;  
}

