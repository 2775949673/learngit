#include"stdio.h"

int main() {
	int i,n,j;
	int t;
	printf("你要输入几个整数？\n");
	scanf("%d",&n);
	int a[n];

	printf("分别是\n");

	for(i=0;i<n;i++) {
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}	
	
	for(i=0; i<n; i++) {

		printf("%d ",a[i]);
	}
	return 0;
}
