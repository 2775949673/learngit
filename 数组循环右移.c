#include"stdio.h"

#define N 100

int main() {

	int a[N];
	int i,j,k,n,m,temp=0;

	printf("���������鳤�Ⱥ����ƴ���(�ÿո�ָ�)\n");
	scanf("%d%d",&n,&m);
	i=0;
	printf("�����������Աֵ:n \n");
	while(i<n) {

		scanf("%d",&a[i]);
		i++;
	}
	for(j=0; j<m; j++) {
		temp=a[n-1];/*�������һ��ֵ*/ 
		for(k=n-1; k>=0; k--) {

			a[k]=a[k-1];/*���һ��ֵ����ǰһ��*/ 
			if(k==0) {

				a[k]=temp;/*���һ��ֵ�ص����һ��*/ 
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

