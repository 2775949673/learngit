#include<stdio.h>
main() {
	int i,a=0,num=0;
	printf("������һ����Ȼ����\n");
	scanf("%d",&num);

	for(i=2; i<num; i++) {

		if(num%i==0)
			a++;
	}
	
	if(a==0)
		printf("������");
	else
		printf("��������");
}
