//��С������=�������ĳ˻������������
#include <stdio.h>
int main(void)
{int a=35,b=15,c=a*b;
 int temp;
 while(a%b!=0){
 	temp=a%b; 
 	a=b;
 	b=temp;
 }
 printf("��С������Ϊ%d\n",c/b);
 return 0;
}
