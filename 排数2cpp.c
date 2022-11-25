#include<stdio.h>
int main() {
	int a[10],i,min,temp,j;
	printf("输入数组中的10个数\n");
	for(i=0; i<9; i++) {
		scanf("%d",&a[i]);
	}

	for(i=0; i<9; i++) {
		min=i;
		for(j=i+1; j<10;) {
			if(a[min]>a[j])
				min=j;
			temp=a[i];
			a[min]=temp;
		}
	}
	for(i=0; i<10; i++)
		printf("%5d",a[i]);
	return 0;
}
