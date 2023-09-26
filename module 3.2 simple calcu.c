#include<stdio.h>
main()
{
	int a,b,add,sub,mul,div,mod;
	
	printf("enter the value 1:");
	scanf("%d",&a);
	printf("enter the value 2:");
	scanf("%d",&b);
	
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	
	printf("calculate reasult\n");
	printf("your add is:%d\n",add);
	printf("your sub is:%d\n",sub);
	printf("your mul is:%d\n",mul);
	printf("your div is:%d\n",div);
	printf("your mod is:%d\n",mod);	
}
