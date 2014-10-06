#include<iostream>
using namespace std;
void swap(char *a,char *b){
	char temp = *a;
	*a = *b;
	*b = temp;
}
void gen_perm(char A[],int start,int end){
	if(start==end)
		cout<<A<<endl;
	else{
		for(int j=start;j<=end;j++){
			swap((A+start),(A+j));
			gen_perm(A,start+1,end);
			swap((A+start),(A+j)); // backtrack
		}
	}
}
int main(){
	char A[] = "Raman";
	gen_perm(A,0,4);
 	return 0;
}
