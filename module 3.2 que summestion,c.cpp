#include<stdio.h>
main()
{
	int n,m,total=0;
	printf("enter the value:");
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		total=total+m;
		n=n/10;
	}
	printf("your summation is:%d",total);
}

// while (n>0)
// m=n%10;
//    sum =sum 0 + m;
//   n=n/10;
