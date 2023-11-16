// A[] , n phan tu , nhap vao  1 so nguyen k hay xoa trong mang a vi tri thu k ;
// Cho A[n] hay in ra tat ca doan tang dai nhat cua mang A[];
// 9 - 1 3  5 2 7 10 15 4 9 = ?
#include <iostream>
using namespace std;
void nhap(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void in(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int chen(int arr[], int &n, int x, int k)
{
    for (int i = n; i > k; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[k] = x;
    n++;
    return 0;
}
int couint(int arr[], int n)
{
    int currentresult = 1, finalresult = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            currentresult++;
        }
        else
        {
            finalresult = max(currentresult, finalresult);
            currentresult = 1;
        }
    }
    return finalresult;
}
int xoa(int arr[], int &n, int k)
{
    for (int i = k; i <= n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    return 0;
}
int intang(int arr[], int n)
{
    int currentresult = 1, finalresult = 1;
    int count = couint(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            currentresult++;
            if (count == currentresult)
            {
                for (int j =i - count +1 ; j <= i ; j++)
                {
	    cout << arr[j]<<" ";
	}
    }
}
else
{
    currentresult = 1;
}
}
return 0;
}
int main()
{
int arr[100000], n, x, k;
cin >> n;
    nhap(arr, n);
    // cout<<"Nhap vao gia tri x va vi tri k can chen"; cin>>x>>k;
    // chen(arr,n,x,k);
    // xoa(arr,n,k);
    cout << "gia tri tang la " << couint(arr, n)<<endl;
    // in(arr,n);
    intang(arr, n);
    return 0;
}
