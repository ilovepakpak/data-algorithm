#include<iostream>
using namespace std;
long long int s1(long int &n ) {
	long long int i=1, sum=1;
	while (i <=n) {
		sum*=i;
		i++;
		}
		return sum;
	}
int main () {
	long int n,count =0,sum ;
  cin>>n;
  sum=s1(n);
  while (sum >= 0) {
  	if (sum%10==0)
	{	sum/=10;
    count++; }
	break;
  }
  cout<<count;
  return 0;
}
