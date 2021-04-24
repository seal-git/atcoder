#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;


int main(int argc, char* argv[])
{
	int N;

	scanf("%d", &N);

	int A[N];

	for(int i=0; i<N; i++){
		scanf("%d", &A[i]);
	}

	int flag = 0;
	int count = 0;

	while(1){
		for(int i=0; i<N; i++){
			if(A[i] % 2 == 0){
				A[i] = A[i] / 2;
			}else{
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			break;
		}else{
			count++;
		}
	}

	printf("%d", count);

	return 0;
}



