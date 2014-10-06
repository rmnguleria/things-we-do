#include<utility>
#include<iostream>
#include<algorithm>
using namespace std;
bool pairCompare(pair<int,int> pairFirst , pair<int,int> pairSecond){
	return pairFirst.first < pairSecond.first;
}
int main(){
	int B,Q;
	cin>>B>>Q;
	int buckets[B];
	for(int i=0;i<B;i++){
		cin>>buckets[i];
	}
	int C;
	int len = Q;
	pair<int,int> queries[len];
	int x = 0;
	while(len--){
		cin>>C;
		pair<int,int> a(C,x);
		queries[x++] = a;
	}
	sort(queries , queries + Q , pairCompare);
	for(int i=0;i<Q;i++){
		
	}
	return 0;
}