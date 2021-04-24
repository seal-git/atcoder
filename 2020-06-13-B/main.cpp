#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <algorithm>
#include <utility>
using namespace std;


int main(int argc, char* argv[]){

long long A, B, V, W, T;
scanf("%lld %lld %lld %lld %lld", &A, &V, &B, &W, &T);

//printf("%lld %lld %lld %lld %lld", A, V, B, W, T);
if((V-W)*T>=abs(A-B)){
	printf("YES\n");
}else{
	printf("NO\n");
}
	return 0;
}




