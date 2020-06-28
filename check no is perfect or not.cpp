#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(n==sum)
	printf("perfect");
	else
	printf("not perfect");
	return 0;
}
