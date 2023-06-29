//Bài toán tìm dãy con đơn điệu dài nhất
#include <iostream>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    int a[10000] , d[10000] ;
    for ( int i = 1 ; i <= n ; i ++) cin >> a[i] ;
    int kq ;


    for ( int i =1  ; i<= n;  i ++)
    {
        d[i] = 1 ;
        for ( int j = 1 ; j <= i -1 ; j ++)
            if (a[j] <  a[i] && d[i] < d[j] +1 ) d[i] = d[j] +1 ;
        kq= max(kq,d[i]);

    }
    cout << kq ;
    return 0 ;
}
