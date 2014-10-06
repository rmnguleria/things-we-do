#include<iostream>
using namespace std;
void merge(int A[],int start,int mid,int end){
	int i = start;
	int j = mid;
	int index = 0;
	int B[(end - start+1)];
	while(i <= mid && j <= end){
		if(A[i]<A[j]){
			B[index++]=A[i++];
		}
		else{
			B[index++]=A[j++];
		}
	}
	
	if(i==mid+1){
		while(j<= end){
			B[index++] = A[j++];
		}
	}
	
	if(j==end+1){
		while(i<=mid){
			B[index++] = A[i++];
		}
	}

	for(int k=0;k<index;k++){
		A[start+k] = B[k];
	}
}
void sort(int A[],int start,int end){
	
	if(start<end){
		int mid = (start+end)/2;
	
		sort(A,start,mid);
	
		sort(A,mid+1,end);
	
		merge(A,start,mid,end);
	}
}
int main(){
	int A[] = {2,3,4,1,5};
	
	sort(A,0,4);
	
	cout<<A[0]<<A[1]<<A[2];
	
	return 0;
}