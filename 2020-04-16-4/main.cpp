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
	for(int i=0; i<N; i++){
		scanf("%d", &A[i]);
	}
	int B[M] = {0};

	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			if(A[i] == j+1){
				B[j] += 1;
//				printf("%d", A[i]);

				break;
			}
		}
	}
	int max=0;
	for(int i=0; i<M; i++){
		if(B[i] > max){
			max = B[i];
		}
	}

	printf("%d", max);

	return 0;
}



