//Một dãy dấu ngoặc
#include<iostream>
#include<string.h>

using namespace std;
int m, n;
int arr[100];
int tinh();
void LietKeNP(int k);
void xuat();
void kiemTra();

int main () {
	cin >> m >> n;
	LietKeNP(0);
	return 0;
}

void LietKeNP(int k) {
	if (k == m) {
		kiemTra();
	}
	else {
		for (int i = 0; i <= 1; i++) {
			arr[k] = i;
			LietKeNP(k+1);
		}
	}
}

void kiemTra() {
	if (tinh() == n) {
		xuat();
	}
}

void xuat() {
	cout << endl;
	for (int i = 0; i < m; i++) {
		if (arr[i] == 0) {
			cout << "(";
		} 
		else {
			cout << ")";
		}
	}
}

int tinh() {
	int i = 0;
	int ngoacmo = 0;
	int dosau = 0;
	while (i < m ) {
		if (arr[i] == 0) {
			ngoacmo++;
		}
		else {
			if (ngoacmo == 0) {
				return -1;
			}
			if (ngoacmo > dosau) {
				dosau = ngoacmo;
			}
			ngoacmo--;
		}
		i++;
	}
	if (ngoacmo == 0) {
		return dosau;
	}
	else {
		return - 1;
	}
}