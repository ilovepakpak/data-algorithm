//Trien khai danh sach lien ket doi len menu
//1Them 1 phan tu vao dau danh sach 
//2Them 1 phan tu vao cuoi danh sach
//3Xoa 1 phan tu vao dau danh sach
//4Xoa 1 phan tu o cuoi danh sach
//5In danh sach tu dau 
//6In danh sach tu cuoi
#include<iostream>
using namespace std;
struct Node {
    int Data;
    Node *Next , *Pre;
};
typedef Node* List;
void insertFirst(int x , List &F , List &L) {
    List P = new (Node);
    P -> Data = x;
    P -> Pre = P -> Next =  NULL;
    if (F == NULL) {
        F = L = P ;
    } else {
        P -> Next = F;
        F -> Pre = P;
        F = P;
    }
} 
void insertLast(int x , List &F , List &L) {
    List P = new (Node);
    P -> Data = x;
    P->Next = P->Pre=NULL;
    if (F== NULL) {
        F = L = P;
    } else {
        L->Next = P;
        P -> Pre = L; 
        L = P;
    }
}
void deleteFirst(List &F , List &L) {
    List P = F;
    if (F == NULL) return;
    if (F==L) {
        F = L =NULL;
        delete(P);
    } else {
        F = L ->Next;
        F -> Pre = NULL;
        delete(P);
    }

}

void inLinkList(List &F  ) {
    List P = F;
    while (P != NULL) {
        cout<<"\n"<<P->Data;
        P = P ->Next;
    }
}
void inLinkLast(List &F) {
    List P = F;
    while (P != NULL) {
        cout<<"\n"<<P->Data;
        P = P ->Pre;
    }
}

int main() {
    int choser;
   List F , L;
   F = L = NULL;
   int x =10, i = 0;
        insertFirst(x, F,L);
        insertFirst(i, F,L);    
    deleteFirst(F,L);
    inLinkList(F);
 /*  cout<<"=============MENU===========\n";
   cout<<"Nhap vao lua chon\n"; cin>>choser;
   cout<<"1.Them phan tu vao dau danh sach \n";
   cout<<"2.Them phan tu vao cuoi danh sach \n";
   cout<<"3.Xoa phan tu dau danh sach \n";
   cout<<"4.Xoa phan tu vao cuoi danh sach \n";
   cout<<"5.In danh sach tu dau\n";
   cout<<"6.In danh sach tu cuoi\n";
   cout<<"0.Thoat";
   switch (choser)
   {
   case 1 : insertFirst(x,F,L);
    break;
   case 2 : insertLast(x,F,L);
    break;
   case 3 : del;
    break;
   case 4 : (x,F,L);
    break;
   case 5: 
   break;
   case 6: inLinkList(F);
   break;
   case 
   default:0 
    break;
   } */
}