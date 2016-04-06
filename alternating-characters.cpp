#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin >> n;
	string input;
	while(n-- > 0){
		cin >> input;
		char start = input[0];
		bool isB = false;
		if(start == 'B'){
			isB = true;
		}
		int deletions = 0;
		for(int i=1;i<input.length();i++){
			char c = input[i];
			if(isB == true){
				if(c == 'A'){
					isB = false;
				}else{
					deletions += 1;
				}
			}else{
				if(c == 'B'){
					isB = true;
				}else{
					deletions += 1;
				}
			}
		}
		cout << deletions << endl;
	}
	return 0;
}