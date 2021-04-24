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
int N,K;
cin >> N>>K;

if(K>=0){
	long long count = 0;
	for(int i=K+2; i<2*N-K-1;i++){
		long long ab = i;
		if(ab > N+1){
			ab = ab - N - 1;
		}else{
			ab = ab - 1;
		}
		long long cd = i-K;
		if(cd > N+1){
			cd = cd - N - 1;
		}else{
			cd = cd - 1;
		}
		count +=ab * cd;
	}



}
}
