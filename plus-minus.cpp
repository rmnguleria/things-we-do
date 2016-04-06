#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	int N;
	int input;
	int pos = 0;
	int neg = 0;
	int zeros = 0;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> input;
		if(input > 0){
			pos+=1;
		}else if(input < 0){
			neg +=1;
		}else{
			zeros += 1;
		}
	}
	cout << setprecision(6) << fixed << pos/(N+0.0) << endl;
	cout << setprecision(6) << fixed << neg/(N+0.0) << endl;
	cout << setprecision(6) << fixed << zeros/(N+0.0) << endl;

	return 0;
}