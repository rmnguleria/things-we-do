#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
	int N,T;
	cin>>N>>T;
	std::vector<int> v(N);
	std::vector<int> count(N);
	for(int i=0;i<N;i++){
		cin>>v[i];
		count[i]=1;
	}
	int min_index = 0;
	long int sum = 0;
	int min = 100000000;
	int x = N;
	while(N>1){
        min_index = 0;
        min = 100000000;
		for(int i=0;i<N-1;i++){
			if(v[i]*count[i] + v[i+1]*count[i+1] < min){
				min_index = i;
                min = v[i]*count[i] + v[i+1]*count[i+1];
			}
		}
		sum += min;
        //cout<<sum<<" ";
		v[min_index + 1] += v[min_index];
		count[min_index + 1] += count[min_index];
		v.erase(v.begin() + min_index);
		count.erase(count.begin() + min_index);
		N = N-1;
	}

	int crane = 0;
	if(sum<=T){
		cout<<crane<<endl;
	}
	else{
		crane = ceil((sum - T) / (x-1.0));
		cout<<crane<<endl;
	}
	return 0;
}