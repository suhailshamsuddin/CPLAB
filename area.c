#include<stdio.h>
void main()
{
	int length,breath,area,perimeter;
	printf("enter length and breath of rectangle:");
	scanf("%d%d",&length,&breath);
	area=length*breath;
	printf("area is %d\n",area);
	perimeter=2*(length+breath);
	printf("perimeter is %d\n",perimeter);
	if(area>perimeter){
		printf("area is greater than perimereter\n");
	}
	else{
		printf("perimeter is greater than area\n");
	}
}
