#include <iostream>
using namespace std;
void nhapmang( int arr[], int num)
{
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
}
void  swap(int &a , int &b){ 
    int c =0 ;
    a =c ;
    a =b ;
    b =c;
} 
void arrayreverse(int arr[],int num) {
    for (int i = 0 ; i < num/2 ; i++ ) {
        if (i == num/2) {
            break;
        }
        int c ;
        c = arr[num-1-i];
        arr[num-1-i] =arr[i];
        arr[i] =c;
    }
}
void inmang(int arr[], int num ) {
    for (int i = 0 ; i < num ; i++) {
        cout<<arr[i]<<" ";
    }
}
int main () {
    int arr[100], num;
    cin>>num;
    nhapmang(arr,num);
    arrayreverse(arr,num);
    inmang(arr,num);
    return 0;
}
