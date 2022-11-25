#include<stdio.h>
int main() {
	int m,s,n;
	scanf("%d%d%d",&m,&s,&n);
	int i,j;
	int a[m][s],b[s][n],c[m][n];


	for(i=0; i<m; i++) {

		for(j=0; j<s; j++) {

			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<s; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			int k;
			c[i][j]=0;
			for(k=0; k<s; k++) {
				c[i][j]+=a[i][k]*b[k][j];
			}
			printf("%d",c[i][j]);
		}
	}
	printf("\n");
}
