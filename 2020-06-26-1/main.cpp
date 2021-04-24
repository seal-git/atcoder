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

int gcd(int a, int b){
	if(a%b==0){
		return b;
	}else{
		return(gcd(b, a%b));
	}
}

int lcm(int a, int b){
	return(a*b/gcd(a, b));
}

int main(int argc, char* argv[]){
	int n;
	scanf("%d", &n);

	int LCM = lcm(360, n);

	printf("%d\n", LCM/n);


	return 0;
}
