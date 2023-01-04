#include<stdio.h>
#include<string.h>

/*void swap (int x, int y) {

	int temp;

	temp = x;
	x=y;
	y = temp;
}
void main () {

	int a, b;
	scanf("%d,%d",&a,&b);
	if(a<b) swap(a,b);
	printf("\n%d,%d\n",a,b);
}*/

void swap(int *p1, int *p2){

int p;
p=*p1;
*p1=*p2;
*p2=p;
}
void main (){

    int a, b;
	int *p_1, *p_2; 
	scanf ("%d,%d", &a, &b);  //只有这个可以实现排序，第一个第三个都不行// 
    p_1=&a; p_2=&b;
    if (a < b)
    swap (p_1, p_2);
    printf ("\n%d,%d\n", a, b);
	}
/*void swap(int *p1,int *p2){
	int *p;
	p=p1;
	p1=p2;
	p2=p;
} 
void main(){
	int a,b;
	int *p_1,*p_2;
	scanf("%d,%d",&a,&b);
	p_1=&a;
	p_2=&b;
	if(a<b)
	 swap(p_1,p_2);
	printf("%d,%d",a,b);
} 
