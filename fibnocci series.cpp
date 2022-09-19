#include<stdio.h>
main()
{  
	int a=0,b=1,n,c,count;
	printf("n: ");
	scanf("%d",&n);
	printf("Fibonacci series is\n");
	printf("%d\n%d\n",a,b);
	count=2;
	while(count<n)
	{
	
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
		count++;
	}
}
