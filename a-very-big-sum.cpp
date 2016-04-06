#include <iostream>
using namespace std;
int main(){
	int N;
	cin >> N;
	long int input;
	long int sum =0;
	for(int i=0;i<N;i++){
		cin >> input;
		sum += input;
	}
	cout << sum;
	return 0;
}