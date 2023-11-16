#include <bits/stdc++.h>
using namespace std;
void nhapmang(long long int arr[]  ,long long  int n ) {
    for (int i = 0 ; i < n ; i++ ) {
        cin>>arr[i];
    }
}
int main () {
    long long int arr[1000000] , sum =0 ,n ;
    cin>>n;
    nhapmang(arr,n);
    for (int i = 0 ; i < n ; i ++ ) {
        sum += arr[i];
    } 
    cout<<sum;
    return 0; 
}