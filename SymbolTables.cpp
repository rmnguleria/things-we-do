#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
using namespace std;
int main(){
	string arr[100][4];
	int counter = 0;
	string file_Name,word;
	//cout<<"Enter file name";
	//cin>>file_Name;
	ifstream myfile("ab.c");
	stringstream buffer;
	buffer << myfile.rdbuf();
	while(buffer >> word){
		if(word=="int"){
			
		}
		else if(word=="float"){

		}
		else{
			// ignore
		}
	}
	//cout<<endl<<buffer.str()<<endl;
	return 0;
}