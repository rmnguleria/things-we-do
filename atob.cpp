#include<iostream>
#include<string>
using namespace std;
int main(){
	int N;
	cin>>N;
	int A[N];
	long int B[N];
	long long int multiply = 1;
	for(int i=0;i<N;i++){
		cin>>A[i];
		multiply *= A[i];
	}
	int Q;
	cin>>Q;
	int turn;
	int ID,V;
	while(Q--){
		cin>>turn;
		if(turn==0){
			cin>>ID>>V;
			multiply /= A[ID];
			A[ID]=V;
			multiply *= A[ID];
		}
		else{
			cout<<multiply/A[ID]<<endl;
		}
	}
	return 0;
}