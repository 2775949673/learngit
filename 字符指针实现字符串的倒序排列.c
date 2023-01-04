#include<stdio.h>
#include<string.h>
void main(){
	char str[200],ch;
	char *p,*q;
	gets(str);
	p=str;
	q=p+strlen(p)-1;
	
	while(p<q){
		ch=*p;
		*p++=*q;
		*q--=ch;
	}
	printf("%s\n",str);
} 
