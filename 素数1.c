#include<stdio.h>
main() {
	int i,a=0,num=0;
	printf("请输入一个自然数；\n");
	scanf("%d",&num);

	for(i=2; i<num; i++) {

		if(num%i==0)
			a++;
	}
	
	if(a==0)
		printf("是素数");
	else
		printf("不是素数");
}
