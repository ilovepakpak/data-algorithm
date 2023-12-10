#include<iostream>
using namespace std;

int main (){
    long int a[1000000],n ,f[1000000];
   int result = 1;
   cin>>n;
   for (int i =0; i < n ; i++ ) {
    cin>>a[i];
   }
for (int i=1; i<=n; i++) {
    f[i] = 0;
    for (int j=0; j<i; j++) if (a[j] < a[i]) {
        f[i] = max(f[i], f[j] + 1);
    }
    result = max(result, f[i]);
}
cout<<result;
}