#include<iostream>
using namespace std;
int main(){
	int arr[] = {2,1,3,4,5,8,0,1,2,-4,4};
	int dp[sizeof(arr)/sizeof(int)];
	dp[0]=1;
	return 0;
	// 1 + Max(dp[j] )    if j<i and arr[j]<arr[i] else dp[i] = 1 ;
}