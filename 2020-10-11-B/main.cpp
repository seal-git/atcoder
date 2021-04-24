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

long long gcd(long long a,long long b){
	if(a<b){
		long long  tmp = a;
		a = b;
		b = tmp;
	}
	if(a%b==0){
		return b;
	}else{
		long long  p = a%b ;
		return gcd(b,p);
	}


}

int main(int argc, char* argv[]){
	int N;
	cin >> N ;
	vector<long long> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	long long ans;
	if(N>1){
		ans = gcd(A[0],A[1]);
		for(int i=2; i<N; i++){
			ans = gcd(ans, A[i]);
		}
	}else{
		ans = A[0];
	}
	cout << ans<<endl;

	return 0;
}
