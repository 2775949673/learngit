#include<stdio.h> 
int main(){
	int a,b,*p1,*p2,p;
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	
	if(a<b)
		{
			p=p1;p1=p2;p2=p;
		}
	printf("a=%d,b=%d",a,b);
	printf("max=%d,min=%d",*p1,*p2);}
