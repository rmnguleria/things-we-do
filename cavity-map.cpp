#include <iostream>
#include <string>
using namespace std;
int main(){
	int N;
	cin >>N;
	string input;
	char mat[N][N];
	for(int i=0;i<N;i++){
		cin >> input;
		for(int j=0;j<N;j++){
			mat[i][j] = input[j];
			//cout << i << " : " << j << " : " << mat[i][j] << endl;
		}
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			char print_c = mat[i][j];
			if( i==0 || i==N-1 || j==0 || j==N-1){

			}else{
				int val = mat[i][j] - '0';
				int left = mat[i][j-1] - '0';
				int right = mat[i][j+1] - '0';
				int up = mat[i-1][j] - '0';
				int bottom = mat[i+1][j] - '0';

				if(val > left && val > right && val > up && val > bottom){
					print_c = 'X';
				}
			}
			cout << print_c;
		}
		cout << endl;
	}
	return 0;
}