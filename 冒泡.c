#include <stdio.h>
# define NUM 5
int main() {

	/*int a[NUM],i,j,t;
	printf("输入五个整数\n");

	for(i=0; i<NUM; i++) {  

		scanf("%d",&a[i]);
	}
	for(i=1; i<NUM; i++) {

		for(j=0; j<NUM-i; j++) {

			if(a[j]<a[j+1]) {
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf ("the sorted numbers:\n");
	for (i = 0; i < NUM; i++)
		printf ("%d", a[i]);
	return 0;*/
	

	int a[NUM],i,j,t;
	printf("输入五个整数\n");

	for(i=0; i<NUM; i++) {   /*输入num个数 */

		scanf("%d",&a[i]);
	}
	for(i=1; i<NUM; i++) {

		for(j=0; j<NUM-i; j++) {

			if(a[j]>a[j+1]) {
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;/*第j个与第j+1个交换位置 */
				 
			}
		}
	}
	printf ("the sorted numbers:\n");
	for (i = 0; i < NUM; i++)
		printf ("%d ", a[i]);
	return 0;

}
