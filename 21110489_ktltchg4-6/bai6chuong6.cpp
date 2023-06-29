//Viết chương trình đếm và liệt kê các mảng con tăng dần trong mảng một chiều các số nguyên.
//Ví dụ: 6 5 3 2 3 4 2 7 các dãy con tăng dần là 2 3 4 và 2 7 
#include <iostream>
#include <math.h>
using namespace std ;

int main()
{
    int n ,a[100000],d[100000];
    cin >> n ;
    for ( int i =1 ; i <= n ;i ++)
    {
        cin >> a[i] ;
        d[i]=1 ;
    }
    d[1] = 0 ;
    a[0] = - INT_MAX ;
    int bat = 0;
    for ( int i =1  ; i <= n ; i ++)
        if ( a[i] > a[i-1]) d[i] = d[i-1] +1 ;
    for ( int i =1 ; i<= n ; i++)
    {
        if (d[i] == 2)
        {
            cout << a[i-1] <<" "<< a[i] <<" ";
            bat =1 ;
        }
        else if ( d[i] >  2) cout << a[i] <<" ";
        else if ( d[i] == 1 && bat == 1)
        {
            cout << endl ;
            bat =0 ;
        }
    }
    return 0 ;
}


