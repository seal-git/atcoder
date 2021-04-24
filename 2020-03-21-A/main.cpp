#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(int argc, char* argv[])
{
	int N, M, NC, MC, answer;
	scanf("%d %d", &N, &M);

	if(N >= 2){
		NC = N*(N-1)/2;
	}else{
		NC = 0;
	}
	if(M >= 2){
		MC = M*(M-1)/2;
	}else{
		MC = 0;
	}

	answer = NC + MC;

	printf("%d\n", answer);
	return 0;
}



