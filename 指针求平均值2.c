#include<stdio.h>/*
int main() {
	int a[5],*p,i;
	float average,sum=0;
	p=a;
	printf("输出五个数：");
	for(i=0; i<5; i++) {
		scanf("%d",&a[i]);
		
	}
	for(i=0; i<5; i++)
		sum+=p[i];
	average=sum/5;
	printf("%f",average);
}*/	
float aver(int *q,int n){
	int i;
	float sum=0,av;
	for(i=0;i<5;i++)
		sum+=q[i];
	av=sum/n;
	return(av);
}
void main(){
	int a[5],*p,i;
	float average;
	p=a;
	printf("输入五个数：");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	} 
	average=aver(p,5);
	printf("平均数是%f",average);
} 

	





	

