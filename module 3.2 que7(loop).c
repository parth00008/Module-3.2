#include<stdio.h>
main()
{
	int a,sum,n;
	printf("enter the number:");
	scanf("%d%d",&a,&n);
    sum=a+n;
	if(sum%2==0)
	{
		printf("the enter value is even number:%d",sum);
	}
	else
	{
		printf("the enter value is odd number:%d",sum);
	}
}
