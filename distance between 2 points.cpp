#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2;
	double distance;
	printf("enter x1\n");
	scanf("%d",&x1);
	printf("enter y1\n");
	scanf("%d",&x2);
	printf("enter x2\n");
	scanf("%d",&y1);
	printf("enter y2\n");
	scanf("%d",&y2);
	distance=sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));
	printf("distance=%lf\n",distance);
	getch();
	
}
