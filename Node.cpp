#include<bits/stdc++.h>
using namespace std;
//DN Node();
struct Node {
    int data;
    Node *next;
};
//Dinh nghia DSLK
typedef struct Node* node;
node makeNode(int x) {
    node tmp = new Node();
    tmp -> data = x ;
    tmp -> next = NULL;
    return tmp;
}
// Kiem tra rong 
bool empty(node a ) {
    return a = NULL;
}
//Dem so phan tu trong dslk
int Size(node a) {
    int count =0;
    while (a != NULL) {
        count++;
        a = a -> next;
    }
    return count;
}
//Them 1 phan tu vao dau danh sach lien ket 
void insertFirst(node &a, int x){
    node tmp = makeNode(x);
    if (a==NULL) {
        a = tmp;
    }
    else {
        tmp -> next = a;
        a = tmp;
    }
}
//Them phan tu vao cuoi danh sach lien ket 
void insertLast(node &a , int x) {
    node tmp = makeNode(x);
    if (a==NULL) {
        a=tmp;
    } 
    else {
        node p = a;
        while (p -> next != NULL) {
            p = p-> next;
        }
    p -> next = tmp;
    }
}
// Xoa dau phan tu trong DSLK
void deleteFirst(node &a ) {
    if (a != NULL) return;
    a -> next;
}
//Xoa phan tu cuoi danh sach lien ket
void deletLast(node &a) {
    if (a == NULL)return ;
    node truoc = NULL , sau = a; 
    while (sau -> next != NULL) {
        truoc = sau;
        sau = sau -> next;
    }
    if (truoc == NULL) {
        a = NULL;
    } else {
        truoc -> next = NULL;
    }

}
//In danh sach lien ket ra console.
void inDS (node a) {
    while (a!=NULL){
        cout<<a -> data <<" ";
        a = a -> next;
    }
}

int main () {
    node head = NULL;
    cout<<"Nhap so phan tu can chen vao dau danh sach lien ket ";
    int a , i =0 ; cin>> a; 
    while ( i <= a ) {
        ++i;
    int x ; cout<<"Nhap vao phan tu can chen vao dau danh sach lien ket " ;
    cin>>x;
    insertFirst(head,x);
    }
    cout<<" Xoa o dau danh sach lien ket ";
    deletLast(head);   
    inDS(head);
    return 0;
}