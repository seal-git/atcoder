#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

int main(int argc, char* argv[])
{
	int N, M;
	scanf("%d %d", &N, &M);

	int A[N];
	int B[M];
	int C[N+M];

	for(int i=0; i<N; i++){
		scanf("%d", &A[i]);
	}
	for(int i=0; i<M; i++){
		scanf("%d", &B[i]);
	}

	int A_idx = 0;
	int B_idx = 0;
	int current_A, current_B;

	for(int i=0; i<N+M; i++){
		if(A_idx >= N){
			current_A = 5000;
		}else{
			current_A = A[A_idx];
		}
		if(B_idx >= M){
			current_B = 5000;
		}else{
			current_B = B[B_idx];
		}

		if(current_A<=current_B){
			C[i] = current_A;
			A_idx++;
		}else{
			C[i] = current_B;
			B_idx++;
		}

	}

	for(int i=0; i<N+M; i++){
		printf("%d\n", C[i]);
	}


	return 0;
}



