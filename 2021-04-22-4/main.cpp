#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int modpow(long long a, long long n, long long p){
	if(n==0){
		return 1;
	}
	if(n == 1){
		return a%p;
	}else if(n % 2 == 1){
		return (a * modpow(a, n-1, p)) % p;
	}else{
		long long t = modpow(a, n/2, p);
		return (t * t) % p;
	}
}


int main(){
	long long n,p;
	cin>>n>>p;
	long long mod = 1000000007;
	long long ans = ((p-1) * modpow(p-2, n-1, mod)) % mod;
	cout<<ans<<endl;
	return 0;
}
