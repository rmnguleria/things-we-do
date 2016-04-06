#include <iostream>
#include <string>
using namespace std;
int main(){
	int len,K;
	cin >> len;
	string input;
	cin >> input;
	cin >> K;
	for(int i=0;i<len;i++){
		int val = input[i];
		int offset = 'A';
		if( ( val >= 65 && val <=90 ) || ( val >=97 && val <=122 ) ){
			if(input[i] - 'Z' <= 0 ){
				val = input[i] - 'A';
			}else{
				offset = 'a';
				val = input[i] - 'a';
			}
			val = val + K;
			val = val % 26;

			val += offset;

			char print_me = val;
			cout << print_me;

		}else{
			cout << input[i];
		}
	}
	return 0;
}