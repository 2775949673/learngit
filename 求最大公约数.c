#include <stdio.h>
int main()
{
 int n,m,q;
 printf("�����룺");
 scanf("%d%d",&n,&m);
 n=gcd(n,m,q); 
 printf("���Լ��Ϊ��%d",n);
}
 
  int gcd(int a,int b,int c){
  
  
 if(a<b)
 {
  c = a;
  a = b;
  b = c;                      //ȷ��a��b
 }
 while(b != 0)                   
 { 
  c = b;
  b = a%b;                    //շת�������ȵ�һ��˼·�������˴����Ч��
  a = c;
 }
}
 
 
