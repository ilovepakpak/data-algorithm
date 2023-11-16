#include<iostream>
using namespace std;
long long int s1(int n ) {
	long long int i=1, sum=1;
	while (i <=n) {
		sum*=i;
		i++;
		}
		return sum;
	}
double s2 (int n ) {
	long double sum =0 , i = 1;
		while (i <=n) {
			sum+= 1/i;
			i++;
			}
			return sum;
	}
void s3 (int n) {
	double sum=0; 
	for (int i=0 ; i <= n ; i++ ) {
			sum+= (double)1/s1(i);
		}
		cout<<(double)sum;
	}

int main (){
	long double n;
	cin>>n;
	cout<<s1(n)<<endl;
	cin>>n;
	cout<<s2(n)<<endl;
	cin>>n;
	s3(n);
	
}