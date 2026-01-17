#include <stdio.h>
#include<stdlib.h>
typedef struct Node {
	int data;
	struct Node *link;
}Node;

typedef struct List{
	Node *first;
	Node *last;
}List;

void  Init(List &L){
	L.first=L.last=NULL;
}

Node *GetNode(int x){
	Node *p = (Node*)malloc(sizeof(Node));
	if(p==NULL)
		return NULL;
	p->data = x;
	p->link = NULL;	
	return p;
	}
	
void AddFirst(List &L,Node *new_ele){
	if(L.first == NULL){
		L.first = new_ele;
		L.last = new_ele;
	}else{
	new_ele->link = L.first;
	L.first = new_ele;		
	}
}

void AddBack(List &L,Node *new_ele){
	if(L.first == NULL){
		L.first = new_ele;
		L.last = new_ele;
	}else{
	 L.last->link = new_ele;
	L.last = new_ele;		
	}
}

void InsertFirst(List &L,int x){
	 Node *new_ele = GetNode(x);
	 if(new_ele == NULL)
	 	return;
	 AddFirst(L,new_ele);
}
void InsertBack(List &L , int x){
	Node *new_ele = GetNode(x);
	if (new_ele == NULL)
	return;
	AddBack(L,new_ele);
}
void CreateList(List &L){
	int x;
	do{
		printf("\nThem phan tu vao dau dslk(nhap -1 de ket thuc) : ");
		scanf("%d",&x);
		if(x==  -1){
			break;
		}
		InsertFirst(L,x);
	}while(x != -1);
	printf("\nDu lieu da nhap xong\n");
}
void CreateListBack(List &L){
	int x;
	do{
		printf("\nThem phan tu vao cuoi dslk(nhap -1 de ket thuc) : ");
		scanf("%d",&x);
		if(x==  -1){
			break;
		}
		InsertBack(L,x);
	}while(x != -1);
	printf("\nDu lieu da nhap xong\n");
}

void PrintfList(List L){
   Node *p = L.first;
   printf("\nCac phan tu da nhap : ");
	while(p != NULL){
		printf("%d ",p->data);
		p = p->link;
	}
}
int IsPrime(int n) {
    if (n < 2) 
        return 0; 
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;  
    }
    return 1;  
}

void ghepList(List &L,List &pList,List &nonPList){
	
	if(pList.first != NULL){
		L.first = pList.first;
		if(nonPList.first != NULL){
			pList.last->link = nonPList.first;
			L.last = nonPList.last;
		}
}}



//  if (pList.first != NULL) {
//        L.first = pList.first;  // Gán d?u danh sách L là d?u danh sách pList
//        if (nonPList.first != NULL) {
//            pList.last->link = nonPList.first;  // N?i cu?i danh sách pList v?i d?u danh sách nonPList
//            L.last = nonPList.last;  // Gán cu?i danh sách L là cu?i danh sách nonPList
//        } else {
//            L.last = pList.last;  // N?u nonPList r?ng, cu?i là pList.last
//        }
//    } else {
//        // N?u không có s? nguyên t?, dùng danh sách không ph?i nguyên t?
//        L.first = nonPList.first;
//        L.last = nonPList.last;
//    }
//}
void primeFirstList(List &L){
	List pList;
	List nonPList;
	Init(pList);
	Init(nonPList);
	Node *p =L.first;
	 while (p != NULL) {
       Node *next = p->link;
       p->link = NULL;
	if(IsPrime(p->data)){		
		AddBack(pList,p);
	}else{
	AddBack(nonPList,p);}
p = next ;}
	ghepList(L,pList,nonPList);
}

int count(List &L){
	int dem = 0;
	Node *p = L.first;
	while( p != NULL){
		dem++;
		p = p -> link;
	}
	return dem;
}

void AddViTri(List &L, int viTri, int x) {
    if (viTri < 0 || viTri > count(L)) {
        printf("Vi tri khong hop le!\n");
        return;
    }   
    Node *new_ele = GetNode(x);
    if (new_ele == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return;
    }
    if (viTri == 0) {  
        AddFirst(L, new_ele);
        return;
    }
    if (new_ele->link == NULL) { 
        L.last = new_ele;
    }
    Node *p = L.first;
    for (int i = 0; i < viTri-1 ; i++) {  
        p = p->link;
    }

    new_ele->link = p->link;
    p->link = new_ele;
    
  
}

void RemoveFirst(List &L) {
    if (L.first == NULL) { 
        return;
    }   
    Node *temp = L.first;  
    L.first = L.first->link;   
    free(temp); 
  
}

void RemoveLast(List &L){
	if(L.first == NULL){
		return;
	}
	if(L.first == L.last){
		free(L.last);
//	L.first = L.last = NULL;
    Init(L);
		return;
	}
	Node *p = L.first;
	while(p->link != L.last){
		p=p->link;
	}
	free(L.last);
	L.last = p;
    L.last->link = NULL;
}
 void Search(List &L,int key){
 	int cnt=1;
 	Node *p = L.first;
 	while(p != NULL){
 		if(key == p->data){
 			printf("\nTim Thay!");
 			printf("\nPhan tu o vi tri thu : %d",cnt);
 			return;
		 }
		 cnt++;
		 p=p->link;		 
	 }
	 printf("\nKhong co trong ds!");
 	
 }
 
