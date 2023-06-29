/*Viết chương trình khai báo kiểu dữ liệu để biểu diễn một hỗn số. Hãy viết hàm 
thực hiện những công việc sau : 
a) Đổi hỗn số sang phân số
b) Tính tổng, tích hai hỗn số*/
#include<iostream>
#include<string>

using namespace std;

struct honSo {
    int dau = 1; // 1 la +, -1 la -;
    int nguyen;
    int tu;
    int mau;
};

int UCLN (int a, int b){
    while (b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}


honSo change(honSo x){
    x.tu += x.nguyen*x.mau;
    x.nguyen = 0;
    return x;
}

honSo tong(honSo x, honSo y){
    honSo sum;
    sum.tu = x.dau*x.tu*y.mau + y.dau*y.tu*x.mau;
    sum.mau = x.mau*y.mau;

    int ucln = UCLN(sum.tu, sum.mau);
    sum.tu /= ucln;
    sum.mau /= ucln;
    return sum;
}

honSo tich(honSo x, honSo y){
    honSo times;
    times.tu = x.dau*x.tu*y.dau*y.tu;
    times.mau = x.mau*y.mau;

    int ucln = UCLN(times.tu, times.mau);
    times.tu /= ucln;
    times.mau /= ucln;
    return times;
}

int main(){
    honSo x;
    cout << "Nhap phan nguyen hon so x: ";
    cin >> x.nguyen;
    cout << "Nhap tu so x: ";
    cin >> x.tu;
    cout << "Nhap mau so x: ";
    cin >> x.mau;
    if (x.mau == 0){
        cout << "Invalid fraction!";
        exit(0);
    }
    if (x.mau < 0 || x.tu < 0 || x.nguyen < 0){
        x.nguyen = abs(x.nguyen);
        x.tu = abs(x.tu);
        x.mau = abs(x.mau);
        x.dau = -1;
    }

    honSo y;
    cout << "Nhap phan nguyen hon so y: ";
    cin >> y.nguyen;
    cout << "Nhap tu so y: ";
    cin >> y.tu;
    cout << "Nhap mau so y: ";
    cin >> y.mau;
    if (y.mau == 0){
        cout << "Invalid fraction!";
        exit(0);
    }
    if (y.mau < 0 || y.tu < 0 || y.nguyen < 0){
        y.nguyen = abs(y.nguyen);
        y.tu = abs(y.tu);
        y.mau = abs(y.mau);
        y.dau = -1;
    }
    cout<<"===========================================================\n";
    //a
    honSo xa = change(x);
    cout << "x= " + to_string(xa.dau*xa.tu) + "/" + to_string(xa.mau) << endl;
    honSo ya = change(y);
    cout << "y= " + to_string(ya.dau*ya.tu) + "/" + to_string(ya.mau) << endl;
    //b
    honSo tongB = tong(xa, ya);
    cout << "tong= " + to_string(tongB.dau*tongB.tu) + "/" + to_string(tongB.mau) << endl;
    
    honSo tichB = tich(xa, ya);
    cout << "tich= " + to_string(tichB.dau*tichB.tu) + "/" + to_string(tichB.mau) << endl;

    return 0;
}