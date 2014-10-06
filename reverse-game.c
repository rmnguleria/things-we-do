#include<stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	int N,position,K;
	while(T--){
		scanf("%d %d",&N,&K);
		if(K<(N/2))
			position = 2*(K+1);
		else
			position = 2*(N-1-K) + 1;
		printf("%d\n",position-1);
	}
	return 0;
}