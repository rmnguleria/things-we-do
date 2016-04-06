#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int N;
	cin >> N;
	int arr[N];
	for(int i=0;i<N;i++){
		cin >> arr[i];
	}

	// Mean
	double mean = 0;
	for(int i=0;i<N;i++){
		mean += arr[i];
	}

	mean /= N;

	cout << setprecision(1) << fixed << mean << endl;

	// Median
	double median = 0;

	if(N%2==0){
		median = (arr[N/2 - 1] + arr[N/2])/2.0;
	}else{
		median = arr[N/2];
	}

	cout << setprecision(1) << fixed << median << endl;

	//Mode
	sort(arr,arr+N);
	int mode = arr[0];
	int freq = 1;
	for(int i=0;i<N-1;i++){
		int t_freq = 1;
		while(arr[i] == arr[i+1] ){
			t_freq += 1;
			i++;
		}
		if(t_freq > freq){
			freq = t_freq;
			mode = arr[i];
		}
	}

	cout << mode << endl;

	// standard deviation

	double std = 0;

	for(int i=0;i<N;i++){
		std += (arr[i] - mean)*(arr[i] - mean);
	}
	std /= N;

	std = sqrt(std);

	cout << setprecision(1) << fixed << std << endl;

	return 0;
}