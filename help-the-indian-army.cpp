#include<iostream>
#include<utility>
#inlude<algorithm>
using namespace std;
bool compare(pair<long int,long int> a1,pair<long int,long int> a2){
	return a1.first < a2.first;
}
int main(){
	int N
	long int S,E;
	cin>>N>>S>>E;
	pair<long int,long int> checkpoints[N];
	long int a,b;
	for(int i=0;i<N;i++){
		cin>>a>>b;
		pair<long int,long int> temp(a,b);
		checkpoints[i] = temp;
	}
	sort(checkpoints,checkpoints + N , compare);
	int start = 0;
	if(S<checkpoints[0])
		start = checkpoints[0];
	for(int i=0;i<N-1;i++){
		if(checkpoints[i].first >= S){
			start = i;
			break;
		}
	}
	for(int i=0;i<N;i++){
		if(  && E >= checkpoints[i].first){

		}
	}
	return 0;
}