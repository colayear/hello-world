#include <stdio.h>
int main(){
	int a[5]={0};
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5-i;j++){
			if(a[j]<a[j+1]){
				int temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}
