#include <stdio.h>
 int main(){
 	char a;
 	printf("\nNhap vao 1 ki tu :");
 	scanf("%c",&a);
 	if(a==97|| a==101 || a==105|| a==111|| a==117){
 		a+=32;
 		printf("\nThe alphabet is a vowel");}
 	else if(a>97 && a<101 || a>101 && a<105 || a>105 && a<111 || a>111 && a<117){
 		a+=33;
	 printf("\nThe alphabet is a consonant");}
 }
