//Viết chương trình đảo ngược các từ trong một chuỗi, mỗi từ được định nghĩa là cách nhau ít nhất một ký tự trắng
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std ;
#define N 100
int main()
{
   string s ,mang;
    getline(cin,s) ;
    for ( int i = 0 ; i < s.length() ; i ++)
    {
        if ( s[i] != ' ')
        {
        mang = s[i] + mang;
        }
        else
        {
        cout << mang  ;
        mang="";
        cout<<s[i] ;
        }
    }
    cout << mang ;
    return 0 ;
}


