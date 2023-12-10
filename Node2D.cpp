#include<bits/stdc++.h>
using namespace std;
//Dinh nghia Node .
struct Node {
    int Data;
    Node* Next;
    Node* Pre; 
};
//Dinh nghia List .
typedef  Node* List;
Node* CreateNode(int a) {
    List P  ; P = new Node;
    P -> Data;
    P -> Next = P -> Pre = NULL;
    return P;
}
//Them vao dau dslk doi .
void InsertFirst ( List &pHead  , List &pTail , int a ) {
    List P = CreateNode(a);
    if (pHead == NULL) { pHead = P;
    pTail = P;
    } else {
        P -> Next = pHead;
        pHead -> Pre = P;
    }
}
//Them vao dau dslk doi .
void InsertTail (List &pHead, List &pTail , int a) {
    List P = CreateNode(a);
    if (pTail == NULL) pHead = pTail = P;
    else {
        P -> Pre = pTail; pTail -> Next = P;
    }
}
//Tim phan tu trong danh sach lien ket . 
Node* Search(List pHead ,int x ) {
    for (List P = pHead ; P!= NULL ; P = P -> Next) 
        if (P ->Data==x) return P;
        return NULL;
}
//Them phan tu x vao trong vi tri m .
void InsertIndex(List &pHead , List &pTail , int x , int m) {
    List P,Q; Q= Search(pHead,x);
    if (P==NULL) InsertFirst(pHead,pTail,m);
    else {
        if (Q = pTail) InsertTail(pHead,pTail,m);
        else {
            P = CreateNode(m);
            P->Next=Q->Next;
            P->Pre=Q;
            Q->Next->Pre=P;
            Q->Next=P;
        }
    }
}
//Xoa phan tu dau tien trong dslk doi .
void DeleteFirst(List &pHead , List &pTail) {
    List P = pHead;
    if(pHead == NULL) return;
    if (pHead == pTail) {
        pHead = pTail = NULL;
        delete(P);
    } else {
        pHead  = pTail ->Next;
        pHead -> Pre = NULL;
        delete(P);
    }
}
//Xoa phan tu cuoi cung trong dslk doi .
void DeleteTail(List &pHead , List &pTail) {
    List P = pTail;
    if (pHead==NULL) return ;
    if (pHead==pTail) {
        pHead = pTail = NULL ; delete(P);
    } else {
        pTail = pTail ->Pre;
        pTail ->Next = pTail;
        delete(P);
    }
}

//In danh sach lien ket bang mang 2 chieu .
void PrintList(List pHead) {
    if (pHead==NULL) return;
    PrintList(pHead -> Next);
    cout<<pHead->Data<<"\t";
}
int main() {
  return 0;
}