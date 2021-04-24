#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

int main(int argc, char* argv[]){
	int N;
	int A;

	scanf("%d", &N);
	int count[200005] = {};

	for(int i=1; i<N; i++){
		scanf("%d", &A);
		count[A]++;
	}

	for(int i=1; i<N+1; i++){
		printf("%d\n", count[i]);
	}

	return 0;
}



