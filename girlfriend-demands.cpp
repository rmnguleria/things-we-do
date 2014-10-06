#include<iostream>
#include<string>
using namespace std;
int main(){
	string demand;
	cin>>demand;
	int size = demand.length();
	int Q;
	cin>>Q;
	long long int a,b;
	while(Q--){
		cin>>a>>b;
		if(a>size && b > size){
			cout<<"Yes"<<endl;
		}
		else if(a > size || b > size){
			cout<<"No"<<endl;
		}
		else{
			if(demand[a-1] == demand[b-1])
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
	}
}
