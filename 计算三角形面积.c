#include <stdio.h>
#include<math.h>

int main() {
	float a,b,c,p,area,n,m=0;

	printf("���������θ��� n\n");
	scanf("%f",&n);
	
	while(m<n) {

		printf("input a,b,c:\n");  /*����������*/
		scanf("%f,%f,%f",&a,&b,&c);


		if(a+b>c&&a+c>b&&b+c>a) {
			p=(a+b+c)/2;
			area=sqrt(p*(p-a)*(p-b)*(p-c));
			printf("area=%f\n",area);
		} else
			printf("��������");
		m++;
	}
	return 0;



}

