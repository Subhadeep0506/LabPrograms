#include<stdio.h>
int main(){
	int i,j,k,l;
	for(i = 5 , l = 1;i>=1 && l<=5;i-- && l++){
		
		
		for(j = 1;j<=i-1;j++){
			printf(" ");
		}
		
		
		for(k = 1;k<=l;k++){
			printf("* ");
		}
		
		printf("\n");
	}
	return 0;
}
