//�������ʼ��������Ϊ1
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
 printf("��������\n");
 else
 printf("����������\n");
 return 0; 
} 
