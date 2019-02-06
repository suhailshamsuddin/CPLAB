/*programe to find greatest of two numbers
Author:Suhail Shamsuddin
Date:06/02/2019
*/




#include<stdio.h>
void main(){
	int number1,number2;
	printf("enter two numbers:");
	scanf("%d%d",&number1,&number2);
	if(number1>number2){
		printf("number %d is greater than %d",number1,number2);
	}
	else{
		printf("number %d is greater than %d",number2,number1);
	}
}

