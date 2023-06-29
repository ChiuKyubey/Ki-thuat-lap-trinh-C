//Viết bitcount đếm số lượng bit 1 của một số nguyên dương n
#include <iostream>
using namespace std;

long long DecToBin(long dec)
{
	long rem, i=1,dem=0;
    while(dec>0)
    {
        rem=dec%2;
        if(rem == 1)
        	dem++;
        dec=dec/2;
        i=i*10;
    }
    return dem;
}

int main()
{
	long dec;
    cin>>dec;
    cout << DecToBin(dec);
}
