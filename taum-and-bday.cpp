#include <iostream>
using namespace std;
int main(){
	unsigned long int T,X,Y,Z,B,W;
	unsigned long int cost = 0;
	cin >> T;
	while(T--> 0){
		cin >> B >> W;
		cin >> X>>Y>>Z;

		if(X+Z < Y){
			cost = B*X + W*(X+Z);
		}else if(Y+Z < X){
			cost = B*(Y+Z) + W*Y;
		}else{
			cost = B*X + W*Y;
		}
		cout << cost << endl;
	}

	return 0;
}