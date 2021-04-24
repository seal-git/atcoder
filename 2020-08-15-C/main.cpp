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
	long long X,K,D;
	scanf("%lld %lld %lld",&X, &K, &D);

	long long p = abs(X)/D;
	long long q = abs(X)%D;
	long long ans;
	if(p > K){
		if(X >= 0){
			ans = X - K*D;
		}else{
			ans = abs(X + K*D);
		}
	}else{
		if(X>=0){
			long long ans1 = X - p*D;
			long long ans2 = abs(X - (p+1)*D);
			if((K - p) % 2 == 0){
				ans = ans1;
			}else{
				ans = ans2;
			}
		}else{
			long long ans1 = abs(X + p*D);
			long long ans2 = X + (p+1)*D;
			if((K - p) % 2 == 0){
				ans = ans1;
			}else{
				ans = ans2;
			}
		}
	}

printf("%lld\n", ans);


}
