#include<iostream>
using namespace std;
void nhapmang(int arr[10000][10000],int n , int m ) {
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cin>>arr[i][j];
        }
    }
}
void inmang(int arr[10000][10000],int n , int m ) {
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cout<<arr[i][j];
        }
    }
}
void timsum(int arr[10000][10000] , int n ,int m) {
        int sum=0;
    for (int i = 0 ; i <n;i ++) {
        for (int j =0;j < m ; i++) {
            sum+=arr[i][j];
        }
    }
}
void timx (int arr[10000][10000] , int n , int m , int x ) {
    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; i < m ;i++) {
            if (arr[i][j]==x ) {
                cout<<"Phan tu can tim co tai vi tri i va j lan luot la :" <<i<<" "<<j;
            }
        }
    }
}
void timmax(int arr[10000][10000],int n, int m ) {
    int max= arr[0][0];
    for (int i = 0 ; i < n ; i++) {
        for (int j =0 ; j <n ;j++) {
            if (arr[i][j]>max) 
            max=arr[i][j];
        }
    }cout<<max;
}
void tinhtongdong(int arr[10000][10000],int n ,  int m) {
        int sumline =0; 
    for (int i=0; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            sumline+=arr[i][j];
        }
        cout<<sumline;
        sumline=0;
    } 
}
 int main () {
    int arr[10000][10000],n,m,x;
    cin>>n>>m>>x;
    nhapmang(arr,n,m);
    inmang(arr,n,m);
   
    timsum(arr,n,m);
    timx(arr,n,m,x);
    tinhtongdong(arr,n,m);
    return 0;
} 