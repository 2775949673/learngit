#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {

	srand(time(NULL));
	int magic,guess,counter=0;
	char c1='y';



	while(c1=='y'||c1=='Y') {
		counter=0;
		magic=rand()%100+1;

		do {
			printf("please guess a magic number:\n");
			scanf("%d",&guess);
			counter++;

			if(guess>magic)
				printf("too big\n");
			else if(guess<magic)
				printf("too small\n");
			else
				printf("right\n");
		} while(guess!=magic);
		printf("counter=%d\n", counter);
		printf("Do you try again!(Y/N)");
		getchar();
		c1=getchar();

	}


	/*while(guess!=magic&&counter<1) {
		printf("please guess a magic number\n");
		scanf("%d",&guess);
		counter++;
		if(guess>magic)
			printf("wrong!too big\n");
		else if(guess<magic)
			printf("wrong!too small\n");
		else
			printf("youare right\n");


	}



	printf("%d",counter);*/


}
