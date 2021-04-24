#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

int main(int argc, char* argv[]){

	long long N, M, X;
	scanf("%lld %lld %lld", &N, &M, &X);

	long long C[N];
	long long A[N][M];
	long long sum_C = 0;
	long long sum_A[M] = {0};
	for(int i=0; i<N; i++){
		scanf("%lld", &C[i]);
		sum_C+=C[i];
		for(int j=0; j<M; j++){
			scanf("%lld", &A[i][j]);
			sum_A[j] += A[i][j];
		}
	}

//	printf("%d %d\n", sum_C, sum_A[0]);
	int check=0;
	for(int i=0; i<M; i++){
		if(sum_A[i] < X){
			check++;
			break;
		}
	}

	if(check == 0){
		int index[N];
		for(int i=0; i<N; i++){
			index[i] = i;
		}
		for(int i=0; i<N-1; i++){
			for(int j=N-1; j>i; j--){
				if(C[j] > C[j-1]){
					long long tmp = index[j];
					long long tmp2 = C[j];
					index[j] = index[j-1];
					index[j-1] = tmp;
					C[j] = C[j-1];
					C[j-1] = tmp2;
				}
			}
		}
		for(int i=0; i<N; i++){
//			printf("%d %d\n", index[i], C[i]);
		}

		for(int i=0; i<N; i++){
			int idx = index[i];
			int check2 = 0; //引いてよいか
			for(int j=0; j<M; j++){
				if(sum_A[j] - A[idx][j] < X){
					check2++;
					break;
				}
			}
			if(check2 == 0){
				for(int j=0; j<M; j++){
					sum_A[j] -= A[idx][j];
				}
				sum_C -= C[i];
//				printf("idx:%d %d\n", idx, C[i]);
			}
		}
	}

if(check==0){
	printf("%lld\n", sum_C);
}else{
	printf("-1\n");
}

return 0;
}
/*例えば、
 *4 3 10
500 8 8 8
400 4 4 4
300 7 7 7
100 2 2 2
 *というパターンに対してWAになってしまう。
 *おとなしく全探索。
 *
 */



