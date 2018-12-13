#include <stdio.h> 
int main(){
	int i,j,x=0,indis,a[10]={1,8,-4,-8,1,78,22,-32,-10,16};
	for(i=0;i<10;i++){
		if(a[i]<0){
			if(x==0)x=a[i];
			else{
				if(a[i]<x)x=a[i];
			}
		}
		for(j=0;j<10;j++){
			if(x==a[j])indis=j;
		}
	}
	printf("indisi: %d\nsayi: %d",indis,x);
}
