#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=59;	
	int num, try;
	do
	{
		printf("guess the number : ");
		scanf("%i",&num);
		if(num<answer){
		
			printf("high!\n");
			try++;
			}
		else if(num==answer)
			try++;
		else{
			printf("low!\n");
			try++;
			}
		
	}while(num!=answer);
	
	printf("congratulation! trials: %i",try);
	
	return 0;
}
