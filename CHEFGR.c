#include<stdio.h>
int array[110];
int main(){
	int T,N,M;
	int i=0;
	int max = 0;
	int diff = 0;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&N,&M);
		max = 0;
		diff = 0;
		for(i=0;i<N;i++){
			scanf("%d",&array[i]);
			if(max < array[i])
				max = array[i];
		}
		for(i=0;i<N;i++){
			diff += (max - array[i]);
		}
		if( (M - diff)%N == 0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}