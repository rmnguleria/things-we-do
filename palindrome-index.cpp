#include <iostream>
#include <string>
using namespace std;


int main() {
	int T;
	cin >> T;
	string input;
	while(T--> 0){
		cin >> input;
		int index = -1;
		for(int i=0,j=input.length()-1;i<input.length()/2;i++,j--){

				//cout << "i is : " << i << " and j is : " << j << endl;

				if(input[i] != input[j]){

					cout << "Okay " << i << " : " << input[i] << " and " << j << " : " << input[j]  << " does not match" << endl;
					// Write some awesome logic

					if(input[i+1] == input[j]){
						index = i;
					}else{
						index = j;
					}

					if(input[i+1] == input[j] && input[i] == input[j-1]){
						if(input[i+2] == input[j-1]){
							index=i;
						}else{
							index=j;
						}
					}

					break;
				}
		}

		cout <<index<< endl;

	}
    return 0;
}
