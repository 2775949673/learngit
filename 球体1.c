#include<stdio.h>
#define A 3.1415926
int main() {

	float r,s1,s2;  /*s1Ϊ�������s2Ϊ���*/
	printf("����������İ뾶r\n");
	scanf("%f",&r);

	s1=4*A*r*r;
	s2=1.33*A*r*r*r;

	printf("����ı����Ϊ%.2f,��������Ϊ%.2f",s1,s2);



	return 0;

}
