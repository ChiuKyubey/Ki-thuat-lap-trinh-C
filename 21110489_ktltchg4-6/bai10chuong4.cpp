//Tìm phần tử có tần số xuất hiện nhiều nhất trong một mảng.
#include<iostream>
#define size 200
using namespace std;

void nhap(int a[], int &n)
{
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
}

int timVtMax(int a[], int n)
{
	int max = INT_MIN;
	int vtMax;
	for(int i = 0; i < n; i++)
		if(a[i] > max)
		{
			max = a[i];
			vtMax = i;
		}
	return vtMax;
}

int tim(int a[], int n)
{
	int b[size] = {0};
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(a[i] == a[j])
				b[i]++;
	int vtMax = timVtMax(b, n);
	return a[vtMax];
}

void xuat(int x)
{
	cout << x << endl;
}

int main()
{
	int a[size], n;
	nhap(a, n);
	int kq = tim(a, n);
	xuat(kq);
	return 0;
}