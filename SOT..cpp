#include <iostream>
using namespace std;
 void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
 void bubbleSort(int arr[], int x)
{
    for (int i = 0; i < x - 1; i++)
    {
        for (int j = i + 1; j < x - 1 + 1; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
void inMang(int arr[], int x)
{
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
}
void insertSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--)
        {
            swap(arr[j], arr[j - 1]);
        }
    }
}
 void selectionSort(int arr[] , int n) {
    for (int i = 0 ; i< n ; i++) {
        int min = i;
        for (int j = i+1; j < n ; j++) {
            if (arr[j]<arr[min])
                min = j;
        }
        if (min != i)
        swap(arr[min],arr[i]);
    }
}
int main()
{
    int arr[10] = {2, 3, 4, 5, 612, 31, 3215, 6, 7, 9};
    int x = 10;
    // bubbleSort(arr,x);
    // insertSort(arr, x);
    selectionSort(arr,x);
    inMang(arr, x);
    return 0;
}