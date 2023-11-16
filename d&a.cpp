#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main (){
	long int  s1,s2,s3;
	long double a,b,c;
	cin>>s1>>s2>>s3;
	a = sqrt((s3*s1)/s2);
	b = s1/a;
	c = s2/b;
	cout<<4*(a+b+c);
  return 0;
}
