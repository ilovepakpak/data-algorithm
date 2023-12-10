#include <iostream>
using namespace std;
void matrixIn(int arr[100][100], int &n, int &m)
{
    cout << "Nhap n ";
    cin >> n;
    cout << "Nhap m ";
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Nhap vao gia tri cua A[" << i << "]"
                 << "[" << j << "]=";
            cin >> arr[i][j];
            cout << endl;
        }
    }
}
void matrixOut(int arr[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int max_Matrix(int arr[100][100], int n, int m)
{
    int max = arr[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    return max;
}
int Sum_matirx(int arr[100][100], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}
void reversematrix(int arr[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
               
            }
            else
            {
                arr[i][j] = arr[j][i] + arr[i][j];
                arr[j][i] = arr[i][j] - arr[j][i];
                arr[i][j] = arr[i][j] - arr[j][i];
            }
        }
    }
}
int tangDan(int arr[100][100], int n , int m ) {
    bool swapped = false;
    for (int i = 0 ; i < m ; i++) {
        for (int j =0 ; j < m ; j++) {
            for (int k = n -1 ; k < n ;k--) {
                if (arr[k][i] < arr[k-1][i]) {
                    swap(arr[k][i],arr[k-1][i]);
                    swapped =true; 
                }
            }
        } if(swapped == false) {
            break;
        }
    }return 0;
}
int main()
{
    int arr[100][100], n, m;
    matrixIn(arr, n, m);
    matrixOut(arr, n, m);
    cout << "Max cua ma tran la " << max_Matrix(arr, n, m) << endl;
    cout << "Tong cua ma tran la " << Sum_matirx(arr, n, m) << endl;
   // reversematrix(arr, n, m);
   // matrixOut(arr, n, m);
    tangDan(arr,n,m);
    matrixOut(arr,n,m);
    return 0;
}