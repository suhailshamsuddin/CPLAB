
#include<stdio.h>
void main(){
	int number1,number2,number3;
	printf("enter two numbers:");
	scanf("%d%d",&number1,&number2);
	if(number1>number2&&number1>number3){
		printf("number %d is greater than %d and %d",number1,number2,number3);
	}
	else if(number2>number3){
		printf("number %d is greater than %d and %d",number2,number1,number3);
	}
	else
	printf("number %d is greater than %d and %d ",number3,number1,number2)
}

