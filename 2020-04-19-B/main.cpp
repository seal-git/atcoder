#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

int main(int argc, char* argv[]){

	int N, M;
	int A[20000];

	scanf("%d %d", &N, &M);

	int sum =0 ;
	for(int i=0; i<M; i++){
		scanf("%d", &A[i]);
		sum+= A[i];
	}
	if(N-sum < 0){
		printf("-1\n");
	}else{
		printf("%d\n", N-sum);
	}
	return 0;
}



