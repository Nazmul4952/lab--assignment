#include<stdio.h>
int main()
{
	int n,sum=0,i;
	scanf("%d",&n);
	for( i=0;i<=n;i+=2){
printf("%d\n",i);		
sum=sum+i;		
		
	}
	printf("sum=%d",sum);
	return 0;
}
