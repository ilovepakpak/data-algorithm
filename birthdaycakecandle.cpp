#include<iostream>
using namespace std;
void nhapmang(int arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
}
int candle(int num,int arr[]) {
    int max =arr[0];
    for (int i ; i < num ; i++ ){
        if (max < arr[i])
        max =arr[i];
    }
    return max;
}
int count(int num, int arr[]) {
    int count = 0, cake = candle(num,arr);
    for(int i = 0 ; i <num ; i++) {
    if (arr[i]== cake ) {
        count++;
    }}
    return count;
}
int main ( ) {
    int arr[100000],num;
    cin>>num;
    nhapmang(arr,num);
    cout<<count(num,arr);
    return 0;
}