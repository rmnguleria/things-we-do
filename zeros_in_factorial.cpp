#include<iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	int a,b;
	while(T--){
		cin>>a>>b;
		int total = 0;
		for(int i=a;i<=b;i++){
			if(number == 5){
				 total += 1;	
			}
			else{
				int count = 0;
				for ( int j = 5; number/j >= 1; j *= 5 )
					count  +=  number  /  j;
				total += count;
			}
		}
		cout<<total<<endl;
	}
	return 0;
}