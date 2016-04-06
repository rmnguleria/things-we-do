#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
	string input;
	int N;
	cin >> N;
	while(N-- > 0){
		cin >> input;
		int len = input.length();
		//cout << len;
		int i;
		for(i=1;i<=len-1;i++){
			//cout << input[i] << "+" << input[i-1] << " and " << input[len-1-i] << "+" << input[len-i] << endl;
			if( abs(input[i] - input[i-1]) != abs(input[len-1-i] - input[len-i]) ){
				//cout << "Nooo";
				break;
			}
		}
		//cout << i;
		if(i == len){
			cout <<"Funny"<< endl;
		}else{
			cout <<"Not Funny"<< endl;
		}
	}
	return 0;
}