#include <iostream>
using namespace std;
int main(){
	unsigned _int128 arr[20];
	unsigned _int128 A,B,N;
	cin >> A >> B >> N;
	arr[0] = A;
	arr[1] = B;

	for(int i=2;i<N;i++){
		arr[i] = arr[i-1]*arr[i-1] + arr[i-2];
	}

	cout << arr[N-1] << endl;

	return 0;
}