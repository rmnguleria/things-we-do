#include<stdio.h>
#include<math.h>
int main(){
	int T;
	scanf("%d",&T);
	long long int N;
	while(T--){
		scanf("%lld",&N);
		long long int sqrtt = (long long int)sqrt(8*N+1);
		if(sqrtt*sqrtt == (8*N+1)){
			long long int steps = (sqrtt - 1)/2;
			printf("Go On Bob %lld\n",steps);
		}else{
			printf("Better Luck Next Time\n");
		}

	}
	return 0;
}