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
	long long N,K;
	scanf("%lld %lld",&N, &K);

	vector<long long> P(N);
	vector<long long> C(N);
	vector<bool> idx_list(N);
	for(long long i=0; i<N; i++){
		scanf("%lld", P[i]);
		idx_list[i] = false;
	}
	for(long long i=0; i<N; i++){
		scanf("%lld", C[i]);
	}

	int first_idx=1;
	int idx = first_idx;
	idx_list[0] = true;
	long long score_sum = 0;

	while(1){
		int next_idx = P[idx];
		if(next_idx==first_idx){
			break;
		}
		idx_list[next_idx-1] = true;
		score_sum += C[next_idx-1];
	}






}
