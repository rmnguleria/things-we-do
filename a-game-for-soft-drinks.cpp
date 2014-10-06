#include<iostream>
using namespace std;
char array[101][101][101];
int min(int a,int b,int c){
	int temp = a;
	if(temp > b) temp = b;
	if(temp > c) temp = c;
	return temp;
}
int main(){
	int Q;
	cin>>Q;
	int N1,N2,N3;
	for(int i=0;i<101;i++){
		for(int j=0;j<101;j++){
			for(int k=0;k<101;k++){
				array[i][j][k] = 'n';
			}
		}
	}
	array[0][0][0] = 'f';
	array[0][0][1] = 't';
	array[0][1][0] = 't';
	array[1][0][0] = 't';
	array[0][1][1] = 't';
	array[1][0][1] = 't';
	array[1][1][0] = 't';
	array[1][1][1] = 't';
	for(int i=0;i<101;i++){
		for(int j=0;j<101;j++){
			for(int k=0;k<101;k++){
				if(array[i][j][k]=='n'){
					if(array[i-1][j-1][k-1] != 'n' && array[i-1][j-1][k-1] == 't'){
						
					}
					else if(array[i-1][j-1][k] != 'n'){

					}
				}
			}
		}
	}

	while(Q--){
		cin>>N1>>N2>>N3;
	}
	return 0;
}