/*Viết chương trình tạo một mảng các phân số. Hãy viết hàm thực hiện các công
việc sau :
a) Tính tổng tất cả các phân số (kết quả dưới dạng phân số tối giản)
b) Tìm phân số lớn nhất, phân số nhỏ nhất.
c) Sắp xếp mảng tăng dần*/
#include<iostream>
#include<math.h>
#include<string>

using namespace std;

struct pSo {
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

int BCNN (int a, int b){
    return (a*b)/UCLN(a, b);
}

pSo rutGon (pSo x){
    int ucln = UCLN(abs(x.tu), x.mau);
    x.tu /= ucln;
    x.mau /= ucln;
    return x;
}

pSo tong(pSo x, pSo y){
    pSo sum;
    sum.tu = x.tu*y.mau + y.tu*x.mau;
    sum.mau = x.mau*y.mau;
    sum = rutGon(sum);
    return sum;
}

void swap (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swap (pSo &a, pSo &b){
    pSo temp = a;
    a = b;
    b = temp;
}


int main(){

    int n;
    cout << "Nhap so phan so: ";
    cin >> n;
    pSo arr[100];
    for (int i = 0; i < n; i++){
        cout << "Tu so thu " << i+1 << ": ";
        cin >> arr[i].tu;
        cout << "Mau so thu " << i+1 << ": ";
        cin >> arr[i].mau;
        if (arr[i]. mau == 0){
            cout << "Invalid fraction!";
            exit(0);
        }

        if (arr[i].mau < 0){
            arr[i].tu = -arr[i].tu;
            arr[i].mau = -arr[i].mau;
        }
        arr[i] = rutGon(arr[i]);
    }

    //a
    pSo sum;
    sum.tu = arr[0].tu;
    sum.mau = arr[0].mau;
    for (int i = 1; i < n; i++){
        sum = tong(sum, arr[i]);
    }
    cout <<"sum= " + to_string(sum.tu) + "/" + to_string(sum.mau) << endl;

    //b
    int bcnn = BCNN(arr[0].mau, arr[1].mau);
    for (int i = 2; i < n; i++){
        bcnn = BCNN(bcnn, arr[i].mau);
    }
    int qD[100]; //quy dong mang arr, tao tien de cho cau a, c
    for (int i = 0; i < n; i++){
        qD[i] = arr[i].tu*(bcnn/arr[i].mau);
    }
    int max = qD[0], max_i = 0;
    int min = qD[0], min_i = 0;
    for (int i = 1; i < n; i++){
        if(qD[i] > max){
            max = qD[i];
            max_i = i;
        }
        if (qD[i] < min){
            min = qD[i];
            min_i = i;
        }
    } 
    cout << "max = " + to_string(arr[max_i].tu) + "/" + to_string(arr[max_i].mau) << endl;
    cout << "min = " + to_string(arr[min_i].tu) + "/" + to_string(arr[min_i].mau) << endl;

    //c
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (qD[i] > qD[j]){
                swap (qD[i], qD[j]);
                swap (arr[i], arr[j]);
            }
    cout << "Sort: ";
    for (int i = 0; i < n; i++){
        cout << to_string(arr[i].tu) + "/" + to_string(arr[i].mau) << " ";
    }
    return 0;
}