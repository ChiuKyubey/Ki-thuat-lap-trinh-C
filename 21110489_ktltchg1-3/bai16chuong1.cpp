/*Một cửa hàng cần quản lý các mặt hàng, thông tin một mặt hàng bao gồm: 
- Mã hàng. 
- Tên mặt hàng. 
- Số lượng. 
- Đơn giá. 
- Số lượng tồn. 
- Thời gian bảo hành (tính theo đơn vị tháng). 
Hãy nhập vào một danh sách các mặt hàng.*/
#include<iostream>
#include<string>

using namespace std;

struct Product {
    int id;
    string name;
    int sl;
    int price;
    int ex;
    int ins;
};

void swap (Product &a, Product &b){
    Product temp = a;
    a = b; 
    b = temp;
}

int main(){
    int n;
    cout<<"nhap so luong: ";
    cin >> n;

    Product pr[1000];
    for (int i = 0; i < n; i++){
        cout<<"ma hang: ";
        cin >> pr[i].id;
        cout<<"ten mat hang: ";        
        cin >> pr[i].name;
        cout<<"so luong: ";
        cin >> pr[i].sl;
        cout<<"don gia: ";
        cin >> pr[i].price;
        cout<<"so luong ton: ";
        cin >> pr[i].ex;
        cout<<"thoi gian bao hanh: ";
        cin >> pr[i].ins;
    }
    cout<<"\n=========================================================\n";

    //a
    int max_ex = pr[0].ex;
    string a_SL=pr[0].name;
    for (int i = 1; i < n; i++)
        if (max_ex < pr[i].ex){
            a_SL= pr[i].name;
            max_ex = pr[i].ex;
        }
    cout << "so luong ton nhieu nhat: " << a_SL << endl;

    //b
    int min_ex = pr[0].ex;
    string a_SL2=pr[0].name;
    for (int i = 1; i < n; i++)
        if (min_ex > pr[i].ex)
        {
            a_SL2= pr[i].name;
            min_ex = pr[i].ex;
        }
    cout << "so luong ton it nhat: " << a_SL2 << endl;

    //c
    int max_price = pr[0].price;
    string a_gia=pr[0].name;
    for (int i = 1; i < n; i++)
        if (max_price < pr[i].price){
            a_gia= pr[i].name;
            max_price = pr[i].price;
        }
    cout << "gia tien cao nhat: " << a_gia << endl;

    //d
    cout<<"bao hanh hon 12 thang theo ma: ";
    for (int i = 0; i < n; i++){
        if (pr[i].ins > 12)
        cout <<  pr[i].id << " ";
    }
    cout << endl;

    //e
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (pr[i].ex > pr[j].ex)
                swap(pr[i], pr[j]);
    cout << "sap xep tang dan luong ton xep theo ma: ";
    for (int i = 0; i < n; i++){
        cout << pr[i].id << " ";
    }

    return 0;
}