#include<iostream>
using namespace std;
void nhapmang(int arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
}
void inmang(int arr[], int num ) {
    for (int i = 0 ; i< num ; i++ ){
        cout<<arr[i]<<" ";
    }
}
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
main () {
    return 0;
}