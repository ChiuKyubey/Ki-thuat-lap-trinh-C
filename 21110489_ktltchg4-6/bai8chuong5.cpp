//Viết chương trình kiểm tra một chuỗi có đối xứng không?
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i, t=0;
    int n=s.length();
    for(i=0;i<n/2;i++)
    {
        if(s[i]==s[n-i-1])
            t=-1;
        else
            t=0;
    }
    if(t==-1)
        cout<<"LA CHUOI DOI XUNG";
    else
        cout<<"KHONG LA CHUOI DOI XUNG";
}