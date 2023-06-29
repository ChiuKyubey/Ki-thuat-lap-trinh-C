/*Cho ma trận A kích thước MxN (0<M,N<100) chứa các số thực nhỏ hơn 100000. 
Một điểm Xi,j được gọi là điểm lồi nếu như nó lớn hơn cả 4 điểm trên, dưới, trái, 
phải của nó*/
#include<iostream>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int a[102][102] = {0};
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    int min = 100001;
    int min_i = -1;
    int min_j = -1;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] > a[i-1][j] &&
                a[i][j] > a[i][j-1] &&
                a[i][j] > a[i+1][j] &&
                a[i][j] > a[i][j+1] &&
                min > a[i][j]){
                    min = a[i][j];
                    min_i = i;
                    min_j = j;
            }
    if (min == 10001)
        cout << -1;
    else 
        cout << min_i-1 << " " << min_j-1;
    
    return 0;
}