//Viết chương trình in ra tam giác Pascal

#include <iostream>
#include <math.h>

using namespace std ;

int main()
{
    int n ,a[104][104]={0};
    cin >> n ;
    a[1][1] = 1 ;
    for ( int i = 2; i <= n ; i ++)
        for ( int j =1 ;j <= n ; j++)
            a[i][j] = a[i-1][j-1] + a[i-1][j] ;
    for ( int i =1 ; i <= n ; i ++)
    {
        for (int j = 1; j<= i ; j++) cout << a[i][j]<<" ";
        cout<< endl ;
    }
    return 0 ;
}



