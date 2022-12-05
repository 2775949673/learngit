#include <stdio.h>
int main()
{
 int n,m,q;
 printf("请输入：");
 scanf("%d%d",&n,&m);
 n=gcd(n,m,q); 
 printf("最大公约数为：%d",n);
}
 
  int gcd(int a,int b,int c){
  
  
 if(a<b)
 {
  c = a;
  a = b;
  b = c;                      //确保a≥b
 }
 while(b != 0)                   
 { 
  c = b;
  b = a%b;                    //辗转相除：相比第一种思路大大提高了代码的效率
  a = c;
 }
}
 
 
