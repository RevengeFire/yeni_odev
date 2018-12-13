#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	unsigned int i,a[100],sum=0;
	srand(time(NULL));
	for(i=0;i<100;i++){
		a[i]=rand()%10;
		sum+=(a[i]%2)*a[i];
	}
	for(i=0;i<100;i++)printf("%d\n",a[i]);
	printf("\nTOPLAM --> %d",sum);
}
