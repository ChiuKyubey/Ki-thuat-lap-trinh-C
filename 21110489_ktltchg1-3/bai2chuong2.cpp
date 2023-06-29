#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int n, x;
int Arr[1000];
int Search()
{
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (Arr[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    if (Arr[l] == x)
    {
        return l;
    }
    return -1;
}
void xuat(int ktra)
{
	if(ktra!=-1)
	{
		cout<<"phan tu x nam o vi tri "<<ktra+1;
	}
	else 
	{
		cout<<"khong co phan tu x trong mang";
	}
}

int main()
{
    cout << "Nhap n: ";
    cin >> n;
    cout<<"Nhap cac phan tu cua mang da sap xep: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    cout << "Nhap x: ";
    cin >> x;
    int ktra = Search();
    xuat(ktra);
    return 0;
}