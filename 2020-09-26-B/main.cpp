#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <algorithm>
#include <utility>
#include <vector>
#include <tuple>
#include <numeric>
using namespace std;


int main(int argc, char* argv[]){
	long long A, B, C, D;
	scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
	if(A<C && B<C){
		printf("No\n");
	}else if(D<A&&D<B){
		printf("No\n");
	}else{
		printf("Yes\n");
	}


}
