//Viết hàm chuyển một mảng hai chiều thành một mảng một chiều.
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    int m, n;
    cout << "Nhap m dong: ";
    cin >> m;
    cout << "Nhap n cot: ";
    cin >> n;

    int **A2D = new int *[m];
    for (int i = 0; i < m; i++)
    {
        A2D[i] = new int[n];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A2D[i][j];
        }
    }

    int *A1D = new int[m * n];
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A1D[k++] = A2D[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < m * n; i++)
    {
        cout << A1D[i] << " ";
    }

    return 0;
}