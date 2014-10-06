#include<string>
#include<iostream>
using namespace std;
int main(){
	string input;
	cin>>input;
	int len = 0;
	int templen = 0;
	for(int i=0;i<input.length();i++){
		if(input[i]=='a'){
			templen +=1;
			if(templen>len)
				len = templen;
		}
		else{
			templen = 0;
		}
	}
	for(int i=0;i<len+1 ; i++){
		cout<<'a';
	}
	return 0;
}