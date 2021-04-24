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
	int N;
	scanf("%d",&N);
	long long A[N];
	for(int i=0; i<N; i++){
		scanf("%lld",&A[i]);
	}

	long long front=0;
	long long sum_dai=0;
	for(int i=0; i<N; i++){
		if(A[i]<front){
			sum_dai+=front-A[i];

		}else{
			sum_dai+=0;
			front = A[i];
		}
	}
	printf("%lld\n",sum_dai);



}
