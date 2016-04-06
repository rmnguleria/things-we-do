#include <iostream>
#include <string>
#include <cstdint>
using namespace std;
int main(){
	uint64_t checker = 0;
	uint64_t cmpWith = 1;
	cmpWith = cmpWith << 26;
	cmpWith -= 1;
	//cout << "Comparing with " << cmpWith << endl;
	string input;
	getline(cin, input, '\n');
	for(int i=0;i<input.length();i++){
		// only for alphabets
		int c = input[i];
		if( c >= 65){
			if(c >= 97){
				c -= 32;
			}
			c -= 65;

			// set cth bit in checker
			uint64_t temp = 1;
			temp = temp << c;
			checker = checker | temp;
			//cout << c << " "  << checker << endl;
	}

	}
	if(checker == cmpWith){
		cout << "pangram";
	}else{
		cout << "not pangram";
	}
	return 0;
}