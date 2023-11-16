#include <iostream>
using namespace std;
void nhapmang(int arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
}
void inmang(int arr[], int num ) {
    for (int i = 0 ; i< num ; i++ ){
        cout<<arr[i]<<" ";
    }
}
int  max1 (int arr[], int num  ) {
    int max =arr[0];
    for (int i = 0 ; i< num ; i++ ){
        if (arr[i]>max ) {
            max = arr[i];
        }
    }
    return max;
}
int tong(int arr[] , int num ) {
    int tong =0;
    for (int i = 0 ; i< num ; i++) {
        tong +=arr[i];
    }
    return tong;
}
int min1 (int arr[], int num ) {
    int min = arr[0];
    for (int i = 0 ; i< num ; i++ ){
        if (arr[i]<min ) {
            min = arr[i];
        }
    }
    return min;
}
int main () {
    int arr[10000] , num ;
    nhapmang(arr,5);
    //inmang(arr,5);
   // cout<<tong(arr,num);
   cout<<tong(arr,5)-max1(arr,5)<<" "<<tong(arr,5)-min1(arr,5);
    return 0;
}
3