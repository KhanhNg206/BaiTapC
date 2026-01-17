#include<stdio.h>
#include<conio.h>
void UpperWords(char *s) {
    s[0] = toupper(s[0]);
    for (int i = 1; s[i]; i++){
        s[i] = (s[i-1] == ' ') ? ( toupper(s[i] : s[i] );
}}
int main(){
	char S[] = "dao duy long";
UpperWords(S);
printf("%s",S);
}
