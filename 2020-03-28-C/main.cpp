#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(int argc, char* argv[])
{
	int K, N;
	int A[2];
	int d, A_0, d_last;
	int d_max = 0;
	scanf("%d %d", &K, &N);
	scanf("%d", &A[0]);
	A_0 = A[0];
	for(int i=0; i<N-1; i++){
		scanf("%d", &A[1]);
		d = A[1] - A[0];
		if(d > d_max){
			d_max = d;
		}
		A[0] = A[1];
	}
	d_last = K - A[0] + A_0;
	if(d_last > d_max){
				d_max = d_last;
		}

	int y = K - d_max;

	printf("%d", y);
	return 0;
}



