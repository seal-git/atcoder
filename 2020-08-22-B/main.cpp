#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <queue>
#include <algorithm>
#include <utility>
#include <vector>
#include <tuple>
#include <numeric>
using namespace std;


int main(int argc, char* argv[]){
	char N[200001];
	scanf("%s", N);
	string N_str = N;
	long long sum = 0;
	for(int i=0; i<(int)N_str.length(); i++){
//		printf("%c", N_str[i]);
		string str = N_str.substr(i, 1);
		int n = atoi(str.c_str());
		sum += (long long)n;
	}
//	printf("%lld", sum);
	if(sum%9==0){
		printf("Yes\n");
	}else{
		printf("No\n");
	}

}
