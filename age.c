
#include<stdio.h>
void main(){
	int ramAge,shyamAge,ajayAge;
	printf("enter age of ram:");
	scanf("%d",&ramAge);	
	printf("enter age of shyam:");
	scanf("%d",&shyamAge);
	printf("enter age of ajay:");
	scanf("%d",&ajayAge);
	if(ramAge<shyamAge&&ramAge<ajayAge){
		printf("ram is younger than shaym and ajay");
	}
	else if(shyamAge<ajayAge){
		printf("shyam  is younger than ram and ajay");
	}
	else{
		printf("ajay is younger than ram and shyam");
}
}
