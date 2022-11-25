#include <stdio.h>
#include<math.h>

int main() {
	float a,b,c,p,area,n,m=0;

	printf("输入三角形个数 n\n");
	scanf("%f",&n);
	
	while(m<n) {

		printf("input a,b,c:\n");  /*三角形三边*/
		scanf("%f,%f,%f",&a,&b,&c);


		if(a+b>c&&a+c>b&&b+c>a) {
			p=(a+b+c)/2;
			area=sqrt(p*(p-a)*(p-b)*(p-c));
			printf("area=%f\n",area);
		} else
			printf("非三角形");
		m++;
	}
	return 0;



}

