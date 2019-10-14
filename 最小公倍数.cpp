//最小公倍数=两个数的乘积除以最大公因数
#include <stdio.h>
int main(void)
{int a=35,b=15,c=a*b;
 int temp;
 while(a%b!=0){
 	temp=a%b; 
 	a=b;
 	b=temp;
 }
 printf("最小公倍数为%d\n",c/b);
 return 0;
}
