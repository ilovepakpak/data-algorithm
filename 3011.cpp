#include<iostream>
using namespace std;
void nhapmang(long int arr[], int &num)
{   
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
}
int demTang(long int arr[], int num) {
    int count = 1 , max = 0 ; 
    for (int i = 0 ; i< num ; i++) {
        if (arr[i] > arr[i+1]) {
            count =1;
        } else {
            count++;}
        if (max < count ) 
            max = count;
        }
        return max;
    }
void xuatMang(long int arr[] , int num , int max) {
    int count = 1 , i=0 ;
   while (i < num) {
        if (arr[i] >= arr[i+1]) {
            count =1;
        } else {
            count++;}
            if (count == max) {
                //cout<<i+2;
            for (int c = i+2-count ;  c <= i+1; c++  ) {
                //cout<<max-i<<" ";
                cout<<arr[c]<<" ";
            }
        } 
            i++;
    }
}
int main () {
    long int arr[100];
    int n = 10;
    nhapmang(arr,n);
    xuatMang(arr,n,demTang(arr,n));
    return 0;
}