#include <iostream>
#include<math.h>
using namespace std;
void nhapmang(long int arr[], int num)
{
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
}
int demtang(long int arr[], long int num, long int f[])
{
    long int result=1;
    for (int i=1; i<num; i++) {
    f[i] = 0;
    for (int j=0; j<i; j++) if (arr[j] < arr[i]) {
        f[i] = max(f[i], f[j] + 1);
    }
    result = max(result, f[i]);
}
return result;
}
int main()
{
    long int arr[1000000], num , f[1000000];
    cin >> num;
    nhapmang(arr, num);
    cout << demtang(arr, num,f);
    return 0;
}