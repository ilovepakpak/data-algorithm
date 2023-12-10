#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};
typedef Node* Stack;
Node *createNode( int x) { 
    Stack P = new Node  ;
    P ->next = NULL;
    P -> data = x;
    return P;
}
void insertFirst(int x ,Stack &pHead ) {
    Stack  P = createNode(x);
    P -> next = pHead;
    pHead = P;
}
bool strackEmpty (Stack &pHead  ) {
     return pHead =NULL;
}
int stackTop (Stack &pHead) {
    return pHead -> data;
}
void popStack ( Stack &pHead) {
    Stack P = pHead;
    pHead = pHead ->next;
    delete(P);
}
void stackInit(Stack &pHead) {
    pHead = NULL;
}
void pushStack(Stack &pHead , int x ) {
    Stack P  = createNode(x);
    P-> next =pHead;
    pHead =P;
}
void separateN(Stack pHead , int n) {
    while (n!=0) {
        pushStack(pHead,n%10);
        n=n/10;
    }
    while (!strackEmpty(pHead)) {
        cout<<stackTop(pHead)<<"\t";
        popStack(pHead);
    }
}
int main (){
    int x;
    Stack pHead = NULL;
    cout<<"nhap vao x";
    cin>>x;
    stackInit(pHead);
    separateN(pHead,n);
    return 0;
}