#include<stdio.h>
void main(){
	
	int y;
	printf("Enter a number(1-7) to get it's day: ");
	scanf("%d",&y);
	
	switch(y){
		
		case 1:
			printf("Monday");

		case 2:
			printf("Tuesday");
		
		case 3:
			printf("Wednesday");
			break;
		default:
			printf("Error");
	}
	
}