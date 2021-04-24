#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

int main(int argc, char* argv[]){
	int A, B, C, K;

	scanf("%d %d %d %d", &A, &B, &C, &K);

	int y;
	if(A >= K){
		y = K;
	}else if(A+B >= K){
		y = A;
	}else if(A+B+C >= K){
		y = A - (K-A-B);
	}else {
		y = A-C;
	}
	printf("%d\n", y);

	return 0;
}



