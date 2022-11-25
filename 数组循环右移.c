#include"stdio.h"

#define N 100

int main() {

	int a[N];
	int i,j,k,n,m,temp=0;

	printf("请输入数组长度和右移次数(用空格分隔)\n");
	scanf("%d%d",&n,&m);
	i=0;
	printf("请输入数组成员值:n \n");
	while(i<n) {

		scanf("%d",&a[i]);
		i++;
	}
	for(j=0; j<m; j++) {
		temp=a[n-1];/*储存最后一个值*/ 
		for(k=n-1; k>=0; k--) {

			a[k]=a[k-1];/*最后一个值赋给前一个*/ 
			if(k==0) {

				a[k]=temp;/*最后一个值回到最后一个*/ 
			}

		}
	}
	for(i=0;i<n; i++) {

		if(i==n-1)
			printf("%d ",a[i]);
		else
			printf("%d ",a[i]);
	}
	return 0;
}

