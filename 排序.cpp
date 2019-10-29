#include <stdio.h>
int main () 
{int x[5]={1,2,3,6,9},i,j,temp,n=5;
     scanf("%d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4]);
    for(i=1;i<=n-1;i++) 
    {for(j=0;j<n-i;j++) 
	 if( x[j] < x[j+1]) 
   	    {int temp = x[j];
   	    x[j] = x[j+1];
   	    x[j+1] = temp;}
    }
	printf("%d%d%d%d%d", x[0], x[1], x[2], x[3], x[4]);
   return 0;
}
