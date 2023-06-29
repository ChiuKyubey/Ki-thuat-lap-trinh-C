#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n; 
    cin >> n;
    int a[10001];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    sort(a,a+n, greater<int>());
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    a[n] = k;
    sort(a, a + n + 1, greater<int>());
    for (int i = 0; i <= n; i++)
        cout << a[i] << " ";
    
    return 0;
}