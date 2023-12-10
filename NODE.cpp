#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};
typedef Node* List;
Node* createNode(int a ) {
    List P = new Node;
    P -> data = a;
    P -> next = NULL;
    return P;
}
void insertFirst(int a , List &pHead) {
    List P = createNode(a);
    
        P -> next = pHead;
        pHead =P;
    }

void inLinkList(List &pHead) {
    List P = pHead;
    while (P != NULL ) {
        cout<<P ->data <<" ";
        P = P ->next;
    }
}
Node* insertLast(int x, List &pHead ,  List &pTail) {
    List P = pHead ;
    List Q = createNode(x);
    while (P ->next != NULL) {  
        P = P->next;
    } if ( P -> next ==NULL) {
        P ->next =Q;
    }
    return pHead;
}
/*
Node* deleteLast (List &pHead , List &pTail) {
    List P = pHead;
    while (P ->next->next==NULL) {
        P  = P -> next;
        delete(P->next);
        P->next ==NULL;
    }
        return pHead;
} */
Node* deleteFirst (List &pHead ) {
    List P = pHead;
    pHead = pHead -> next;
    delete(P);
    return pHead;

}
Node* deleteLast(List &pHead , List &pTail) {
    List P = pHead;
    while (P ->next != NULL) {
        
        P = P->next;
    }
    if (P ->next ->next== NULL) {
            delete(P->next);            
        }
    return pHead;
}
Node* deleteAnywhere( int x ,List &pHead) {
    List P ;
    for(List Q  = pHead;  Q -> next !=  NULL ; Q =Q -> next) {
        if (Q -> data == x) {
            P ->next =Q->next;
            delete(Q);
            return pHead;
        }
        P =Q;
    }

    return pHead;
}
int main (){
    List pHead = NULL;
    List pTail = NULL;
    int a =1;
    do {
        cout<<"Nhap vao cho den khi gap 0 la dung"; cin>>a;
        insertFirst(a,pHead);

    } while(a!=0);
    //deleteLast(pHead,pTail);
    //cout<<"Sau khi them node vao cuoi danh sach";
   // deleteFirst(pHead);
   //insertLast(12,pHead,pTail);
   deleteAnywhere(1,pHead);
    inLinkList(pHead);
    return 0;
}