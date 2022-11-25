#include<stdio.h>
#define A 3.1415926
int main() {

	float r,s1,s2;  /*s1为表面积，s2为体积*/
	printf("请输入球体的半径r\n");
	scanf("%f",&r);

	s1=4*A*r*r;
	s2=1.33*A*r*r*r;

	printf("球体的表面积为%.2f,球体的体积为%.2f",s1,s2);



	return 0;

}
