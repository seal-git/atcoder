#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

int main(int argc, char* argv[]){

	int N;
	long long K;
	scanf("%d %lld", &N, &K);

	int A[N];
	for(int i=0; i<N; i++){
		scanf("%d", &A[i]);
	}
	int now=1;
	int loop, loop_start, loop_point;
	int memory[N] = {0};
	memory[0] = 0;

	for(int i=1; i<N+5; i++){
		now = A[now-1];
//		printf("%d\n", now);
		if(memory[now-1] != 0){
			loop = i - memory[now-1];
			loop_start = memory[now-1];
			loop_point = now;
			break;
		}else{
			memory[now-1] = i;
		}
	}
//	printf("%d %d %d\n", loop, loop_start, loop_point);
	if(K > loop_start){
		long long mod_loop = (K - (long long)loop_start) % (long long) loop;
		now = loop_point;
		for(int i=0; i<mod_loop; i++){
			now = A[now-1];
		}
	}else{
		now = 1;
		for(int i=0; i<K; i++){
			now = A[now-1];
		}
	}
	printf("%d", now);


	return 0;
}





