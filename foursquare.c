#include<stdio.h>
int main(){
	int T;
	int N;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		int sum = 0;
		int i=1;
		for(;i<= N/2 ;i++){
			if(N%i==0 && i%4!=0)
				sum+= i;
		}
		if(N%4!=0)
			sum+= N;
		printf("%d\n",8*sum);
	}
	return 0;
}