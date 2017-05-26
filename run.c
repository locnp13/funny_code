#include<stdio.h>

int main(){
	int N=5;
	int i,j;
	for(i=1;i<=N;i++){
		for(j=1;j<=2*N-1;j++){
			if(i == N){
				printf("*");	
			} else {
				printf(" ");
				if(i == 1 && j == N-1){
					printf("*");
				}
				if(i != 1 && (j==N-i || j==N+i-3)){
					printf("*");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
