#include<iostream>
using namespace std;
int array[100009];
/*class Triplet{
public:
	int a,b,c;
	Triplet(int A,int B,int C){
		a = A;
		b = B;
		c = C; 
	}
}; */
int main(){
	int T;
	cin>>T;
	int N;
	int turn;
	int firstTriplets = 0;
	int secondTriplets = 0;
	int seconds = 0;
	while(T--){
		cin>>N;
		for(int i=0;i<N;i++)
			cin>>array[i];
		cin>>turn;
		for(int i=0;i<N-2;i++){
			for(int j=i+1;j<N-1;j++){

				for(int k=j+1;k<N;k++){
					if(array[i]<array[j]){
						
					}
					else{
						goto here;
					}
				}
				here:;
			}
		}
		if(firstTriplets > secondTriplets ){
			if(turn == 0){
				cout<<"Ananya"<<endl<<secondTriplets+1<<endl;
			}
			else{
				cout<<"Sarika"<<endl<<secondTriplets+1<<endl;	
			}
		}
		else{
			if(turn == 0){
				cout<<"Sarika"<<endl<<firstTriplets+1<<endl;
			}
			else{
				cout<<"Ananya"<<endl<<firstTriplets+1<<endl;	
			}	
		}
	}
	return 0;
}