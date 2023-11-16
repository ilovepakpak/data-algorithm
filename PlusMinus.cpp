#include <iostream>
using namespace std;
void nhapmang(double arr[], double num)
{
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
}
float tong(double arr[], double num)
{
	double p = 0, n = 0, z = 0, sum=0,s1,s2,s3;
	for (int i = 0; i < num; i++)
{	
		if (arr[i] > 0)
		{
			p++;
		}
		else if (arr[i] < 0)
		{
			n++;
		}
		else
			z++;
	}
	//cout << p << " " << n << " " << z << " ";
	s1=(p / num);
	s2=(n / num);
	s3=(z / num);
	
	return (double)s1+s2+s3;
}

int main()
{
	double num, arr[1000000];
	cin >> num;
	nhapmang(arr, num);
	//	for (int i = 0 ; i < num ;i ++ ) {
	// cout<<arr[i];
//} 
cout << tong(arr, num);

return 0;
}
