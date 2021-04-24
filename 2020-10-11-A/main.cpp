#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <algorithm>
#include <utility>
#include <vector>
#include <tuple>
#include <numeric>
using namespace std;


int main(int argc, char* argv[]){
	vector <long long> A(4) ;
	long long sum = 0;
	for(int i=0; i<4; i++){
		cin >> A[i];
		sum+= A[i];
	}
	bool flag = false;
	for(int i=0; i<4; i++){
		if(A[i] == sum-A[i]){
			flag = true;
		}
		for(int j=0; j<3;j++){
			if(A[i]+A[j] == sum-(A[i]+A[j])){
				flag = true;
			}
		}
	}
	if(flag){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}



}
