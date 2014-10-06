#include<iostream>
using namespace std;
class triplet{
public:
	int ID,Z;
	long int diff;
	triplet(int a,int b,long int c){
		ID = a;
		Z = b;
		diff = c;
	}
	triplet(){
		ID = 0;
		Z = 0;
		diff = 0;
	}
};
int main(){
	int N;
	int ID,Z,P,L,C,S;
	cin>>N;
	triplet A[N];
	triplet one,two,three,four,five;
	for(int i=0;i<N;i++){
		cin>>ID>>Z>>P>>L>>C>>S;
		long int diff = P*50 + L*5 + C*10 + S*20 - Z;
		A[i].ID = ID;
		A[i].Z = Z;
		A[i].diff = diff;
	}
	/*	if(diff > one.diff || (diff == one.diff && ID > one.ID){
			if(){
			one.ID = ID;
			one.Z =Z;
			one.diff = diff;
			}
		}
		else if(diff >= two.diff){
			if(diff == two.diff && ID > two.ID)
			two.ID = ID;
			two.Z =Z;
			two.diff = diff;
		}
		else if(diff >= three.diff){
			if(diff == three.diff && ID > three.ID)
			three.ID = ID;
			three.Z =Z;
			three.diff = diff;
		}
		else if(diff >= four.diff){
			if(diff == four.diff && ID > four.ID)
			four.ID = ID;
			four.Z =Z;
			four.diff = diff;
		}
		else if(diff >= one.diff){
			if(diff == five.diff && ID > five.ID)
			five.ID = ID;
			five.Z =Z;
			five.diff = diff;
		}
	}*/
	int x = 5;
	if(5>N){
		x = N;
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<N-i-1;j++){
			if(A[j].diff > A[j+1].diff || (A[j].diff == A[j+1].diff && A[j].ID > A[j+1].ID)){
				triplet temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			} 
		}
		cout<<A[N-1-i].ID<<" "<<A[N-1-i].diff<<endl;
	}
	return 0;
}