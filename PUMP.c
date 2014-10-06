#include<stdio.h>
int main(){
	int N,T;
	scanf("%d",&N);
	long int total = 0;
	while(N--){
		if(scanf("%d",&T)){
			if(T>2 && T%2 ==0) 
				total += 50;
		}
	}
	printf("%ld\n",total);
	return 0;
}