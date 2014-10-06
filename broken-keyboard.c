#include<stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	char c;
	char b[26];
	int i=0;
	int repair = 0;
	while(T--){
		for(i=0;i<26;i++)
			b[i]='0';
		while((c=getchar())!= '\n'){
			printf("%c\n",c);
			b[c-'a']='1';
		}
		repair = 0;
		while((c=getchar())!= '\n'){
			printf("%c\n",c);
			if(b[c-'a'] == '1'){
				repair++;
				b[c-'a']='0';
			}
		}
		printf("%d\n",repair);
	}
	return 0;
}