void LLBubbleSort(List &L){
	Node *p,*q;
	for(p = L.first;p != NULL;p=p->link){
		for(q=p->link;q!=NULL;q=q->link){
			if(p->data > q->data){
				int temp = p->data;
				p->data = q->data;
				q->data = temp;
			}
		}
	}
}

void SingleToCirkle(List &L){
	if(L.last == NULL){
		return;
	}
	L.last->link=L.first;
}
void CheckSTC(List &L){
	if(L.last == NULL){
		return;
	}
	Node *p = L.first;
	do{
		p = p->link;
			if(L.last->link == NULL){
			printf("\nDay la dslk don!");
			return;                              
		}
	}while(p != L.first);
	printf("\nDay la dslk vong don");
}

void CreateRandomList(List &L){
	int n,x,cnt = 0;
	printf("\nNhap so luong phan tu muon phat sinh ngau nhien : ");
		scanf("%d",&n);
	do{
		x =rand();
		if(cnt == n){
			break;
		}
		InsertBack(L,x);
        cnt++;
	}while(cnt != n);
	printf("\nDu lieu da nhap xong\n");
}


void AddBackCirkle(List &L,Node *new_ele){
	if(L.first == NULL){
		L.first = new_ele;
		L.last = new_ele;
		L.last->link = L.first;
	}else{
	 L.last->link = new_ele;
	L.last = new_ele;	
	L.last->link = L.first;	
	}
}
void InsertBackCirkle(List &L , int x){
	Node *new_ele = GetNode(x);
	if (new_ele == NULL)
	return;
	AddBackCirkle(L,new_ele);
}
void CreateListBackCirkle(List &L){
	int x;
	do{
		printf("\nThem phan tu vao cuoi dslk(nhap -1 de ket thuc) : ");
		scanf("%d",&x);
		if(x==  -1){
			break;
		}
		InsertBackCirkle(L,x);
	}while(x != -1);
	printf("\nDu lieu da nhap xong\n");
}
void PrintfListCirkle(List L){
   Node *p = L.first;
   printf("\nCac phan tu da nhap : ");
   do{   
   	printf("%d ",p->data);
	p = p->link;
	}while(p != L.first);
	
}
void MenuDSLKCirkle(List &L){
	int luaChon = 0;
	do{
		    printf("\n---MENU DSLK VONG---------");
			printf("\n1.Them phan tu vao dau danh sach.");
			printf("\n2.Kiem tra xem day la dslk gi.");
			printf("\n3.Xuat ra cac phan tu ");
			printf("\n--------------------------");
			printf("\nVui long lua chon : ");
			scanf("%d",&luaChon);
		if(luaChon == 1){
			CreateListBackCirkle(L);
		}else if(luaChon == 2){
			CheckSTC(L);
		}else if(luaChon == 3){
			PrintfListCirkle(L);
		}
	}while(luaChon != 0);
}



int main(){
	List L;
	Init(L);
	int choice = 0;
	do{
		printf("\n--MENU--------------");
		printf("\n0.Thoat");
		printf("\n1.Them phan tu vao dau danh sach.");
		printf("\n2.Xuat cac phan tu.");
	    printf("\n3.Xuat cac phan tu la snt ra dau ds.");
	    printf("\n4.Them phan tu vao cuoi danh sach.");
	    printf("\n5.Dem so luong phan tu trong danh sach.");
	    printf("\n6.Them phan tu vao giua ds.");
	    printf("\n7.Xoa phan tu dau ds.");
	    printf("\n8.Xoa phan tu cuoi ds.");
	    printf("\n9.Tim kiem phan tu trong ds.");
	    printf("\n10.Sap xep ds tang dan.");
	    printf("\n11.Doi thanh dslk vong don va thao tac MENU.");
	    printf("\n12.Kiem tra day la dslk gi.");
	    printf("\n13.Them phan tu ngau nhien vao danh sach.");
		printf("\n--------------------");
		printf("\nVui long chon : ");
		scanf("%d",&choice);
		if(choice == 1){
			CreateList(L);
		}else if(choice == 2){
			PrintfList(L);
		}else if(choice == 3){
	     	primeFirstList(L);
			PrintfList(L);
			
		}else if(choice == 4){
		
			CreateListBack(L);
		}else if(choice == 5){
			printf("\nSo luong phan tu trong ds : %d",count(L));
		}else if(choice == 6){
			int viTri, x;
			printf("\nNhap vi tri can them : ");
			scanf("%d",&viTri);
			printf("\nNhap gia tri muon them : ");
			scanf("%d",&x);
			AddViTri(L,viTri,x);
		}else if(choice == 7){
			RemoveFirst(L);
		}else if(choice == 8){
			RemoveLast(L);
	    }else if(choice == 9){
	    	int key;
	    	printf("\nNhap phan tu can tim : ");
	    	scanf("%d",&key);
	    	Search(L,key);
		}else if(choice == 10){
			LLBubbleSort(L);
			PrintfList(L);
		}else if(choice == 11){
			SingleToCirkle(L);
			MenuDSLKCirkle(L);
		}else if(choice == 12){
			CheckSTC(L);
		}else if(choice == 13){
			CreateRandomList(L);
		}
		}while(choice != 0);
	}





