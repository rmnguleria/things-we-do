#include<stdio.h>
int fib[] = {0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 , 89 , 144 , 233 , 377 , 610 , 987 , 1597 , 2584 , 4181 , 6765 , 10946 , 17711 , 28657 , 46368 , 75025 , 121393 , 196418 , 317811 , 514229 , 832040 , 1346269 , 2178309 , 3524578 , 5702887 , 9227465 , 14930352 , 24157817 , 39088169 , 63245986};
int findNumber(int N){
	int i=0;
	int n = sizeof(fib)/sizeof(int);
	for(;i<n;i++){
		if(fib[i] == N)
			return i;
	}
	return -1;
}
int main(){
	int N;
	scanf("%d",&N);
	int index = findNumber(N);
	if(index == -1){
		printf("I'm too stupid to solve this problem\n");
	}
	else{
		if(index == 0 ){
			printf("0 0 0\n");
		}
		else if(index == 1){
			printf("1 0 0\n");
		}
		else if(index == 3) {
			printf("1 1 0\n");
		}
		else{
			printf("%d %d %d\n",fib[index - 1], fib[index - 3] , fib[index - 4]);
		}
	}
	return 0;
}