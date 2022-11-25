#include"stdio.h"
#include"string.h"
#define citynum 5
int main() {
	int i,j,k,num;
	char city[citynum][20];
	char str[80];
	num=0;


	for(i=0; i<citynum; i++) {
		printf("intput the name of the %dth city:",i+1);
		gets(str);
		if(str[0]==0)  break;
		if(strlen(str)>19) {
			i--;
			continue;
		}
		strcpy(city[i],str);
		num++;
	}
	for(i=0; i<num-1; i++) {
		k=i;
		for(j=i+1; j<num; j++) {
			if(strcmp(city[k],city[j])>0)
				k=j;
			if(k!=i) {
				strcpy (str, city[i]);
				strcpy (city[i], city[k]);
				strcpy (city[k], str);

			}
		}
	}
	for(i=0; i<num; i++) {
		printf("%s",city[i]);
		printf("\n");
	}
}
