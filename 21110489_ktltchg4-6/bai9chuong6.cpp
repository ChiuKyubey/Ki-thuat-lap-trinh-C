//9. Viết chương trình đếm số lần xuất hiện của từng loại ký tự trong một chuỗi.
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std ;

int main()
{
    string s;
    int d[10000] ;
    getline(cin,s) ;
    for ( int i= 0 ;i < s.length(); i ++)
        d[s[i]] ++ ;
    for ( int i =0 ; i <= 200 ; i ++)
        if ( d[i] > 0)
        cout << "so lan ki tu : " << (char )i << " xuat hien la: " << d[i] << endl  ;
    return 0 ;
}



