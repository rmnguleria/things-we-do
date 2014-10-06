#include<iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	long long N;
	while(T--){
		cin>>N;
            long int turn = 0;
		    while(N > 1){
            turn++;
			if(!(N&(N-1))){
                N = N >> 1;
                cout<<"N is "<<N<<endl;     
			}
			else{
                long long temp = N;
				int bitpos = 0;
				while(temp!=0){
					bitpos++;
					temp = temp >> 1;
				}
                cout<<"bitpos is"<<bitpos<<endl;
				temp = 1;
                bitpos-=1;
				while(bitpos--){
					temp = temp << 1;
				}
                cout<<"temp is "<<temp;
				N = N - temp;
                cout<<"N is "<<N<<endl;
			}
		}
        if(N==1){
           if(turn%2){
                cout<<"Louise"<<endl;
           }
           else{
                cout<<"Richard"<<endl;
           }
        }
	}
	return 0;
}