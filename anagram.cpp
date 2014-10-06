#include<iostream>
#include<string>
using namespace std;
int a[26];
int b[26];
int main(){
	int T;
	cin>>T;
	string str;
	while(T--){
		int change = 0;
		for(int i=0;i<26;i++){
			a[i]=0;
			b[i]=0;
		}
		cin>>str;
		int len = str.length();
		if(len%2==1){
			cout<<"-1"<<endl;
		}
		else{
			int mid = len/2;
			for(int i=0;i<len;i++){
				a[str[i]-'a']+=1;
				b[str[mid+i]-'a']+=1;
			}
		}
		for(int i=0;i<26;i++){
				if(a[i]>b[i]){
					change+= (a[i]-b[i]);
				}
		}
		cout<<change<<endl;
	}
}