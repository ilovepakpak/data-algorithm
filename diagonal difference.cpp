#include <bits/stdc++.h>
using namespace std;
long long int a[100][100];
void nhapmang(long long int n , long long int a[][] )
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}
void inmang(long long int n, long long int a[][])
{   int c1=0 , c2=0;
    for (int i = 0; i < n; i++)
    {
     c1+=a[i][i];
     c2+=a[i][n-1-i];   
    }
    cout<<c1<<" "<<c2;
}
int main()
{
    long long int  n;
    cin >> n;
    nhapmang(n);
    inmang(n); 
    return 0;
}