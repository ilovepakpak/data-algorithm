#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next , *pre;
};
typedef Node* List;
Node *createNode( int x) {
    List P; 
    P ->data = x;
    P ->next = NULL;
    P ->pre =NULL;
    return P;
}
void createFirst( int x , List &pHead) {
    List P  = createNode(x);
    if (pHead  == NULL) {
        
        P ->data = x;
        pHead = P;
        return;
    }
    pHead -> pre = P;
    P -> next = pHead;
    pHead = P;
}
Node *duyetLinkList( List &pHead , List  &pTail) {
    List P = pHead;
    while (P -> next == NULL) {
        cout<<P -> data << " ";
    }
    return pHead;
}
 int main () {
    List pHead , pTail;
    pHead = NULL;
    pTail = NULL;
    int x ;
    do {
        cout<<"Nhap vao cac phan tu cua danh sach lien ket , nhap '-' de dung " ; 
        cin>>x;
        createFirst(x,pHead);
    } while (x != '-');
    duyetLinkList(pHead,pTail);
    return 0;
     }