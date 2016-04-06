#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int matrix[n][n];
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		cin >> matrix[i][j];
    	}
    }
    int a_sum = 0;
    int b_sum = 0;
    for(int i=0;i<n;i++){
    	a_sum += matrix[i][i];
    	b_sum += matrix[i][n-1-i];
    }
    cout << abs(a_sum - b_sum) << endl;
    return 0;
}
