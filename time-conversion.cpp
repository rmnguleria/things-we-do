#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string time;
    cin >> time;
    char c = time[8];
    int hr = stoi(time);

    hr = hr%12;
    if(c=='P'){
    	hr+=12;
    }else{
    	if(hr < 10){
    		cout << "0";
    	}
    }
    cout <<hr;
    for(int i=2;i<8;i++){
    	cout << time[i];
    }
    return 0;
}
