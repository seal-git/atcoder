#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;


int main(int argc, char* argv[])
{
	long long A = 0;
	int N;

	scanf("%d", &N);

	for(int i=1; i<N+1; i++){
		if(i % 3 != 0 && i % 5 != 0){
			A += i;
		}
	}

	printf("%lld", A);

	return 0;
}



