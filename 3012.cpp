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
void in(long int arr[],int left,int right){
    for(int i=left;i<=right;i++){
        cout<<arr[i]<<" ";
    }
}
void inTang(long int arr[], int num ){
    int count = 1 , max = 0 ; 
    for (int i = 0 ; i< num ; i++) {
        if (arr[i] > arr[i+1]) {
            count =1;
        } else  {
            count++;
             }
             if(count==demTang(arr,num)){
            in(arr,i-count,i+1);
        }
    }
}
int main () {
    long int arr[100];
    int num = 10;
    nhapmang(arr,num);
    cout<<demTang(arr,num)<<endl;
    inTang(arr,num);
    return 0;
}