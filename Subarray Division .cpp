#include <iostream>
using namespace std;
void nhapmang( int arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
}
void subarray(int arr[], int num, int day, int month) {
        int result=0;
    /*if(sizeof(arr) == 0) {
        cout<<0;
    } 
    else if (sizeof(arr)==1) {
        cout<<1;
    } */
    for (int i = 0 ; i < num ;i++) {
        if (arr[i]+arr[i+1]==day || arr[i]+arr[i+1]==month) {
            result ++;
        } 
    }cout<<result;
}
int main (){
    int arr[100] , num,month , day;
    cin>>num;
    nhapmang(arr,num);
    cin>>day>>month;
    subarray(arr,num,day,month);

}