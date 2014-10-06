#include<stdio.h>
int main(){
	int T;
	int Z,N;
	int temp;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&Z,&N);
		int i=0;
		int ans = Z;
		for(;i<N;i++){
			scanf("%d",&temp);
			ans = ans & temp;
			//printf("%d\n",ans);
		}
		if(ans==0){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
// 10     1010   0010