#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(int argc, char* argv[])
{
	int N, M;
	int A[100];
	scanf("%d %d", &N, &M);

	for(int i=0; i<N; i++){
		scanf("%d", &A[i]);
	}

//	printf("%d %d %d\n", N, M, A[N-1]);

	int sum_A = 0;

	for(int i=0; i<N; i++){
		sum_A += A[i];
	}


	int count = 0;
	double standard = (double)sum_A / (4.0 * (double)M);

	for(int i=0; i<N; i++){
		if((double)A[i] >= standard ){
			count++;
		}
	}

//	printf("%d %lf\n", sum_A, standard);
	if(count >= M){
		printf("Yes\n");

	}else{
		printf("No\n");
	}
	return 0;
}



