#include <stdio.h>
#include <math.h>
int main(){
	int avg=0;
	int q=0;
	for(int i=100;i<=10000;i++){
		int num=i;
		int num0=num;
		int count=0;
		for(int k=1;k<num;k++){
			if(num%k==0){
				count++;
			}//判断本身 
		}
		int len=0;
		while(num0!=0){
			num0=num0/10;
			len++;
		}
		int a[5]={0};
		for(int j=len-1;j>=0;j--){
			a[len-1-j]=floor(num/pow(10,j));
			num=num-a[len-1-j]*pow(10,j);
		}
		int sum=0;
		int sum0=0;
		for(int j=0;j<len;j++){
			sum=sum+a[j];
			sum0=sum0+a[j]*a[j];
		}
		int count0=0;
		for(int j=1;j<sum;j++){
			if(sum%j==0){
				count0++;
			}
		}
		int count1=0;
		for(int j=1;j<sum0;j++){
			if(sum0%j==0){
				count1++;
			}
		}
		if(count==1&&count0==1&&count1==1){
			avg=avg+i;
			q++;
			printf("%d\n",i);
		}
	
	}
	printf("共有%d个\n",q);
	printf("平均数为%d\n",avg/q);
	return 0;
} 
