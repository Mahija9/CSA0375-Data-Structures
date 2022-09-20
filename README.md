# CSA0375-Data-Structures
1. program to perform Matrix Multiplication 
     #include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j,k,sum;
	printf("Enter A Matrix\n");
	for(i=0;i<2;i++)
	{
	  for(j=0;j<2;j++)
	  {
	   scanf("%d",&a[i][j]);
      } 
	}
	
	printf("Enter B Matrix\n");
	for(i=0;i<2;i++)
	{
	  for(j=0;j<2;j++)
	  {
	   scanf("%d",&b[i][j]);
}
}
	for(i=0;i<2;i++)
	{
	  for(j=0;j<2;j++)
    {
	   c[i][j]= 0;
	   for(k=0;k<2;k++)
	{
		c[i][j]+= a[i][k]*b[k][j];
		
	}
    } 
   }
   
   printf("\nthe multiplication of two matrices \n");
   	for(i=0;i<2;i++)
   	{
	   
   	 for(j=0;j<2;j++)
   {
   	
   	printf("%d  ",c[i][j]);
	   	   }   	
	   	   printf("\n");
	   }
}
![matrix mul output](https://user-images.githubusercontent.com/112486504/191182822-3c3a4840-4e54-4075-bfc8-caa0d50fe598.png)

2. program to find Odd or Even number from a given set of numbers
   #include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}
![odd or even output](https://user-images.githubusercontent.com/112486504/191183879-c451cf52-d876-467b-8da4-8bcbb0437094.png)

3. program to find Factorial of a given number without using Recursion
   #include<stdio.h>
main()
{
	int n,fact=1,i;
	printf("n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d!= %d",n,fact);
}
![factorial output](https://user-images.githubusercontent.com/112486504/191200435-7d94d9f8-623f-464e-88cd-74ca5e44c00c.png)

4. program to find Fibonacci series without using Recursion  
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
![fibonacci series output](https://user-images.githubusercontent.com/112486504/191201295-dddcfaae-8ac0-4d3c-8efd-ad7a8c25523f.png)


