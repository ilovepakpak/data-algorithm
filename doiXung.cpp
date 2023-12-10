#include<iostream>
#include<math.h>
using namespace std;
bool reverse_num(int n){ 
  int reverse = 0; 
  while (n > 0) {
    reverse = reverse * 10 + n % 10;
    n /= 10;
  }
  return reverse;
}
bool isPrime(int n ) {
    if ( n <= 2 ) return false;
    int count =0;
    for (int i = 2 ; i <= sqrt(n) ; i++) {
        if (n%i==0) {
            count++;
        }
    } 
    if (count==0) return true;
    else return false;
}
bool isDX(int n){
    int temp = n;
    cout<<temp;
    if (temp == reverse_num(n)) return true;
     return false;
}
void countBX (int a , int b  ) {
    int i = a,count =0;
    while(i <= b) {
        if (isPrime(i)==true && isDX(i)==true) {
            count++;
        } i++;
    }cout<<count;
}
int main () {
        int a,b ; 
        cin>>a>>b;
        countBX(a,b);
        return 0;
    } 