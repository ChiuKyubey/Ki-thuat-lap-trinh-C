//12.Sinh tất cả hoán vị của tập n phần tử.
#include <iostream>
using  namespace std;
 
int n, kq[11], dd[11], a[11];
 
void xuat()
{
    for (int j=1; j<=n; j++)
        cout<< a[kq[j]]<<" ";
    cout << endl;
}
 
void backtrack(int i) // vi tri 
{
    if (i>n) xuat();
    for (int j=1; j<=n; j++)
        if (dd[j]==0)
        {
            dd[j]=1; // danh dau da lay
            kq[i]=j; 
            backtrack(i+1);
            dd[j]=0; 
        }
}
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++) 
    {
    	cin >> a[i]; 
        dd[i]=0; 
    }
    backtrack(1);
}



