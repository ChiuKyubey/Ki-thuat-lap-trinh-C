//Xâu con chung dài nhất
#include <iostream>
using namespace std ;
int main()
{
    string s1,s2 ;
    int n , kq , d[500][500] ;

   // cin >> n ;
    getline(cin,s1);
    getline(cin,s2) ;

    for ( int i = 0  ; i < s1.length(); i ++)
        for ( int j = 0 ; j < s2.length(); j ++)
        {
            if ( s1[i] == s2[j])
            {
            d[i][j] = d[i-1][j-1] + 1;
            }
            else d[i][j] = max(d[i][j-1],d[i-1][j]) ;
        kq = max(kq , d[i][j] ) ;

        }
    cout << kq ;
    return 0 ;
}
