//Bài toán chia kẹo
#include <iostream>
#include <math.h>
using namespace std ;

int main()
{
    long n , f[51][10003] , a[55] , tong ;
    cin >> n ;
    for ( int i =1 ; i <= n ;i ++)
    {
        cin >> a[i];
        tong = tong + a[i] ;
    }
    long kq = tong ;
    tong = tong /2 ;
    f[0][0] = 0 ;
    for (int i = 0 ; i <= n ; i ++)
    for ( int   j = 0 ; j <= tong ; j ++)
    if ( i == 0 || j == 0) f[i][j] = 0 ; else
    if ( a[i] > j ) f[i][j] = f[i-1][j]; else
    {
        f[i][j] = max(f[i-1][j] , f[i-1][j-a[i]] + a[i]);
    }
    cout << abs(kq -  2*f[n][tong]) ;
    return 0 ;
}
