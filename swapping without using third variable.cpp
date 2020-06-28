#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter two number a and b");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nbefore swapping a=%d",a);
	printf("\nafter swapping b=%d",b);
	getch();
}
