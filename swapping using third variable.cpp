#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter two number a and b");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("\nbefore swapping a=%d",a);
	printf("\nafter swapping b=%d",b);
	getch();
}
