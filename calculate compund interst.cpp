#include<stdio.h>
#include<math.h>
int main()
{
	float principal,rate,year,ci;
	printf("enter the principal rate and year");
	scanf("%f%f%f",&principal,&rate,&year);
	ci=principal*((pow((1+rate/100),year)-1));
	printf("compound interest is:%f\n",ci);
	return 0;
}
