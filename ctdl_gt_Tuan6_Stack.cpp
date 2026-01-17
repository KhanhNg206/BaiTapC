#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Node{
	int data;
	Node *link;
}Node;

typedef struct STack{
	Node *top;
}STack;

void Init(STack &s){
	s.top=NULL;
}

int Empty(STack s){
	return s.top == NULL ? 1 : 0;
}

void push(STack &s,float x){
	Node *p = (Node *)malloc(sizeof(Node));
	if(p!=NULL){
		p->data = x;
		p->link = s.top;
		s.top = p;
  }
}

float pop(STack &s){
	float x;
	if(!Empty(s)){
		Node *p = s.top;
		s.top = p->link;
		x = p->data;
		free(p);
		return x;
	}
}	


void DocTu(char s[],char tu[],int &vt){
	for(int i=0;i<strlen(tu);i++){
		tu[i] = ' '; }
		int i=0;
		while(s[vt] != ' '){
			tu[i] = s[vt];
			vt++;
			i++;
		}
}
float TinhToan(float toanHang1,float toanHang2,char toanTu){
	float kq;
	switch (toanTu){
		case '+' : kq = toanHang1 + toanHang2; break;
		case '-' : kq = toanHang1 - toanHang2; break;
		case '*' : kq = toanHang1 * toanHang2; break;
		case '/' : kq = toanHang1 / toanHang2; break;
	}
	return kq;
}

int LaToanTu(char s[]){
	char c = s[0];
	if((c == '+') || (c == '-') || (c == '*') || (c == '/'))
	return 1;
	return 0;
}

float TinhBieuThuc(STack &s ,char bieuThuc[]){
	float kq;
	char t[10];
	int i=0;
	do{
		DocTu(bieuThuc,t,i);
		if(LaToanTu(t)){
			char ToanTu = t[0];
			float toanHang1 = pop(s);
			float toanHang2 = pop(s);
			kq = TinhToan(toanHang2,toanHang1,ToanTu);
			push(s,kq);
		}else{
			float toanHang = atof(t);
			push(s,toanHang);
		}
		i++;
	}while(bieuThuc[i] != '#');
	return pop(s);
}

int main(){
	STack s;
	Init(s);
	char bieuThuc[100] = "";
	printf("\nNhap bieu thuc dang hau to : ");
	fflush(stdin);
	gets(bieuThuc);
	float kq;
	kq = TinhBieuThuc(s,bieuThuc);
	printf("\nGia tri cua bieu thuc la : %f",kq);
}
