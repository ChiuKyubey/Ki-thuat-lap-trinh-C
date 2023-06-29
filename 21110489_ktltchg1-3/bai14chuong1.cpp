/*Viết chương trình tạo một mảng danh sách các máy tính của một cửa hàng, 
thông tin của một máy tính bao gồm : 
- Loại máy 
- Nơi sản xuất
- Thời gian bảo hành 
a) Viết hàm nhập một dãy các loại máy tính có thông tin như trên. 
b) Hãy viết hàm thống kê xem có bao nhiêu máy có thời gian bảo hành là 
1 năm. 
c) In ra danh sách các máy tính có xuất xứ từ Mỹ.*/
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

struct MAYTINH
{
    char loaiMay[10];
    char noiSX[10];
    int TGBH;
};
void nhap(MAYTINH Arr[], int &n);
void xuat(MAYTINH Arr[], int n);


void nhap(MAYTINH Arr[], int &n)
{
    cout<<"nhap so may: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        fflush(stdin);
        cout << "Nhap loai may: ";
        cin.getline( Arr[i].loaiMay, 10);
        fflush(stdin);
        cout << "Nhap noi san xuat: ";
        cin.getline( Arr[i].noiSX, 10);
        cout << "Nhap thoi gian bao hanh: ";
        cin >> Arr[i].TGBH;
        cin.ignore();

    }
    
}
void xuat(MAYTINH Arr[], int n){
    //bao hanh 1 nam
    int sum =0;
    for (int i = 1; i <= n; i++)
    {
        if (Arr[i].TGBH == 1)
        {
            sum++;
        }
    }
    cout << "\nSo may co thoi gian bh 1 nam: " << sum << endl;
    
    //may xuat su tu My
    cout<<"\nCac may co xuat su tu My: ";
    for (int i = 1; i <= n; i++)
    {
        if (strcmp(Arr[i].noiSX, "my") == 0)
        {
            cout<<Arr[i].loaiMay<<" ";
        }
    }
}

int main()
{
    MAYTINH Arr[10000];
    int n;
    nhap(Arr, n);
    cout<<"=======================================================\n";
    xuat(Arr, n);   
    return 0;
}