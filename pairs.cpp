#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int N , K;
	cin >> N >> K;
	int array[N];
	for(int i=0;i<N;i++){
		cin >> array[i];
	}
	sort(array,array+N);
	int ans = 0;
	for(int i=0,j=1;i<N,j<N;){
		if(array[j] - array[i] == K){
			ans += 1;
			j++;
			i++;
		}else if(array[j] - array[i] < K){
			j++;
		}else{
			i++;
		}
	}
	cout << ans;
	return 0;
}