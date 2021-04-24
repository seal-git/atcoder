#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

int main(int argc, char* argv[]){
	long long N, K;

	scanf("%lld %lld", &N, &K);
	long long possible_all=0;

	long long min=(K-1)*K/2;
	//m個選ぶときに作れる最小の和:sum(0~m-1):初期値m=K
	long long max=(N*(N+1)-(N-K)*(N-K+1))/2;
	//m個選ぶときに作れる最大の和:sum(N-m+1~N):初期値m=K

//	printf("%lld %lld\n", min, max);
	for(long long m=K; m<=N+1; m++){

		long long possible_m=max -min + 1; //m個選ぶときに作れる和の個数
		possible_all+=possible_m % 1000000007;
		possible_all = possible_all % 1000000007;

		min+=m;
		max+=N-m;
	}

	printf("%lld\n", possible_all);

	return 0;
}



