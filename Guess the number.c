#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int number,a,count=0;
	srand(time(0));
	number=rand()%100+1;
	do{
		scanf("%d",&a);
		count++;
		if(a<number){
			printf("It is smaller than the number\n");
		}
		else if(a>number){
			printf("It is bigger than the number\n");
		}
		else if(a==number){
			printf("It is right\n");
		}
	}while(a!=number);
	printf("You just guessed %d times\n",count);
}