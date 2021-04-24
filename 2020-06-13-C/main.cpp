#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <algorithm>
#include <utility>
using namespace std;


int main(int argc, char* argv[]){

	int N, K;
	scanf("%d %d", &N, &K);
	int A[N];
	for (int i=0; i<N; i++){
		scanf("%d", &A[i]);
	}

	for(int count=0; count<K; count++){
		int A_next[N];
		for (int i=0; i<N; i++){
			A_next[i]=1;
		}
		bool all=1;
		for (int i=0; i<N; i++){
			if(A[i]!=N){
				all = 0;
			}
		}
		if(all){
			break;
		}else{
			for (int i=0; i<N; i++){
//				printf("al");
				int lux = A[i]+1;
				for(int j=1; j<lux; j++){
					if (i+j<N){
						A_next[i+j]+=1;
					}
					if(i-j>=0){
						A_next[i-j]+=1;
					}
				}
			}
		}
		for(int i=0; i<N; i++){
			A[i] = A_next[i];
		}
	}
		for(int i=0; i<N-1; i++){
			printf("%d ", A[i]);
		}
		printf("%d\n", A[N-1]);

	return 0;
}




