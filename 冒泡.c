#include <stdio.h>
# define NUM 5
int main() {

	/*int a[NUM],i,j,t;
	printf("�����������\n");

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
	printf("�����������\n");

	for(i=0; i<NUM; i++) {   /*����num���� */

		scanf("%d",&a[i]);
	}
	for(i=1; i<NUM; i++) {

		for(j=0; j<NUM-i; j++) {

			if(a[j]>a[j+1]) {
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;/*��j�����j+1������λ�� */
				 
			}
		}
	}
	printf ("the sorted numbers:\n");
	for (i = 0; i < NUM; i++)
		printf ("%d ", a[i]);
	return 0;

}
