#include<iostream>
#include<utility>
#include<cstdio>
#include<vector>
using namespace std;
int main(){
	int N;
	cin>>N;
	std::vector<pair <int,int > > arr(N);
	int te;
	for(int i=0;i<N;i++){
		cin>>te;
		pair<int,int> tem=std::make_pair(te,1);
		arr[i]=tem;
	}
	if(N==1){
		printf("0.000000 0.000000");
	}else{
		int temp = N;
		for(std::vector<pair<int,int> >::i i=arr.begin();i<arr.size()-1;i++){
			for(int j = i+1;j<arr.size();j++){
				if(arr[i].first == arr[j].first){
					arr[i].second +=1;
					arr.erase(arr.begin() + j);
				}
			}
		}
		double num = 0;
		int x = N;
		for(int i=0;i<arr.size();i++){
			x = x-arr[i].second;
			cout<<x<<" "<<arr[i].second<<endl;
			num += arr[i].second*(x);
			cout<<num<<" ";
		}
		double deno = N*(N-1);
		double ans = num/deno;
		printf("%.6f %.6f",ans,ans );
	}
	return 0;
}