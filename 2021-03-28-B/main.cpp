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
	long long n;
	cin >>n;
	vector<long long>a(n);
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	long long mod = 998244353;
	long long ans = (a[n-1]* a[n-1]) % mod;
	long long b = a[n-1];
	for(long long i=n-2;i>=0;i--){
		b = (2*b - a[i+1] + a[i])%mod;
		ans += (a[i] * b)%mod;
		ans %= mod;
	}
	cout<<ans<<endl;



}
