#include <iostream>
using namespace std;
void nhapmang(long int arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
}
/*void inmang(int arr[], int num ) {
    for (int i = 0 ; i< num ; i++ ){
        cout<<arr[i]<<" ";
    }
}*/
void highlowscore(long int arr[] , int num , int countmax = 0,int countmin = 0 ) {
    long  int temp , max1 = arr[0] , min1 = arr[0],mintemp ,maxtemp;
     for (int i = 0 ; i < num;i++) {
        temp = arr[i];
       // cout<<temp<<" ";
       if (temp >max1) {
        countmax++;
        max1 = temp;
      //  cout<<countmax<<endl;
       }
       else if (temp<min1 ) {
        countmin++;
        min1 = temp;
       // cout<<countmin<<endl;
       } 
    }
    cout<<countmax<<" "<<countmin;
}
int main () {
    long int arr[1000000], num ;
    cin>>num;
    nhapmang(arr,num);
    highlowscore(arr,num);
}