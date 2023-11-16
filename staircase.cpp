//StairCase 
#include<iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    int i = 1;
    while (i <= n ) {
       
        for (int j = 1 ; j <= n-i ;j++) {
            cout<<" ";
        }
        for (int f = n-i+1 ; f <=n ; f++) {
            cout<<"#";
        }
        cout<<endl;
         i++;
    } 
}