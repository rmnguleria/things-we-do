#include<iostream>
using namespace std;
int main(){
	int A[] = {-1,4,2,3,-6,20,-7};
	int DP[sizeof(A)/sizeof(int)];
	DP[0] = -1;
	for(int i=1;i<7;i++){
		DP[i] = max(DP[i-1] + A[i],A[i]);
		cout<<DP[i]<<" ";
	}
}