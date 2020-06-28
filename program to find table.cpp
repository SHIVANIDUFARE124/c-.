#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("enter the value to find table");
	scanf("%d",&n);
	for(i=1;i<11;i++)
	{
		printf("%d*%d=%d",n,i,n*i);
	}
	getch();
}
