#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;


int main(int argc, char* argv[])
{
	long N, K;
	scanf("%ld %ld", &N, &K);

//	prlongf("%ld %ld\n", N, K);

	long mod = N%K;

//	prlongf("%d\n", mod);
	long K_mod = abs(mod - K);
	long y;
	if(mod < K_mod){
		y = mod;
	}else{
		y = K_mod;
	}

	printf("%ld\n", y);

	return 0;
}



