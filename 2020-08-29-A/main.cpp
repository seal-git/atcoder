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
	long long D,T,S;
	scanf("%lld %lld %lld", &D,&T,&S);
	if(D <= T*S){
		printf("Yes\n");
	}else{
		printf("No\n");
	}

}
