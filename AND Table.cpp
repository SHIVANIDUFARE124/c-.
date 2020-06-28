#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i,temp;
	printf("A B output\n");
	for(i=0;i<4;i++)
	{
		temp=i;
		a=temp%2;
		temp/=2;
		b=temp%2;
		printf("%d %2d %3d\n",a,b,a&b);
	}
		getch();	
}
