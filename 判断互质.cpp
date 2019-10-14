//两数互质即最大公因数为1
#include <stdio.h>
int main(void)
{int a=10,b=5;
 int temp;
 while(a%b!=0){
 	temp=a%b; 
 	a=b;
 	b=temp;
 }
 if(b==1)
 printf("两数互质\n");
 else
 printf("两数不互质\n");
 return 0; 
} 
