
#include<iostream>
using namespace std;
struct Node
{
    Node *Next ;
    int Data;
};
typedef Node* List;
Node* createNode ( int a, List &first) {
    List P = new (Node);
    if(first == NULL ) {
        first =P;
    }
    else {
    P ->Data = a;
    P -> Next = NULL;
    }
    return P;
}
void createFirst(List &first , int a ) {
    List P = createNode(a,first);
    P ->Data = a;
    P ->Next = first;
    if ()
}
void inRa(List &first) {
    List P = first;
    while (P != NULL) {
        cout<<P->Data;
    P= P->Next;
    }
}
int main () {
    List F =NULL; 
    int i = 0, c= 10;
    while(i <=c ) {
        createFirst(F,i);
        i++;
    }
    inRa(F);
    return 0;
}