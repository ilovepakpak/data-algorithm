//Cho mang a gom n phan tu hay viet chuong trinh tinh cac so le vua nhap ket qua tra ve la 1 so int ;
#include<iostream>
using namespace std;
void nhapMang(int A[], &n) {
	for (int i = 0 ; i < n ; i++) {
	cin>>A[i];	
	} 
}
void xuatMang(int A[] , n ) {
	for (int i = 0 ; i < n ; i++ ) {
	cout<<A[i];
	}
}
void taoMang(int A[] , int nA , int B[] , int nB , int C[],int &nC )  {
	nC  = nB +nA;
	int iA = 0 , iB =0;
	for (iC = 0 ; i< nC;iC++) {
		if (iA == nA) {
			C[iC] = B[iB];
			iB++;
		}
		else if (iB == nB ) {
			C[iC] = A[iB];
			iA++;
		}
		else if (A[iA] > B[iB] ) {
			C[iC] = B[iB];
			iB++;
		}
		else if (A[iA] < B[iB]) {
			C[iC] = A[iA];
			iA++;
		}
	}
	}
int main () {
	 	
}
