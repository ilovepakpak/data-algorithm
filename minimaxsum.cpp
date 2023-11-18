#include <iostream>
using namespace std;
void nhapmang(long int arr[], int num)
{
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
}
void inmang(long int arr[], int num ) {
    for (int i = 0 ; i< num ; i++ ){
        cout<<arr[i]<<" ";
    }
}
long int  max1 (long int arr[], int num  ) {
    long int max =arr[0];
    for (int i = 0 ; i< num ; i++ ){
        if (arr[i]>max ) {
            max = arr[i];
        }
    }
    return max;
}
long int tong(long int arr[] , int num ) {
    long int tong =0;
    for (int i = 0 ; i< num ; i++) {
        tong +=arr[i];
    }
    return tong;
}
long int min1 (long int arr[], int num ) {
    long int min = arr[0];
    for (int i = 0 ; i< num ; i++ ){
        if (arr[i]<min ) {
            min = arr[i];
        }
    }
    return min;
}
int main () {
    long int arr[10000] , num ;
    nhapmang(arr,5);
    //inmang(arr,5);
   // cout<<tong(arr,num);
   cout<<tong(arr,5)-max1(arr,5)<<" "<<tong(arr,5)-min1(arr,5);
    return 0;
}
