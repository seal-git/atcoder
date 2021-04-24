#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

int main(int argc, char* argv[]){

	int H, N;
	scanf("%d %d", &H, &N);

	int A[100005];

	int sum=0;
	for(int i=0; i<N; i++){
		scanf("%d", &A[i]);
		sum += A[i];
	}

	if(sum >= H){
		printf("Yes\n");
	}else{
		printf("No\n");

	}



	return 0;
}



