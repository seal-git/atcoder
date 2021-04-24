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
	int N, X, T;
	scanf("%d %d %d", &N, &X, &T);
	if(N%X==0){
		printf("%d\n", N / X * T);
	}else{
		printf("%d\n", (N / X+1)*T);
	}

}
