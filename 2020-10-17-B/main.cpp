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
#include <iomanip>
using namespace std;


int main(int argc, char* argv[]){
	int N;
	cin >> N;
	vector<long long> X(N);
	long long Dm = 0;
	long long De2 = 0;
	long long Dc = 0;
	for(int i=0; i<N; i++){
		cin >> X[i];
		X[i] = abs(X[i]);
		Dm += X[i];
		De2 += X[i]*X[i];
		if(X[i]>Dc){
			Dc = X[i];
		}
	}

	cout << Dm <<endl;
	cout << fixed << setprecision(15)<<(sqrt(De2)) <<endl;
	cout << Dc <<endl;



}
