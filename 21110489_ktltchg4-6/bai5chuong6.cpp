//Viết chương trình tính tích của 2 ma trận
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std ;
#define N 200
int main()
{
    int a[N][N] , b[N][N] , c[N][N] , n ;
    cin >> n ;
    for ( int i =1 ; i <= n ; i ++)
        for ( int j =1 ; j <= n ; j ++) cin >> a[i][j] ;
    for ( int i =1 ; i <= n ; i ++)
        for ( int j =1 ; j <= n ; j ++) cin >> b[i][j] ;

    // nhan ma tran

    for ( int i =1 ; i <= n ; i ++)
        for ( int j =1 ; j <= n ; j++)
            for (int k = 1 ; k <=n ; k ++)

    {
        c[i][j] = a[i][k]*b[k][j] +c[i][j] ;
    }
    for (int i =1 ; i <=n ;i ++)
    {
        for ( int j =1 ; j <= n ; j ++) cout <<c[i][j] <<" ";
        cout << endl ;
    }
    return 0 ;
}
