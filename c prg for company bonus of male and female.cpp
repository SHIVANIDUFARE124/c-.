#include<stdio.h>
#include<conio.h>
int main()
{
	float salary,bonus;
	char gender;
	printf("enter the M for male and F for female");
	scanf("%c",&gender);
	printf("enter the salary");
	scanf("%f",&salary);
	bonus=salary+bonus;
	if (gender=='M'||gender=='m')
	{
		if (salary>10000)
		bonus=(salary*0.05);
		else
		bonus=(salary*0.07);
	}
	if (gender=='F'||gender=='f')
	{
	if (salary>10000)
	bonus=(salary*0.01);
	else
	bonus=(salary*0.12);
	}
	bonus+=bonus;
	printf("bonus=%.2f\nsalary=%.2f\n",bonus,salary);
}
