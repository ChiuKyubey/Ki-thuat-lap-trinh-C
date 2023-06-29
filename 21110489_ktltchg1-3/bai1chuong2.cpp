//Tìm một số trong một mảng bằng lính canh.
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;


int main()
{
    int n;
    int Arr[1000];
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    int x;
    cout << "Nhap x: ";
    cin >> x;
    Arr[n] = x;
    int i = 0;
    while (Arr[i] != x)
    {
        i++;
    }
    if (i < n)
    {
        cout <<"vi tri cua x: "<< i+1 << endl;
    }
    else
    {
        cout << "Khong co";
    }

    return 0;
}