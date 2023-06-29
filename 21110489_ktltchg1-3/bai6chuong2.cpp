//Thực hiện ghép 2 mảng một chiều A, B để tạo mảng C theo nguyên tắc từng phần tử của mảng A xen kẻ từng phần tử của mảng B.
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void nhap(int &a, int A[]){
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    cout << endl;

}
int main()
{
    int m,n;
    int *A = new int[m];
    int *B = new int[n];
    cout << "so phan tu mang A: ";
    nhap(m,A);
    cout << "so phan tu mang B: ";
    nhap(n,B);
    int *C = new int[m + n];
    int i = 0, j = 0;
    int k = 0;
    while (i < m && j < n)
    {
        C[k++] = A[i++];
        C[k++] = B[j++];
    }

    while (i < m)
    {
        C[k++] = A[i++];
    }
    while (j < n)
    {
        C[k++] = B[j++];
    }
    for (int i = 0; i < m + n; i++)
    {
        cout << C[i] << " ";
    }

    return 0;
}