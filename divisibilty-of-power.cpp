#include<iostream>
#include<map>
#include<cmath>
using namespace std;
long long int Array[200010];
int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
		cin>>Array[i];
	int Q;
	cin>>Q;
	int i,j;
	long long int x;
	for(int j=0;j<Q;j++){
		std::map<int, int> mapOfPrimes;
		cin>>i>>j>>x;
		while(x%2==0){
			mapOfPrimes[2]+=1;
			x = x/2;
		}
		const int squareRoot = sqrt(x);
		for(int i=3;i<=squareRoot;i+=2){
			while(x%i==0){
				mapOfPrimes[i]+=1;
				x = x/i;
			}
		}
		if(x>2){
			mapOfPrimes[x]+=1;
		}
		bool flag = true;
		for(std::map<int, int>::iterator it = mapOfPrimes.begin();it!= mapOfPrimes.end();++it){
			if((Array[i-1]%it->first)!=0){
				flag = false;
				break;
			}
		}
		if(!flag){
			cout<<"No"<<endl;
		}
		else{
			cout<<"Yes"<<endl;
		}
	}
	return 0;
}