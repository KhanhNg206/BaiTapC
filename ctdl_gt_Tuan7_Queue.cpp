#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node *link;
}Node;

typedef struct queue{
	Node *front,*rear;
}queue;

void Init(queue &q){
	q.front = NULL;
}

int Empty(queue q){
	return q.front == NULL ? 1 : 0;
}

void EnQueue( queue &q,int x){
	Node *p;
	p = (Node *)malloc(sizeof(Node));
	p->data = x;
	p->link = NULL;
	if(Empty(q)){
		q.front = p;
		q.rear = p;
	}
	else{
		q.rear->link = p;
		q.rear = p;
	}
}

int DeQueue(queue &q){
	if(Empty(q)){
		return -1;
	}
	Node *p = q.front;
	q.front = q.front->link;
	if(Empty(q)){
		q.rear = NULL;}
		int x = p->data;
        p->data;
		p->link = NULL;
		free(p);
		return x;
	
}


int Front(queue q){
	if(Empty(q)){
		return -1;
	} return q.front->data;
	
}

void nhap(queue &q){
	int k;
	//Init(q);
	printf("\nNhap cac phan tu vao Queue(nhap -1 de ket thuc) : \n");
	scanf("%d",&k);
	while(k != -1){
		EnQueue(q,k);
		scanf("%d",&k);
	}
}
void LayRa(queue q){
    int k;
	while(!Empty(q)){
    	k = DeQueue(q);
	//k = Front(q);
		printf("%d ",k);
}}

void xuat(queue q){
	Node *p = q.front;
	while(p!= NULL){
		printf("\n%d ",p->data);
		p = p->link;
	}
}



int main(){
	int k;
	queue q;
	Init(q);
	int luaChon = 0;
	do{
		printf("\n------Menu---------");
		printf("\n1.Them phan tu vao Queue.");
		printf("\n2.Lay cac phan tu.");
		printf("\n3.Xoa dau.");
		printf("\n4.duyet.");
		printf("\n0.Thoat.");
		printf("\n-----------------");
		printf("\nVui long lua chon : ");
		scanf("%d",&luaChon);
		if(luaChon == 1){
			nhap(q);
		}else if(luaChon == 2){
			LayRa(q);
		}else if(luaChon == 3){
		   DeQueue(q);
	    }else if(luaChon == 4){
		   xuat(q);
	    } 
	}while(luaChon != 0);
	
	}


