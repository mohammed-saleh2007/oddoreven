#include <stdio.h>

int main(){

	int usr = 1;

	while(usr == 1)
	{
	int num ;
	
	printf("what is the number to test? ");
	scanf("%d", &num);
	
	if( num % 2 == 0 ){
		printf("\n%d", num);
		printf(" is EVEN number");
	}else{
		printf("\n%d", num);
		printf(" is ODD number");
	}
	
	printf("\nDo you want to enter other number(1/0)?");
	scanf("%d", &usr );
	
	}

	if(usr == 0){
		printf("See You later!");
	}

	return 0;
}
